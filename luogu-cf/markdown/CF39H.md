# Multiplication Table

## 题意翻译

输入进制k(2<=k

提示:乘法表规格为(k-1)* (k-1)，评测自动过滤多余空格。

Translated by @Lolierl

## 题目描述

Petya studies positional notations. He has already learned to add and subtract numbers in the systems of notations with different radices and has moved on to a more complicated action — multiplication. To multiply large numbers one has to learn the multiplication table. Unfortunately, in the second grade students learn only the multiplication table of decimals (and some students even learn it in the first grade). Help Petya make a multiplication table for numbers in the system of notations with the radix $ k $ .

## 输入输出格式

### 输入格式

The first line contains a single integer $ k $ ( $ 2<=k<=10 $ ) — the radix of the system.

### 输出格式

Output the multiplication table for the system of notations with the radix $ k $ . The table must contain $ k-1 $ rows and $ k-1 $ columns. The element on the crossing of the $ i $ -th row and the $ j $ -th column is equal to the product of $ i $ and $ j $ in the system of notations with the radix $ k $ . Each line may have any number of spaces between the numbers (the extra spaces in the samples are put for clarity).

## 输入输出样例

### 输入样例 #1

```cpp
10

```
### 输出样例 #1

```cpp
1  2  3  4  5  6  7  8  9
2  4  6  8 10 12 14 16 18
3  6  9 12 15 18 21 24 27
4  8 12 16 20 24 28 32 36
5 10 15 20 25 30 35 40 45
6 12 18 24 30 36 42 48 54
7 14 21 28 35 42 49 56 63
8 16 24 32 40 48 56 64 72
9 18 27 36 45 54 63 72 81

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
1  2
2 11
```


