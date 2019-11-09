# LCIS

## 题意翻译

求两个串的最长公共上升子序列。

## 题目描述

This problem differs from one which was on the online contest.

The sequence $ a_{1},a_{2},...,a_{n} $ is called increasing, if $ a_{i}<a_{i+1} $ for $ i<n $ . The sequence $ s_{1},s_{2},...,s_{k} $ is called the subsequence of the sequence $ a_{1},a_{2},...,a_{n} $ , if there exist such a set of indexes $ 1<=i_{1}<i_{2}<...<i_{k}<=n $ that $ a_{ij}=s_{j} $ . In other words, the sequence $ s $ can be derived from the sequence $ a $ by crossing out some elements. You are given two sequences of integer numbers. You are to find their longest common increasing subsequence, i.e. an increasing sequence of maximum length that is the subsequence of both sequences.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=500 $ ) — the length of the first sequence. The second line contains $ n $ space-separated integers from the range $ [0,10^{9}] $ — elements of the first sequence. The third line contains an integer $ m $ ( $ 1<=m<=500 $ ) — the length of the second sequence. The fourth line contains $ m $ space-separated integers from the range $ [0,10^{9}] $ — elements of the second sequence.

### 输出格式

In the first line output $ k $ — the length of the longest common increasing subsequence. In the second line output the subsequence itself. Separate the elements with a space. If there are several solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
7
2 3 1 6 5 4 6
4
1 3 5 6

```
### 输出样例 #1

```cpp
3
3 5 6 

```
### 输入样例 #2

```cpp
5
1 2 0 2 1
3
1 0 1

```
### 输出样例 #2

```cpp
2
0 1 

```
