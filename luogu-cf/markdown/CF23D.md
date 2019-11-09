# Tetragon

## 题意翻译

给定3个点，判定是否存在一个严格凸四边形，使得其中三条边的中点恰好是这3个点。 不超过50000组数据。 坐标范围比较小。

输入格式：

第一行表示有几组数据

接下来是数据，每组数据分为3部分分别是第一个点，第二个点，第三个点的坐标。

输出格式

要是不存在，输出NO，否则第一行输出YES，第二行输出4对数字——以顺时针和逆时针的顺序对多边形顶点的坐标。

Translated by liyifeng

## 题目描述

You're given the centers of three equal sides of a strictly convex tetragon. Your task is to restore the initial tetragon.

## 输入输出格式

### 输入格式

The first input line contains one number $ T $ — amount of tests ( $ 1<=T<=5·10^{4} $ ). Each of the following $ T $ lines contains numbers $ x_{1} $ , $ y_{1} $ , $ x_{2} $ , $ y_{2} $ , $ x_{3} $ , $ y_{3} $ — coordinates of different points that are the centers of three equal sides (non-negative integer numbers, not exceeding 10).

### 输出格式

For each test output two lines. If the required tetragon exists, output in the first line YES, in the second line — four pairs of numbers — coordinates of the polygon's vertices in clockwise or counter-clockwise order. Don't forget, please, that the tetragon should be strictly convex, i.e. no 3 of its points lie on one line. Output numbers with 9 characters after a decimal point.

If the required tetragon doen't exist, output NO in the first line, and leave the second line empty.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 1 2 2 3 3
0 1 1 0 2 2
9 3 7 9 9 8

```
### 输出样例 #1

```cpp
NO
YES
3.5 1.5 0.5 2.5 -0.5 -0.5 2.5 0.5
NO

```
