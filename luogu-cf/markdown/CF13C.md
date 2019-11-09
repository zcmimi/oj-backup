# Sequence

## 题意翻译

给定一个序列，每次操作可以把某个数+1-1。要求把序列变成非降数列。而且要求修改后的数列只能出现修改前的数。

## 题目描述

Little Petya likes to play very much. And most of all he likes to play the following game:

He is given a sequence of $ N $ integer numbers. At each step it is allowed to increase the value of any number by $ 1 $ or to decrease it by $ 1 $ . The goal of the game is to make the sequence non-decreasing with the smallest number of steps. Petya is not good at math, so he asks for your help.

The sequence $ a $ is called non-decreasing if $ a_{1}<=a_{2}<=...<=a_{N} $ holds, where $ N $ is the length of the sequence.

## 输入输出格式

### 输入格式

The first line of the input contains single integer $ N $ ( $ 1<=N<=5000 $ ) — the length of the initial sequence. The following $ N $ lines contain one integer each — elements of the sequence. These numbers do not exceed $ 10^{9} $ by absolute value.

### 输出格式

Output one integer — minimum number of steps required to achieve the goal.

## 输入输出样例

### 输入样例 #1

```cpp
5
3 2 -1 2 11

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
5
2 1 1 1 1

```
### 输出样例 #2

```cpp
1

```
