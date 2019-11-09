# Start of the season

## 题意翻译

## 题目描述

在伯兰的足球节开幕式中有一个奇怪的魔术秀。最有经验的魔术师会找一个n×n的矩阵（n为偶数）。足球节没有这个魔术秀绝对不会开始。这个矩阵应该包含0~n-1的正整数，且包含以下三条规则：

1、主对角线上的数应该都是0

2、且整个矩阵应该都是对称的

3、每行每列上的数都是不同的。

魔术师很不喜欢一遍又一遍的接矩阵（魔术师真懒），于是就请你写一个程序来帮助他们解决矩阵问题。

## 输入输出格式

### 输入格式

只有一行，包含一个偶整数（2<=n<=1000)

### 输出格式

n行n列的矩阵。数与数之间要空格。如果有多个答案，输出任意一个即可

感谢@deadpool123 提供的翻译

## 题目描述

Before the start of the football season in Berland a strange magic ritual is held. The most experienced magicians have to find a magic matrix of the size $ n×n $ ( $ n $ is even number). Gods will never allow to start the championship without it. Matrix should contain integers from $ 0 $ to $ n-1 $ , main diagonal should contain only zeroes and matrix should be symmetric. Moreover, all numbers in each row should be different. Magicians are very tired of the thinking process, so they ask you to write a program to find such matrix.

## 输入输出格式

### 输入格式

The first line contains one integer $ n $ ( $ 2<=n<=1000 $ ), $ n $ is even.

### 输出格式

Output $ n $ lines with $ n $ numbers each — the required matrix. Separate numbers with spaces. If there are several solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
0 1
1 0

```
### 输入样例 #2

```cpp
4

```
### 输出样例 #2

```cpp
0 1 3 2
1 0 2 3
3 2 0 1
2 3 1 0

```
