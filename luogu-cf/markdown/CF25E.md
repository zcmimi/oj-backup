# Test

## 题意翻译

给定3个字符串s1,s2,s3,试求一个字符串，使s1,s2,s3都是这个字符串的子串，并使这个字符串最短。输出最短字符串的长度l。

s1,s2,s3长度<=100000

Translated by 稀神探女

## 题目描述

Sometimes it is hard to prepare tests for programming problems. Now Bob is preparing tests to new problem about strings — input data to his problem is one string. Bob has 3 wrong solutions to this problem. The first gives the wrong answer if the input data contains the substring $ s_{1} $ , the second enters an infinite loop if the input data contains the substring $ s_{2} $ , and the third requires too much memory if the input data contains the substring $ s_{3} $ . Bob wants these solutions to fail single test. What is the minimal length of test, which couldn't be passed by all three Bob's solutions?

## 输入输出格式

### 输入格式

There are exactly 3 lines in the input data. The $ i $ -th line contains string $ s_{i} $ . All the strings are non-empty, consists of lowercase Latin letters, the length of each string doesn't exceed $ 10^{5} $ .

### 输出格式

Output one number — what is minimal length of the string, containing $ s_{1} $ , $ s_{2} $ and $ s_{3} $ as substrings.

## 输入输出样例

### 输入样例 #1

```cpp
ab
bc
cd

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
abacaba
abaaba
x

```
### 输出样例 #2

```cpp
11

```
