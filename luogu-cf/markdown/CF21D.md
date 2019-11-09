# Traveling Graph

## 题意翻译

给定一个有n个顶点，m条边的带边权无向图，要求从顶点1开始经过每一条边至少一次最后回到起点1，要求走过的边权值总和最小。

注意：可能有重边和自环

输入:第一行n，m，之后m行每行一条无向边

输出:一个整数w，代表最小边权和，若无解则输出-1

Translated by 稀神探女

## 题目描述

You are given undirected weighted graph. Find the length of the shortest cycle which starts from the vertex 1 and passes throught all the edges at least once. Graph may contain multiply edges between a pair of vertices and loops (edges from the vertex to itself).

## 输入输出格式

### 输入格式

The first line of the input contains two integers $ n $ and $ m $ ( $ 1<=n<=15,0<=m<=2000 $ ), $ n $ is the amount of vertices, and $ m $ is the amount of edges. Following $ m $ lines contain edges as a triples $ x,y,w $ ( $ 1<=x,y<=n,1<=w<=10000 $ ), $ x,y $ are edge endpoints, and $ w $ is the edge length.

### 输出格式

Output minimal cycle length or -1 if it doesn't exists.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
1 2 1
2 3 1
3 1 1

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
3 2
1 2 3
2 3 4

```
### 输出样例 #2

```cpp
14

```
