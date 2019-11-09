# Big Maximum Sum

## 题意翻译

【题目描述】

Ahmed和Mostafa曾经一起竞争在许多编程比赛好几年了。他们的教练Fegla要求他们解决一个具有挑战性的问题，当然Ahmed能够解决它，但是Mostafa不能。

这个问题类似于最大连续子段和问题，但它有不同的格式和约束。

在最大连续子段和问题中，你得到一组整数，你必须在这个数组中找到一个或多个连续的元素，它们的和是最大可能的和。

但在这个问题上，你有n个小数列和一个索引，这个索引里一次包含着小数组的编号，根据这一个索引将小数列串成一个大的数列，每个小数组可能出现不止一次，求大数列的最大连续子段和。例如，假设小数组是{ 1, 6，- 2 }，{ 3, 3 }和{ - 5, 1 }。大数组中的索引是{ 2, 3, 1，3 }。因此大数组中的实际值在将它格式化为小数组的串联之后将是{ 3, 3，- 5, 1, 1，6，- 2，- 5, 1 }。在这个例子中，最大和是9。你能帮Mostafa解决这个问题吗？

【输入格式】

第一行n和m两个整数，分别代表小数列个数和索引长度，接下来的n行，每行开头一个整数l，表示该数列长度，接下来l个整数a[i]，分别是小数列的i项。第n+2行，m个整数为索引。

【输出格式】

一个整数表示最大连续子段和，用长整数形式输出

感谢@dijstra 提供的翻译

## 题目描述

Ahmed and Mostafa used to compete together in many programming contests for several years. Their coach Fegla asked them to solve one challenging problem, of course Ahmed was able to solve it but Mostafa couldn't.

This problem is similar to a standard problem but it has a different format and constraints.

In the standard problem you are given an array of integers, and you have to find one or more consecutive elements in this array where their sum is the maximum possible sum.

But in this problem you are given $ n $ small arrays, and you will create one big array from the concatenation of one or more instances of the small arrays (each small array could occur more than once). The big array will be given as an array of indexes (1-based) of the small arrays, and the concatenation should be done in the same order as in this array. Then you should apply the standard problem mentioned above on the resulting big array.

For example let's suppose that the small arrays are {1, 6, -2}, {3, 3} and {-5, 1}. And the indexes in the big array are {2, 3, 1, 3}. So the actual values in the big array after formatting it as concatenation of the small arrays will be {3, 3, -5, 1, 1, 6, -2, -5, 1}. In this example the maximum sum is 9.

Can you help Mostafa solve this problem?

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ , $ n $ is the number of the small arrays ( $ 1<=n<=50 $ ), and $ m $ is the number of indexes in the big array ( $ 1<=m<=250000 $ ). Then follow $ n $ lines, the $ i $ -th line starts with one integer $ l $ which is the size of the $ i $ -th array ( $ 1<=l<=5000 $ ), followed by $ l $ integers each one will be greater than or equal -1000 and less than or equal 1000. The last line contains $ m $ integers which are the indexes in the big array, and you should concatenate the small arrays in the same order, and each index will be greater than or equal to 1 and less than or equal to $ n $ .

The small arrays are numbered from 1 to $ n $ in the same order as given in the input. Some of the given small arrays may not be used in big array.

Note, that the array is very big. So if you try to build it straightforwardly, you will probably get time or/and memory limit exceeded.

### 输出格式

Print one line containing the maximum sum in the big array after formatting it as described above. You must choose at least one element for the sum, i. e. it cannot be empty.

Please, do not use %lld specificator to write 64-bit integers in C++. It is preferred to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
3 4
3 1 6 -2
2 3 3
2 -5 1
2 3 1 3

```
### 输出样例 #1

```cpp
9

```
### 输入样例 #2

```cpp
6 1
4 0 8 -3 -10
8 3 -2 -5 10 8 -9 -5 -4
1 0
1 -3
3 -8 5 6
2 9 6
1

```
### 输出样例 #2

```cpp
8

```
