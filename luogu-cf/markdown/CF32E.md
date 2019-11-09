# Hide-and-Seek

## 题意翻译

平面上有两个点A，B、 一堵墙（设为线段W ）、一面镜子（设为有向线段M ，逆时针方

向为反射面）。

问A能不能以适当的方向发出一道光线到达B。 光线碰到墙或镜子的非反射面会被吸收，

碰到镜子的反射面会镜面反射。

### 输入

第一行2个点xv和yv的坐标。

第二行包两个数字xp和yp的坐标。

第三行包含4个数字(xw,1，yw，1，xw，2，yw，2) 的 坐标。

第四行包含4个数字(xm，1，ym，1，xm，2，ym，2)的坐标。

所有的坐标都是整数，绝对值不超过10^4。

### 输出

如果维可以输出YES。否则输出NO。

Translated by liyifeng

## 题目描述

Victor and Peter are playing hide-and-seek. Peter has hidden, and Victor is to find him. In the room where they are playing, there is only one non-transparent wall and one double-sided mirror. Victor and Peter are points with coordinates $ (x_{v},y_{v}) $ and $ (x_{p},y_{p}) $ respectively. The wall is a segment joining points with coordinates $ (x_{w,1},y_{w,1}) $ and $ (x_{w,2},y_{w,2}) $ , the mirror — a segment joining points $ (x_{m,1},y_{m,1}) $ and $ (x_{m,2},y_{m,2}) $ .

If an obstacle has a common point with a line of vision, it's considered, that the boys can't see each other with this line of vision. If the mirror has a common point with the line of vision, it's considered, that the boys can see each other in the mirror, i.e. reflection takes place. The reflection process is governed by laws of physics — the angle of incidence is equal to the angle of reflection. The incident ray is in the same half-plane as the reflected ray, relative to the mirror. I.e. to see each other Victor and Peter should be to the same side of the line, containing the mirror (see example 1). If the line of vision is parallel to the mirror, reflection doesn't take place, and the mirror isn't regarded as an obstacle (see example 4).

Victor got interested if he can see Peter, while standing at the same spot. Help him solve this problem.

## 输入输出格式

### 输入格式

The first line contains two numbers $ x_{v} $ and $ y_{v} $ — coordinates of Victor.

The second line contains two numbers $ x_{p} $ and $ y_{p} $ — coordinates of Peter.

The third line contains 4 numbers $ x_{w,1} $ , $ y_{w,1} $ , $ x_{w,2} $ , $ y_{w,2} $ — coordinates of the wall.

The forth line contains 4 numbers $ x_{m,1} $ , $ y_{m,1} $ , $ x_{m,2} $ , $ y_{m,2} $ — coordinates of the mirror.

All the coordinates are integer numbers, and don't exceed $ 10^{4} $ in absolute value. It's guaranteed, that the segments don't have common points, Victor and Peter are not on any of the segments, coordinates of Victor and Peter aren't the same, the segments don't degenerate into points.

### 输出格式

Output YES, if Victor can see Peter without leaving the initial spot. Otherwise output NO.

## 输入输出样例

### 输入样例 #1

```cpp
-1 3
1 3
0 2 0 4
0 0 0 1

```
### 输出样例 #1

```cpp
NO

```
### 输入样例 #2

```cpp
0 0
1 1
0 1 1 0
-100 -100 -101 -101

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
0 0
1 1
0 1 1 0
-1 1 1 3

```
### 输出样例 #3

```cpp
YES

```
### 输入样例 #4

```cpp
0 0
10 0
100 100 101 101
1 0 3 0

```
### 输出样例 #4

```cpp
YES

```
