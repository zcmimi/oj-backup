# Magical Array

## 题意翻译

如果一个数组的最小值和最大值相同，则称这个数组是Magical的。定义一个数组的子数组为一个数组中的连续的数组成的序列。给你一个数组，求这个数组中Magical的子数组有多少个。

## 题目描述

Valery is very interested in magic. Magic attracts him so much that he sees it everywhere. He explains any strange and weird phenomenon through intervention of supernatural forces. But who would have thought that even in a regular array of numbers Valera manages to see something beautiful and magical.

Valera absolutely accidentally got a piece of ancient parchment on which an array of numbers was written. He immediately thought that the numbers in this array were not random. As a result of extensive research Valera worked out a wonderful property that a magical array should have: an array is defined as magic if its minimum and maximum coincide.

He decided to share this outstanding discovery with you, but he asks you for help in return. Despite the tremendous intelligence and wit, Valera counts very badly and so you will have to complete his work. All you have to do is count the number of magical subarrays of the original array of numbers, written on the parchment. Subarray is defined as non-empty sequence of consecutive elements.

## 输入输出格式

### 输入格式

The first line of the input data contains an integer $ n $ ( $ 1<=n<=10^{5} $ ). The second line contains an array of original integers $ a_{1},a_{2},...,a_{n} $ ( $ -10^{9}<=a_{i}<=10^{9} $ ).

### 输出格式

Print on the single line the answer to the problem: the amount of subarrays, which are magical.

Please do not use the %lld specificator to read or write 64-bit numbers in C++. It is recommended to use cin, cout streams (you can also use the %I64d specificator).

## 输入输出样例

### 输入样例 #1

```cpp
4
2 1 1 4

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
5
-2 -2 -2 0 1

```
### 输出样例 #2

```cpp
8

```
## 说明

Notes to sample tests:

Magical subarrays are shown with pairs of indices \[a;b\] of the beginning and the end.

In the first sample: \[1;1\], \[2;2\], \[3;3\], \[4;4\], \[2;3\].

In the second sample: \[1;1\], \[2;2\], \[3;3\], \[4;4\], \[5;5\], \[1;2\], \[2;3\], \[1;3\].

