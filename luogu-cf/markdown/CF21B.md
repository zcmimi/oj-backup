# Intersection

## 题意翻译

一组满足函数$A_1x+B_1y+C_1=0$ 的点和另一组满足函数$A_2x+B_2y+C_2=0$ 的点中，在两组中都包含的点有几个？

输入输出格式：

输入格式：

第一行包含3个整数$A_1,B_1,C_1$ 。

第二行包含3个整数$A_2,B_2,C_2$ 。

（$-100<=A_1,B_1,C_1,A_2,B_2,C_2<=100$ )

输出格式：

输出直线交点个数，如果有无数个，请输出$-1$ 。

## 题目描述

You are given two set of points. The first set is determined by the equation $ A_{1}x+B_{1}y+C_{1}=0 $ , and the second one is determined by the equation $ A_{2}x+B_{2}y+C_{2}=0 $ .

Write the program which finds the number of points in the intersection of two given sets.

## 输入输出格式

### 输入格式

The first line of the input contains three integer numbers $ A_{1},B_{1},C_{1} $ separated by space. The second line contains three integer numbers $ A_{2},B_{2},C_{2} $ separated by space. All the numbers are between -100 and 100, inclusive.

### 输出格式

Print the number of points in the intersection or -1 if there are infinite number of points.

## 输入输出样例

### 输入样例 #1

```cpp
1 1 0
2 2 0

```
### 输出样例 #1

```cpp
-1

```
### 输入样例 #2

```cpp
1 1 0
2 -2 0

```
### 输出样例 #2

```cpp
1

```
