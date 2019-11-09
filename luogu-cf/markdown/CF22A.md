# Second Order Statistics

## 题意翻译

题面大意

给定一个数组，输出其中第二小的整数（相等的整数只计算一次）

输入

第一行，一个整数n（1<=n

第二行，n个绝对值小于100的整数。

输出

一行。如果该数组存在第二小整数，则输出。如果不存在，则输出NO.

## 题目描述

Once Bob needed to find the second order statistics of a sequence of integer numbers. Lets choose each number from the sequence exactly once and sort them. The value on the second position is the second order statistics of the given sequence. In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.

## 输入输出格式

### 输入格式

The first input line contains integer $ n $ ( $ 1<=n<=100 $ ) — amount of numbers in the sequence. The second line contains $ n $ space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.

### 输出格式

If the given sequence has the second order statistics, output this order statistics, otherwise output NO.

## 输入输出样例

### 输入样例 #1

```cpp
4
1 2 2 -4

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
5
1 2 3 1 1

```
### 输出样例 #2

```cpp
2

```
