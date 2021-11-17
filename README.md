# TESTER_CONTAINERS42
This tester compare the result from utilisation of your namespace ft and the std namespace.
It check also if your project and the std have leaks.

steps to test your project:

- ![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) `#f03c15`
- ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) `#c5f015`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `#1589F0`

```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```

<span style="color: green"> Some green text </span>

1) clone the repository directly in your FT_CONTAINERS repository using :
	https://github.com/Totolosa/TESTER_CONTAINERS42.git

2) Modify the variable "path include" in the line 8 of the file TERSTER_CONTAINER42/tester.py :
	--> put the path to your includes files .hpp. By default it's "inc"

3) from the root of your ft_containers repository, use the next command to test all your project:
```diff
#	python3 TESTER_CONTAINERS42/tester.py
```
Note: You can add the following options after the previous command, using them alone on mixed:
	• "-v" to test the VECTOR part
	• "-s" to test the STACK part
	• "-m" to test the MAP part
	• "-l" to test leaks on all parts tested
	• "-d" to delete bin and result repositories in TESTER_CONTAINERS42/

You can check and compare the outputs of your project and the std library in TESTER_CONTAINERS42/results/...

ENJOY ! :)