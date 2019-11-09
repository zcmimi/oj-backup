# Oil

## 题目描述

After the nationalization of the oil industry, Dr. Mosaddegh wants to dig some oil wells to extract all the oil in Persian Gulf. But Persian Gulf is huge and has an infinite amount of oil. So Dr. Mosaddegh works only on a rectangular plane of size $ n×m $ of the Persian Gulf. Each of the cells in this rectangle either contains an infinite amount of oil or nothing.

Two cells are considered adjacent if and only if they have a common edge, a path is a sequence $ c_{1},c_{2},...,c_{x} $ of cells so that all of them contain oil and for each $ i $ , $ c_{i} $ is adjacent to $ c_{i-1} $ and $ c_{i+1} $ (if they exist). Two cells are considered connected to each other if and only if there exists a path between them. If we dig a well in a certain cell, we can extract oil from all the cells that are connected to it by oil paths. It is not allowed to dig wells on empty cells.

Dr. Mosaddegh also knows that in Persian Gulf, the empty cells form rows and columns. I. e. if some cell is empty, then it's column is completely empty or it's row is completely empty, or both.

Help Dr. Mosaddegh find out how many wells he has to dig to access all the oil in that region.

## 输入输出格式

### 输入格式

In the first line there are two positive integers $ n $ and $ m $ ( $ 1<=n,m<=100 $ ).

In the second line there is an integer $ t $ ( $ 0<=t<=n $ ), the number of empty rows. $ t $ distinct positive integers follow, these are the numbers of empty rows and are in range $ [1,n] $ .

In the second line there is an integer $ s $ ( $ 0<=s<=m $ ) that shows the number of columns not having any oil. $ s $ distinct positive integers follow, these are the numbers of empty columns and are in range of $ [1,m] $ .

Note that rows are numbered from $ 1 $ to $ n $ (from top to bottom) and columns are numbered from $ 1 $ to $ m $ (from left to right).

### 输出格式

A single integer, the minimum number of wells that Dr. Mossadegh has to dig.

This is actually finding how many regions are made by removing the given rows and columns.

## 输入输出样例

### 输入样例 #1

```cpp
2 3
1 2
1 2

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
4 4
2 2 3
3 2 3 1

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
2 3
1 1
0

```
### 输出样例 #3

```cpp
1

```
