# Bargaining Table

## 题意翻译

给定一个N*M的矩阵，1表示已经占用了，0表示没有被占用，求一个由0构成的矩阵，使其周长最大。

输入:N,M,矩阵

输出:最大周长

Translated by 稀神探女

## 题目描述

Bob wants to put a new bargaining table in his office. To do so he measured the office room thoroughly and drew its plan: Bob's office room is a rectangular room $ n×m $ meters. Each square meter of the room is either occupied by some furniture, or free. A bargaining table is rectangular, and should be placed so, that its sides are parallel to the office walls. Bob doesn't want to change or rearrange anything, that's why all the squares that will be occupied by the table should be initially free. Bob wants the new table to sit as many people as possible, thus its perimeter should be maximal. Help Bob find out the maximum possible perimeter of a bargaining table for his office.

## 输入输出格式

### 输入格式

The first line contains 2 space-separated numbers $ n $ and $ m $ ( $ 1<=n,m<=25 $ ) — the office room dimensions. Then there follow $ n $ lines with $ m $ characters 0 or 1 each. 0 stands for a free square meter of the office room. 1 stands for an occupied square meter. It's guaranteed that at least one square meter in the room is free.

### 输出格式

Output one number — the maximum possible perimeter of a bargaining table for Bob's office room.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
000
010
000

```
### 输出样例 #1

```cpp
8

```
### 输入样例 #2

```cpp
5 4
1100
0000
0000
0000
0000

```
### 输出样例 #2

```cpp
16

```
