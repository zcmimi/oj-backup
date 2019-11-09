# Ship&#039;s Shortest Path

## 题意翻译

给你一幅n个点，m条边的无向图，每条边有权值d，现在有q次操作，有三种操作。

1，给出x,y,d，加入连接x，y的权值为d的边

2，给出x,y，删除这条边

3，给出x,y，问从x到y的路径的最小异或和。

保证操作合法且一直为简单连通图

n,m,q<=1e5

部分分：q=1,且为操作3

本题翻译：louhao088

## 题目描述

You have got a new job, and it's very interesting, you are a ship captain. Your first task is to move your ship from one point to another point, and for sure you want to move it at the minimum cost.

And it's well known that the shortest distance between any 2 points is the length of the line segment between these 2 points. But unfortunately there is an island in the sea, so sometimes you won't be able to move your ship in the line segment between the 2 points.

You can only move to safe points. A point is called safe if it's on the line segment between the start and end points, or if it's on the island's edge.

But you are too lucky, you have got some clever and strong workers and they can help you in your trip, they can help you move the ship in the sea and they will take 1 Egyptian pound for each moving unit in the sea, and they can carry the ship (yes, they are very strong) and walk on the island and they will take 2 Egyptian pounds for each moving unit in the island. The money which you will give to them will be divided between all workers, so the number of workers does not matter here.

You can move your ship on the island edge, and it will be considered moving in the sea.

Now you have a sea map, and you have to decide what is the minimum cost for your trip.

Your starting point is ( $ xStart $ , $ yStart $ ), and the end point is ( $ xEnd $ , $ yEnd $ ), both points will be different.

The island will be a convex polygon and there will be no more than 2 polygon points on the same line, also the starting and the end points won't be inside or on the boundary of the island. The points for the polygon will be given in the anti-clockwise order.

## 输入输出格式

### 输入格式

The first line contains 4 integers, $ xStart $ , $ yStart $ , $ xEnd $ and $ yEnd $ ( $ -100<=xStart,yStart,xEnd,yEnd<=100 $ ). The second line contains an integer $ n $ , which is the number of points in the polygon ( $ 3<=n<=30 $ ), followed by a line containing $ n $ pairs of integers $ x $ and $ y $ , which are the coordinates of the points ( $ -100<=x,y<=100 $ ), the polygon points will be distinct.

### 输出格式

Print one line which contains the minimum possible cost. The absolute or relative error in the answer should not exceed $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
1 7 6 7
4
4 2 4 12 3 12 3 2

```
### 输出样例 #1

```cpp
6.000000000

```
### 输入样例 #2

```cpp
-1 0 2 0
4
0 0 1 0 1 1 0 1

```
### 输出样例 #2

```cpp
3.000000000

```
