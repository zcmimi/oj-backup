# Correct Solution?

## 题意翻译

## 题目描述（舍弃各种乱七八糟的故事）

给定一个数$N$，要求把$N$的各个数位打乱，要求组成一个可能的，最小的数（最小数有可能含有前导$0$）。现在已经有一个“最小数”，请你判断这个“最小数”是不是最小数。

第一行输入n不含前导0。

第二行输入的假定的最小数可能含有前导0。

题目要求排序后的最小数不含前导0。

## 输入格式

两行。

第一行是给定的数$N$。

第二行是假定的$N$重组的“最小数”。

## 输出格式

一行。

如果输入的最小数就是$N$重组的最小数，输出“OK”。

否则输出“WRONG_ANSWER”。

Translated by LiM_817

## 题目描述

One cold winter evening Alice and her older brother Bob was sitting at home near the fireplace and giving each other interesting problems to solve. When it was Alice's turn, she told the number $ n $ to Bob and said:

—Shuffle the digits in this number in order to obtain the smallest possible number without leading zeroes.

—No problem! — said Bob and immediately gave her an answer.

Alice said a random number, so she doesn't know whether Bob's answer is correct. Help her to find this out, because impatient brother is waiting for the verdict.

## 输入输出格式

### 输入格式

The first line contains one integer $ n $ ( $ 0<=n<=10^{9} $ ) without leading zeroes. The second lines contains one integer $ m $ ( $ 0<=m<=10^{9} $ ) — Bob's answer, possibly with leading zeroes.

### 输出格式

Print OK if Bob's answer is correct and WRONG\_ANSWER otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
3310
1033

```
### 输出样例 #1

```cpp
OK

```
### 输入样例 #2

```cpp
4
5

```
### 输出样例 #2

```cpp
WRONG_ANSWER

```
