# Berland collider

## 题意翻译

题目大意:在x轴上有n个点，每个点向左或向右发射子弹，给定每个点的坐标xi和所发射子弹的飞行速度vi，问所有相向而行的的子弹中最短的相遇时间。

输入:第一行一个整数n，之后n行每行两个整数xi,vi（以向右为正方向），表示每个子弹的初始坐标和速度。

输出:如果不会有子弹相遇，输出-1，否则输出一个双浮点数，要求与标准答案相差不超过10^-9。

1<=n<=5*10^5

vi,xi的绝对值不超过10^9

vi!=0

Translated by 稀神探女

## 题目描述

Recently the construction of Berland collider has been completed. Collider can be represented as a long narrow tunnel that contains $ n $ particles. We associate with collider 1-dimensional coordinate system, going from left to right. For each particle we know its coordinate and velocity at the moment of start of the collider. The velocities of the particles don't change after the launch of the collider. Berland scientists think that the big bang will happen at the first collision of particles, whose velocities differs in directions. Help them to determine how much time elapses after the launch of the collider before the big bang happens.

## 输入输出格式

### 输入格式

The first line contains single integer $ n $ ( $ 1<=n<=5·10^{5} $ ) — amount of particles in the collider. Next $ n $ lines contain description of particles. Each particle is described by two integers $ x_{i} $ , $ v_{i} $ ( $ -10^{9}<=x_{i},v_{i}<=10^{9},v_{i}≠0 $ ) — coordinate and velocity respectively. All the coordinates are distinct. The particles are listed in order of increasing of coordinates. All the coordinates are in meters, and all the velocities — in meters per second. The negative velocity means that after the start of collider the particle will move to the left, and the positive — that the particle will move to the right.

### 输出格式

If there will be no big bang, output -1. Otherwise output one number — how much time in seconds elapses after the launch of the collider before the big bang happens. Your answer must have a relative or absolute error less than $ 10^{-9} $ .

## 输入输出样例

### 输入样例 #1

```cpp
3
-5 9
0 1
5 -1

```
### 输出样例 #1

```cpp
1.00000000000000000000

```
### 输入样例 #2

```cpp
6
1 3
2 3
3 3
4 -3
5 -1
6 -100

```
### 输出样例 #2

```cpp
0.02912621359223301065

```
