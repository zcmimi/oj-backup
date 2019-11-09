# Segments

## 题意翻译

在坐标轴上给定n条线段，求出使这些线段都被标记所需要的最少标记点数目及标记点的坐标

答案可能不唯一，随意输出一个就好

1<=n<=1000

Translated by 稀神探女

## 题目描述

You are given $ n $ segments on the Ox-axis. You can drive a nail in any integer point on the Ox-axis line nail so, that all segments containing this point, are considered nailed down. If the nail passes through endpoint of some segment, this segment is considered to be nailed too. What is the smallest number of nails needed to nail all the segments down?

## 输入输出格式

### 输入格式

The first line of the input contains single integer number $ n $ ( $ 1<=n<=1000 $ ) — amount of segments. Following $ n $ lines contain descriptions of the segments. Each description is a pair of integer numbers — endpoints coordinates. All the coordinates don't exceed 10000 by absolute value. Segments can degenarate to points.

### 输出格式

The first line should contain one integer number — the smallest number of nails needed to nail all the segments down. The second line should contain coordinates of driven nails separated by space in any order. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2
0 2
2 5

```
### 输出样例 #1

```cpp
1
2 
```


### 输入样例 #2

```cpp
5
0 3
4 2
4 8
8 10
7 7

```
### 输出样例 #2

```cpp
3
7 10 3

```
