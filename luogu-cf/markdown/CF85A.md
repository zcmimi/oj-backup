# Domino

## 题目描述

We all know the problem about the number of ways one can tile a $ 2×n $ field by $ 1×2 $ dominoes. You probably remember that it goes down to Fibonacci numbers. We will talk about some other problem below, there you also are going to deal with tiling a rectangular field with dominoes.

You are given a $ 4×n $ rectangular field, that is the field that contains four lines and $ n $ columns. You have to find for it any tiling by $ 1×2 $ dominoes such that each of the $ n-1 $ potential vertical cuts along the grid lines intersects at least one domino, splitting it in two. No two dominoes in the sought tiling should overlap, each square of the field should be covered by exactly one domino. It is allowed to rotate the dominoes, that is, you can use $ 2×1 $ as well as $ 1×2 $ dominoes.

Write a program that finds an arbitrary sought tiling.

## 输入输出格式

### 输入格式

The input contains one positive integer $ n $ ( $ 1<=n<=100 $ ) — the number of the field's columns.

### 输出格式

If there's no solution, print "-1" (without the quotes). Otherwise, print four lines containing $ n $ characters each — that's the description of tiling, where each vertical cut intersects at least one domino. You should print the tiling, having painted the field in no more than $ 26 $ colors. Each domino should be painted a color. Different dominoes can be painted the same color, but dominoes of the same color should not be side-neighbouring. To indicate colors you should use lowercase Latin letters. Print any of the acceptable ways of tiling.

## 输入输出样例

### 输入样例 #1

```cpp
4

```
### 输出样例 #1

```cpp
yyzz
bccd
bxxd
yyaa

```
