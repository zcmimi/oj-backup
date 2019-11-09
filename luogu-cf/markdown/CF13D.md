# Triangles

## 题意翻译

小P在纸上花了N个红点，M个蓝点，已知没有任何三个点共线，现在请你帮他求出有多少个由三个红点构成的三角形中不包含蓝点

输入：第一行两个非负整数N，M，之后N行每行两个整数代表每个红点的坐标，下面M行每行两个整数代表每个蓝点的坐标

输出：一个整数，为题面所要求的答案

0<=N<=500 0<=M<=500

所有坐标的绝对值均不超过10^9

感谢 @稀神探女 提供的翻译。

## 题目描述

Little Petya likes to draw. He drew $ N $ red and $ M $ blue points on the plane in such a way that no three points lie on the same line. Now he wonders what is the number of distinct triangles with vertices in red points which do not contain any blue point inside.

## 输入输出格式

### 输入格式

The first line contains two non-negative integer numbers $ N $ and $ M $ ( $ 0<=N<=500 $ , $ 0<=M<=500 $ ) — the number of red and blue points respectively. The following $ N $ lines contain two integer numbers each — coordinates of red points. The following $ M $ lines contain two integer numbers each — coordinates of blue points. All coordinates do not exceed $ 10^{9} $ by absolute value.

### 输出格式

Output one integer — the number of distinct triangles with vertices in red points which do not contain any blue point inside.

## 输入输出样例

### 输入样例 #1

```cpp
4 1
0 0
10 0
10 10
5 4
2 1

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
5 5
5 10
6 1
8 6
-6 -7
7 -1
5 -1
10 -4
-10 -8
-10 5
-2 -8

```
### 输出样例 #2

```cpp
7

```
