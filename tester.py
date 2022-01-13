import os
import subprocess
import shutil
import getopt
import sys
import glob
import time

path_includes = "inc"

class colors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    END = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

folder_name = "TESTER_CONTAINERS42"
# folder_name = "tester"
flags = "-Wall -Wextra -Werror -std=c++98"

def main(argv):
	try:
		opts, args = getopt.getopt(argv,"vsmdlot")
	except getopt.GetoptError:
		print ('Problem args tester.py')
		sys.exit(2)
	all_test = True if not opts else False
	vector_test = False
	stack_test = False
	map_test = False
	other_test = False
	leaks_test = False
	time_test = False
	for opt, arg in opts:
		if opt == "-v" : vector_test = True
		if opt == "-s" : stack_test = True
		if opt == "-m" : map_test = True
		if opt == "-o" : other_test = True
		if opt == "-l" : leaks_test = True
		if opt == "-t" : time_test = True
		if opt == "-d" :
			if os.path.exists(folder_name + "/results"):
				shutil.rmtree(folder_name + "/results");
			if os.path.exists(folder_name + "/bin"):
				shutil.rmtree(folder_name + "/bin")

	dirs = os.listdir(folder_name + "/srcs")
	if "main.cpp" in dirs : dirs.remove("main.cpp")
	if "main.cpp" in dirs : dirs.remove("main.cpp")
	if "tester.py" in dirs : dirs.remove("tester.py")
	for dir in dirs:
		if all_test or (vector_test and dir == "vector") or (stack_test and dir == "stack") or (map_test and dir == "map") or (other_test and dir == "other"):
			sub_dirs = os.listdir(folder_name + "/srcs/" + dir)
			print(colors.OKBLUE + colors.BOLD + "============\n-> " + dir.upper() + " <-\n============" + colors.END)
			for sub_dir in sub_dirs:
				path_srcs_test = folder_name + "/srcs/" + dir + "/" + sub_dir
				path_result = (folder_name + "/results/" + dir + "/" + sub_dir).replace('.cpp', '')
				path_bin = (folder_name + "/bin/" + dir + "/" + sub_dir).replace('.cpp', '')
				os.makedirs(path_bin, exist_ok = True)
				os.makedirs(path_result, exist_ok = True)
				# if not os.path.exists(path_bin + "_mine") or (os.path.exists(path_bin + "_mine") and os.path.getctime(path_srcs_test) > os.path.getctime(path_bin + "_mine")):
				subprocess.run(("clang++ -D MINE " + flags + " " + folder_name + "/srcs/main.cpp -I" + folder_name + "/inc -I" + path_includes + " " + path_srcs_test + " -o " + path_bin + "/mine").split(), capture_output=False)
				# if not os.path.exists(path_bin + "_std") or (os.path.exists(path_bin + "_std") and os.path.getctime(path_srcs_test) > os.path.getctime(path_bin + "_std")):
				subprocess.run(("clang++ " + flags + " " + folder_name + "/srcs/main.cpp -I" + folder_name + "/inc -I" + path_includes + " " + path_srcs_test + " -o " + path_bin + "/std").split(), capture_output=False)
				with open((path_result + "/stdout_mine"), "w") as outfile, open((path_result + "/stderror_mine"), "w") as errfile:
					subprocess.run((path_bin + "/mine ").split(), stdout=outfile, stderr=errfile)
				with open((path_result + "/stdout_std"), "w") as outfile, open((path_result + "/stderror_std"), "w") as errfile:
					subprocess.run((path_bin + "/std").split(), stdout=outfile, stderr=errfile)

				with open((path_result + "/diff_stdout"), "w") as outfile:
					subprocess.run(("diff " + path_result + "/stdout_mine " + path_result + "/stdout_std").split(), stdout=outfile)
				if os.path.getsize(path_result + "/diff_stdout") == 0:
					print(colors.BOLD + path_result[path_result.rfind("/") + 1:] + " : " + colors.OKGREEN + "[OK]" + colors.END, end = "" if leaks_test or all_test else "\n")
				else:
					print(colors.BOLD + path_result[path_result.rfind("/") + 1:] + " : " + colors.FAIL + "[NOK]" + colors.END, end = "" if leaks_test else "\n")
					with open(path_result + "/diff_stdout", "r") as diff:
						print(diff.read())
				if all_test or leaks_test:
					print(colors.BOLD + " , leaks: ", end = "")
					with open((path_result + "/leaks_mine"), "w") as outfile:
						leaks_mine = subprocess.run(("leaks --atExit -- ./" + path_bin + "/mine").split(), stdout=outfile)
					if leaks_mine.returncode == 0:
						print(colors.BOLD + "mine=" + colors.OKGREEN + "[OK]" + colors.END, end = "")
					else:
						print(colors.BOLD + "mine=" + colors.FAIL + "[NOK]" + colors.END, end = "")
					with open((path_result + "/leaks_std"), "w") as outfile:
						leaks_std = subprocess.run(("leaks --atExit -- ./" + path_bin + "/std").split(), stdout=outfile)
					if leaks_std.returncode == 0:
						print(colors.BOLD + ", std=" + colors.OKGREEN + "[OK]" + colors.END)
					else:
						print(colors.BOLD + ", std=" + colors.FAIL + "[NOK]" + colors.END)
				if all_test or time_test:
					my_start = time.time()
					subprocess.run((path_bin + "/mine ").split(), stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
					my_end = time.time()
					std_start = time.time()
					subprocess.run((path_bin + "/mine ").split(), stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
					std_end = time.time()
					print("TIME : Me = ", round(my_end - my_start, 5), "s , Lib = ", round(std_end - std_start, 5), "s , Me/Lib = ", colors.BOLD + colors.OKGREEN, round((my_end - my_start)/(std_end - std_start), 2), colors.END)



if __name__ == "__main__":
   main(sys.argv[1:])
