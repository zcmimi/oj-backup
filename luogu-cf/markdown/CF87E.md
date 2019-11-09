# Mogohu-Rea Idol

## 题目描述

A long time ago somewhere in the depths of America existed a powerful tribe governed by the great leader Pinnie-the-Wooh. Once the tribe conquered three Maya cities. Pinnie-the-Wooh grew concerned: there had to be some control over the conquered territories. That's why he appealed to the priests of the supreme god Mogohu-Rea for help.

The priests conveyed the god's will to him: to control these three cities he should put an idol to Mogohu-Rea — that will create a religious field over the cities. However, the idol is so powerful that it can easily drive the people around it mad unless it is balanced by exactly three sacrifice altars, placed one in each city. To balance the idol the altars should be placed so that the center of mass of the system of these three points coincided with the idol. When counting the center of mass consider that all the altars have the same mass.

Now Pinnie-the-Wooh is thinking where to put the idol. He has a list of hills, that are suitable to put an idol there. Help him to identify on which of them you can put an idol without risking to fry off the brains of the cities' population with the religious field.

Each city has a shape of a convex polygon such that no three vertexes lie on a straight line. The cities can intersect. Each altar should be attached to the city through a special ceremony, besides, it must be situated on the city's territory (possibly at the border). Thus, there may be several altars on a city's territory, but exactly one of them will be attached to the city. The altars, the idol and the hills are points on the plane, some of them may coincide.

The hills are taken into consideration independently from each other, the altars' location for different hills may also be different.

## 输入输出格式

### 输入格式

First follow descriptions of the three cities, divided by empty lines. The descriptions are in the following format:

The first line contains an integer $ n $ , which represent the number of the polygon's vertexes ( $ 3<=n<=5·10^{4} $ ). Next $ n $ lines contain two integers $ x_{i} $ , $ y_{i} $ each, they are the coordinates of the polygon's $ i $ -th vertex in the counterclockwise order.

After the cities' description follows the integer $ m $ ( $ 1<=m<=10^{5} $ ), which represents the number of hills. Next $ m $ lines each contain two integers $ x_{j} $ , $ y_{j} $ , they are the coordinates of the $ j $ -th hill.

All the coordinates in the input data do not exceed $ 5·10^{8} $ in the absolute value.

### 输出格式

For each hill print on a single line "YES" (without the quotes) or "NO" (without the quotes), depending on whether the three sacrifice altars can be put to balance the idol or not.

## 输入输出样例

### 输入样例 #1

```cpp
3
0 0
1 0
1 1
4
8 8
5 5
6 4
8 4
3
-1 -1
-3 -1
-2 -2
5
0 0
2 1
7 1
1 1
5 3

```
### 输出样例 #1

```cpp
NO
YES
NO
YES
NO

```
## 说明

For the hill at $ (2,1) $ the altars can be placed at the points $ (1,0),(7,5),(-2,-2) $ , for the hill at $ (1,1) $ — at the points $ (0,0),(6,4),(-3,-1) $ . Many other groups of three points can do the trick. There are no suitable points for other hills.

