# Unordered Subsequence

## 题意翻译

【题面描述】

如果一个序列是递增或递降的（相等也算增或降），则称它为有序的。给定一个序列，找出最长的非有序的子序列。子序列可以不连续。

【输入格式】

第1行，序列长度N。

第2行，N个数的序列。

【输出格式】

第1行，最长长度K。

第2行，K个数，表示最长非有序子序列中，每个数在原序列中的下标。

感谢@刷题永动机 提供的翻译

## 题目描述

The sequence is called ordered if it is non-decreasing or non-increasing. For example, sequnces \[3, 1, 1, 0\] and \[1, 2, 3, 100\] are ordered, but the sequence \[1, 3, 3, 1\] is not. You are given a sequence of numbers. You are to find it's shortest subsequence which is not ordered.

A subsequence is a sequence that can be derived from the given sequence by deleting zero or more elements without changing the order of the remaining elements.

## 输入输出格式

### 输入格式

The first line of the input contains one integer $ n $ ( $ 1<=n<=10^{5} $ ). The second line contains $ n $ space-separated integers — the given sequence. All numbers in this sequence do not exceed $ 10^{6} $ by absolute value.

### 输出格式

If the given sequence does not contain any unordered subsequences, output $ 0 $ . Otherwise, output the length $ k $ of the shortest such subsequence. Then output $ k $ integers from the range \[1.. $ n $ \] — indexes of the elements of this subsequence. If there are several solutions, output any of them.

## 输入输出样例

### 输入样例 #1

```cpp
5
67 499 600 42 23

```
### 输出样例 #1

```cpp
3
1 3 5

```
### 输入样例 #2

```cpp
3
1 2 3

```
### 输出样例 #2

```cpp
0

```
### 输入样例 #3

```cpp
3
2 3 1

```
### 输出样例 #3

```cpp
3
1 2 3

```
