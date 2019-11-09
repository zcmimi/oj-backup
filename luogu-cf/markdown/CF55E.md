# Very simple problem

## 题意翻译

题目描述：

你有一个凸多边形，请计算，包含平面中给定点的三角形数量及其顶点是多边形的顶点的个数。题目保证，该点不位于多边形的边和对角线上。

输入输出格式 输入格式：

第一行包含整数n，代表多边形的顶点数(3<=n<=100000)。多边形的描述如下:n行以顺时针顺序给出的顶点坐标(整数x,y的绝对值不会超过109)保证给定的多边形是非简化的凸多边形(即没有三点在同一条线上)。 下一行包含整数t(1<=t<=20),代表t次询问。接下来是带有坐标的t行(整数x,y的绝对值不会超过109)。

输出格式： 有t个整数，每个数一行，第i个整数代表第i次询问的答案。

注意:请不要在c++中使用%lld或%I64d读入或输出，请使用cin和cout。

感谢@kgory 提供的翻译

## 题目描述

You are given a convex polygon. Count, please, the number of triangles that contain a given point in the plane and their vertices are the vertices of the polygon. It is guaranteed, that the point doesn't lie on the sides and the diagonals of the polygon.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ — the number of vertices of the polygon ( $ 3<=n<=100000 $ ). The polygon description is following: $ n $ lines containing coordinates of the vertices in clockwise order (integer $ x $ and $ y $ not greater than $ 10^{9} $ by absolute value). It is guaranteed that the given polygon is nondegenerate and convex (no three points lie on the same line).

The next line contains integer $ t $ ( $ 1<=t<=20 $ ) — the number of points which you should count the answer for. It is followed by $ t $ lines with coordinates of the points (integer $ x $ and $ y $ not greater than $ 10^{9} $ by absolute value).

### 输出格式

The output should contain $ t $ integer numbers, each on a separate line, where $ i $ -th number is the answer for the $ i $ -th point.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cin (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
4
5 0
0 0
0 5
5 5
1
1 3

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
3
0 0
0 5
5 0
2
1 1
10 10

```
### 输出样例 #2

```cpp
1
0

```
### 输入样例 #3

```cpp
5
7 6
6 3
4 1
1 2
2 4
4
3 3
2 3
5 5
4 2

```
### 输出样例 #3

```cpp
5
3
3
4

```
