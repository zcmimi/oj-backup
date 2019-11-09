# Increasing Sequence

## 题意翻译

把数列中一个数加上d算作一次操作

求最少几次操作能把这个数列变为递增数列

Translated by @Playnext

## 题目描述

A sequence $ a_{0},a_{1},...,a_{t-1} $ is called increasing if $ a_{i-1}<a_{i} $ for each $ i:0<i<t $ . You are given a sequence $ b_{0},b_{1},...,b_{n-1} $ and a positive integer $ d $ . In each move you may choose one element of the given sequence and add $ d $ to it. What is the least number of moves required to make the given sequence increasing?

## 输入输出格式

### 输入格式

The first line of the input contains two integer numbers $ n $ and $ d $ ( $ 2<=n<=2000,1<=d<=10^{6} $ ). The second line contains space separated sequence $ b_{0},b_{1},...,b_{n-1} $ ( $ 1<=b_{i}<=10^{6} $ ).

### 输出格式

Output the minimal number of moves needed to make the sequence increasing.

## 输入输出样例

### 输入样例 #1

```cpp
4 2
1 3 3 2

```
### 输出样例 #1

```cpp
3

```
