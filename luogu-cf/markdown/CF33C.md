# Wonderful Randomized Sum

## 题意翻译

某人数学老师让他做一道难题。然后他不会，就来请你了

给你一个数字序列，你可以选择它的一些前缀或后缀(可能是空的)中的每个数字都乘以-1。前缀和后缀可以交叉也可以为空。问能得到的最大序列和是多少。

Translated by @liyifeng

## 题目描述

Learn, learn and learn again — Valera has to do this every day. He is studying at mathematical school, where math is the main discipline. The mathematics teacher loves her discipline very much and tries to cultivate this love in children. That's why she always gives her students large and difficult homework. Despite that Valera is one of the best students, he failed to manage with the new homework. That's why he asks for your help. He has the following task. A sequence of $ n $ numbers is given. A prefix of a sequence is the part of the sequence (possibly empty), taken from the start of the sequence. A suffix of a sequence is the part of the sequence (possibly empty), taken from the end of the sequence. It is allowed to sequentially make two operations with the sequence. The first operation is to take some prefix of the sequence and multiply all numbers in this prefix by $ -1 $ . The second operation is to take some suffix and multiply all numbers in it by $ -1 $ . The chosen prefix and suffix may intersect. What is the maximum total sum of the sequence that can be obtained by applying the described operations?

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=10^{5} $ ) — amount of elements in the sequence. The second line contains $ n $ integers $ a_{i} $ ( $ -10^{4}<=a_{i}<=10^{4} $ ) — the sequence itself.

### 输出格式

The first and the only line of the output should contain the answer to the problem.

## 输入输出样例

### 输入样例 #1

```cpp
3
-1 -2 -3

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
5
-4 2 0 5 0

```
### 输出样例 #2

```cpp
11

```
### 输入样例 #3

```cpp
5
-1 10 -5 10 -2

```
### 输出样例 #3

```cpp
18

```
