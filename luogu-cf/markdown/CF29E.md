# Quarrel

## 题意翻译

题目描述:有一个含有n个十字路口，m条道路的街区，小B住在1号十字路口处，小A住在n号十字路口处。

一天小A与小B吵了架，因此他们不想在十字路口遇见对方（但是可以在街道的中央相向穿过，见样例1）。

巧的是，小A要前往1号十字路口，小B要前往n号十字路口，而且他们在两人都到达终点前必须保持移动，请你帮他们规划出一条尽可能短的路线。

输入:第一行两个正整数n,m，之后m行每行两个整数a,b表示a,b路口间有一条路

输出:若没有合法方案则输出"-1",否则先输出每人最小的移动步数k，第二行输出小B的路线，第三行输出小A的路线

2<=n<=500,1<=m<=10000

## 题目描述

Friends Alex and Bob live in Bertown. In this town there are $ n $ crossroads, some of them are connected by bidirectional roads of equal length. Bob lives in a house at the crossroads number $ 1 $ , Alex — in a house at the crossroads number $ n $ .

One day Alex and Bob had a big quarrel, and they refused to see each other. It occurred that today Bob needs to get from his house to the crossroads $ n $ and Alex needs to get from his house to the crossroads $ 1 $ . And they don't want to meet at any of the crossroads, but they can meet in the middle of the street, when passing it in opposite directions. Alex and Bob asked you, as their mutual friend, to help them with this difficult task.

Find for Alex and Bob such routes with equal number of streets that the guys can follow these routes and never appear at the same crossroads at the same time. They are allowed to meet in the middle of the street when moving toward each other (see Sample 1). Among all possible routes, select such that the number of streets in it is the least possible. Until both guys reach their destinations, none of them can stay without moving.

The guys are moving simultaneously with equal speeds, i.e. it is possible that when one of them reaches some of the crossroads, the other one leaves it. For example, Alex can move from crossroad $ 1 $ to crossroad $ 2 $ , while Bob moves from crossroad $ 2 $ to crossroad $ 3 $ .

If the required routes don't exist, your program should output -1.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 2<=n<=500,1<=m<=10000 $ ) — the amount of crossroads and the amount of roads. Each of the following $ m $ lines contains two integers — the numbers of crossroads connected by the road. It is guaranteed that no road connects a crossroads with itself and no two crossroads are connected by more than one road.

### 输出格式

If the required routes don't exist, output -1. Otherwise, the first line should contain integer $ k $ — the length of shortest routes (the length of the route is the amount of roads in it). The next line should contain $ k+1 $ integers — Bob's route, i.e. the numbers of $ k+1 $ crossroads passed by Bob. The last line should contain Alex's route in the same format. If there are several optimal solutions, output any of them.

## 输入输出样例

### 输入样例 #1

```cpp
2 1
1 2

```
### 输出样例 #1

```cpp
1
1 2 
2 1 

```
### 输入样例 #2

```cpp
7 5
1 2
2 7
7 6
2 3
3 4

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
7 6
1 2
2 7
7 6
2 3
3 4
1 5

```
### 输出样例 #3

```cpp
6
1 2 3 4 3 2 7 
7 6 7 2 1 5 1 

```
