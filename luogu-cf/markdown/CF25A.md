# IQ test

## 题意翻译

题目描述

Bob准备参加RP测试。他需要从n个数字中找出一个与众不同or不符合规律的数字。你需要帮助他检查答案。

输入输出格式

输入：

第一行：n（3≤n≤100）；

第二行：n个数字，以空格分开（保证有唯一解）。

输出：仅一行：与众不同or不符合规律的数字在原序列中是第几位（从1开始编号）。

## 题目描述

Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given $ n $ numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given $ n $ numbers finds one that is different in evenness.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 3<=n<=100 $ ) — amount of numbers in the task. The second line contains $ n $ space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

### 输出格式

Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

## 输入输出样例

### 输入样例 #1

```cpp
5
2 4 7 8 10

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
4
1 2 1 1

```
### 输出样例 #2

```cpp
2

```
