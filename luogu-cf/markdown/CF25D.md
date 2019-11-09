# Roads not only in Berland

## 题意翻译

给定一个有n个顶点，n-1条边的无向图，每一次操作都能去掉一条边，并且重新在某两个顶点之间连一条新边。试求需要多少次操作，才能使得从任一顶点都能到达其他的所有顶点。

输入:第一行一个正整数n，之后n-1行每行两个整数表示一条无向边

输出:第一行一个整数t，表示需要的最少操作数，之后t行每行四个整数a,b,c,d，表示拆掉ab间的边，在cd间连一条新边

2<=n<=1000

Translated by 稀神探女

## 题目描述

Berland Government decided to improve relations with neighboring countries. First of all, it was decided to build new roads so that from each city of Berland and neighboring countries it became possible to reach all the others. There are $ n $ cities in Berland and neighboring countries in total and exactly $ n-1 $ two-way roads. Because of the recent financial crisis, the Berland Government is strongly pressed for money, so to build a new road it has to close some of the existing ones. Every day it is possible to close one existing road and immediately build a new one. Your task is to determine how many days would be needed to rebuild roads so that from each city it became possible to reach all the others, and to draw a plan of closure of old roads and building of new ones.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 2<=n<=1000 $ ) — amount of cities in Berland and neighboring countries. Next $ n-1 $ lines contain the description of roads. Each road is described by two space-separated integers $ a_{i} $ , $ b_{i} $ ( $ 1<=a_{i},b_{i}<=n,a_{i}≠b_{i} $ ) — pair of cities, which the road connects. It can't be more than one road between a pair of cities. No road connects the city with itself.

### 输出格式

Output the answer, number $ t $ — what is the least amount of days needed to rebuild roads so that from each city it became possible to reach all the others. Then output $ t $ lines — the plan of closure of old roads and building of new ones. Each line should describe one day in the format i j u v — it means that road between cities i and j became closed and a new road between cities u and v is built. Cities are numbered from 1. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2
1 2

```
### 输出样例 #1

```cpp
0

```
### 输入样例 #2

```cpp
7
1 2
2 3
3 1
4 5
5 6
6 7

```
### 输出样例 #2

```cpp
1
3 1 3 7

```
