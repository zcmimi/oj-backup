# Cannon

## 题意翻译

**题目大意：**

有一门大炮，坐标在$(0,0)$，和$m$堵墙，现在大炮要射$n$发炮弹，每发炮弹的初始速度$v$是一样的，射击角度为$α(0<α<π/4)$，假设射击后经过时间$t$，重力加速度$g=9.8$，则有：

$v_x(t)=v*cos(α)$

$v_y(t)=v*sin(α)-g*t$

$x(t)=v_x(t)*t$

$y(t)=v*sin(α)*t-g*t^2/2$

给定$m$堵墙墙顶坐标$(x_i,y_i)$，墙垂直于$x$坐标轴，炮弹如果打到墙上，就会卡住；如果掉到地上，也不会再滚动。

求这$n$发炮弹最终的位置

**输入格式：**

第一行两个整数，即$n,v(1<=n<=10^4,1<=v<=1000)$

下面$n$行，每行一个实数，即每发炮弹的$α$

再一行，一个整数，即$m(1<=m<=10^5)$

下面$m$行，每行两个实数，即$x_i,y_i(1<=x_i,y_i<=1000)$

**输出格式：**

$n$行，每行两个实数，即这发炮弹最后的坐标，误差不超过$10^{-4}$即可

感谢@守望 提供翻译

## 题目描述

Bertown is under siege! The attackers have blocked all the ways out and their cannon is bombarding the city. Fortunately, Berland intelligence managed to intercept the enemies' shooting plan. Let's introduce the Cartesian system of coordinates, the origin of which coincides with the cannon's position, the $ Ox $ axis is directed rightwards in the city's direction, the $ Oy $ axis is directed upwards (to the sky). The cannon will make $ n $ more shots. The cannon balls' initial speeds are the same in all the shots and are equal to $ V $ , so that every shot is characterized by only one number $ alpha_{i} $ which represents the angle at which the cannon fires. Due to the cannon's technical peculiarities this angle does not exceed $ 45 $ angles ( $ π/4 $ ). We disregard the cannon sizes and consider the firing made from the point $ (0,0) $ .

The balls fly according to the known physical laws of a body thrown towards the horizon at an angle:

$ v_{x}(t)=V·cos(alpha) $ $ v_{y}(t)=V·sin(alpha) – g·t $ $ x(t)=V·cos(alpha)·t $ $ y(t)=V·sin(alpha)·t – g·t^{2}/2 $ Think of the acceleration of gravity $ g $ as equal to $ 9.8 $ .

Bertown defends $ m $ walls. The $ i $ -th wall is represented as a vertical segment $ (x_{i},0)-(x_{i},y_{i}) $ . When a ball hits a wall, it gets stuck in it and doesn't fly on. If a ball doesn't hit any wall it falls on the ground ( $ y=0 $ ) and stops. If the ball exactly hits the point $ (x_{i},y_{i}) $ , it is considered stuck.

Your task is to find for each ball the coordinates of the point where it will be located in the end.

## 输入输出格式

### 输入格式

The first line contains integers $ n $ and $ V $ ( $ 1<=n<=10^{4},1<=V<=1000 $ ) which represent the number of shots and the initial speed of every ball. The second line contains $ n $ space-separated real numbers $ alpha_{i} $ ( $ 0&lt;alpha_{i}&lt;π/4 $ ) which represent the angles in radians at which the cannon will fire. The third line contains integer $ m $ ( $ 1<=m<=10^{5} $ ) which represents the number of walls. Then follow $ m $ lines, each containing two real numbers $ x_{i} $ and $ y_{i} $ ( $ 1<=x_{i}<=1000,0<=y_{i}<=1000 $ ) which represent the wall’s coordinates. All the real numbers have no more than 4 decimal digits. The walls may partially overlap or even coincide.

### 输出格式

Print $ n $ lines containing two real numbers each — calculate for every ball the coordinates of its landing point. Your answer should have the relative or absolute error less than $ 10^{-4} $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 10
0.7853
0.3
3
5.0 5.0
4.0 2.4
6.0 1.9

```
### 输出样例 #1

```cpp
5.000000000 2.549499369
4.000000000 0.378324889

```
### 输入样例 #2

```cpp
2 10
0.7853
0.3
2
4.0 2.4
6.0 1.9

```
### 输出样例 #2

```cpp
10.204081436 0.000000000
4.000000000 0.378324889

```
