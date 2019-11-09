# Dijkstra?

## 题意翻译

题目大意

给出一张图，请输出其中任意一条可行的从点 $1$ 到点 $n$ 的最短路径。

输入输出格式

输入格式

第一行：两个整数n，m，分别表示点数和边数

接下来m行：每行三个整数u，v，w，表示u和v之间连一条边权为w的双向边。

输出格式

一行：一个可行的路径，如果不存在这种路径输出-1

2<=n<=10^5，0<=m<=10^5

## 题目描述

You are given a weighted undirected graph. The vertices are enumerated from 1 to $ n $ . Your task is to find the shortest path between the vertex $ 1 $ and the vertex $ n $ .

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 2<=n<=10^{5},0<=m<=10^{5} $ ), where $ n $ is the number of vertices and $ m $ is the number of edges. Following $ m $ lines contain one edge each in form $ a_{i} $ , $ b_{i} $ and $ w_{i} $ ( $ 1<=a_{i},b_{i}<=n,1<=w_{i}<=10^{6} $ ), where $ a_{i},b_{i} $ are edge endpoints and $ w_{i} $ is the length of the edge.

It is possible that the graph has loops and multiple edges between pair of vertices.

### 输出格式

Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

```
### 输出样例 #1

```cpp
1 4 3 5 
```


### 输入样例 #2

```cpp
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

```
### 输出样例 #2

```cpp
1 4 3 5 
```


