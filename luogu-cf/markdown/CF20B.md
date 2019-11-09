# Equation

## 题意翻译

题目大意

给出一个形如Ax^2+Bx+C=0的式子，问有多少个解。

输入输出格式

输入格式

第一行：三个整数表示上式的A、B、C

输出格式

第一行：一个整数，表示解的个数，如果有无数个解，请输出-1。

接下来若干行：每行一个解，请按大小顺序输出。

## 题目描述

You are given an equation:

$ Ax^{2}+Bx+C=0 $ . Your task is to find the number of distinct roots of the equation and print all of them in ascending order.

## 输入输出格式

### 输入格式

The first line contains three integer numbers $ A,B $ and $ C $ ( $ -10^{5}<=A,B,C<=10^{5} $ ). Any coefficient may be equal to 0.

### 输出格式

In case of infinite root count print the only integer -1. In case of no roots print the only integer 0. In other cases print the number of root on the first line and the roots on the following lines in the ascending order. Print roots with at least 5 digits after the decimal point.

## 输入输出样例

### 输入样例 #1

```cpp
1 -5 6

```
### 输出样例 #1

```cpp
2
2.0000000000
3.0000000000
```


