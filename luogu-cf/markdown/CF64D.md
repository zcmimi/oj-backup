# Presents【卡语言已隐藏】

## 题意翻译

题目大意：

读入三个数，输出它们的大小顺序（若多个数相同，它们的排行就随意）。

输入格式：

一行，三个数。

输出格式：

一行，三个数，分别表示这三个数的大小排行。

Translated by @SSL_ZYC_明天你好 

## 题目描述

You are given the prices of three presents. Also there are three sisters. It is known that the most valuable present is for the eldest sister. The second (by price) is for the second sister. And the less valuable present is for the youngest sister. If two (or three) presents have the same price, corresponding sisters may get the in a random way.

## 输入输出格式

### 输入格式

The only line contains three integer numbers $ a_{1},a_{2},a_{3} $ ( $ 1<=a_{1},a_{2},a_{3}<=100 $ ) — the prices of the presents.

### 输出格式

Print three numbers $ i_{1},i_{2},i_{3} $ ( $ 1<=i_{1},i_{2},i_{3}<=3 $ ), all of them should be distinct. The first number stands for the seniority of the sister which will get the first present (1 stands for the eldest, 3 for the youngest). The second and third numbers mean the seniority of the sisters which get the second and the third present respectively.

If there are multiple answers, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
11 13 1

```
### 输出样例 #1

```cpp
2 1 3 
```


### 输入样例 #2

```cpp
30 10 30

```
### 输出样例 #2

```cpp
1 3 2 
```


## 说明

In the second sample another possible answer is "2 3 1".

