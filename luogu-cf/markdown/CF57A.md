# Square Earth?

## 题意翻译

# 题目描述

Meg小兔兔想当一次活雷锋——他要为大家判断地球之上两点之间的最短距离。但是Meg……他比较的懒，所以说他将地球想象成了一个平面的原型。等等……不对，他是把地球想象成了一个边长为$ n $的二维正方形。所以说，Meg的任务已经变得非常简单了：找出正方形平面边上两点之间的最短距离。那么，在这道题中我们会定义正方形四个角的坐标分别为$ (0, 0), (n, 0), (0, n), (n, n) $。

# 输入输出格式

## 输入格式：

一行，包含五个整数：$n, x_1, y_1, x_2, y_2$ $(1 \leq n \leq 1000, 0 \leq x_1, y_1, x_2, y_2 \leq n)$，分别代表正方形的边长，和边上两点的坐标。

## 输出格式：

一个数，两点之间的最短路线。

## 题目描述

Meg the Rabbit decided to do something nice, specifically — to determine the shortest distance between two points on the surface of our planet. But Meg... what can you say, she wants everything simple. So, she already regards our planet as a two-dimensional circle. No, wait, it's even worse — as a square of side $ n $ . Thus, the task has been reduced to finding the shortest path between two dots on a square (the path should go through the square sides). To simplify the task let us consider the vertices of the square to lie at points whose coordinates are: $ (0,0) $ , $ (n,0) $ , $ (0,n) $ and $ (n,n) $ .

## 输入输出格式

### 输入格式

The single line contains 5 space-separated integers: $ n,x_{1},y_{1},x_{2},y_{2} $ ( $ 1<=n<=1000,0<=x_{1},y_{1},x_{2},y_{2}<=n $ ) which correspondingly represent a side of the square, the coordinates of the first point and the coordinates of the second point. It is guaranteed that the points lie on the sides of the square.

### 输出格式

You must print on a single line the shortest distance between the points.

## 输入输出样例

### 输入样例 #1

```cpp
2 0 0 1 0

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
2 0 1 2 1

```
### 输出样例 #2

```cpp
4

```
### 输入样例 #3

```cpp
100 0 0 100 100

```
### 输出样例 #3

```cpp
200

```
