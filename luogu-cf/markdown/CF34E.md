# Collisions

## 题意翻译

在数轴上有n个球，可视为质点。现在我们知道它们的坐标位置，质量和速度（可能是负数）。现在问t秒后，这n个小球的位置。在这t秒间，小球可能会发生弹性碰撞，现在给你弹性碰撞的公式![1](https://cdn.luogu.org/upload/vjudge_pic/CF34E/939b5bce3bf45a602cb8d3e9f25a3ee89c788ac0.png)

**输入格式**

第一行两个数字，n(1<=n<=10)和t(0<=t<=100)，n为小球个数，t为时间。

接下来有n行描述小球的信息，每行有3个数

$x_{i}$,$v_{i}$,$m_{i}$(1<=|$v_{i}$|,$m_{i}$<=100,|$x_{i}$|<=100)。$x_{i}$为坐标,$v_{i}$为速度,$m_{i}$为质量。

**输出格式**

n行，每行为第i个小球在t秒时的坐标，将数字精确地输出到小数点后的至少4位数字（样例有9位……）。

## 题目描述

On a number line there are $ n $ balls. At time moment $ 0 $ for each ball the following data is known: its coordinate $ x_{i} $ , speed $ v_{i} $ (possibly, negative) and weight $ m_{i} $ . The radius of the balls can be ignored.

The balls collide elastically, i.e. if two balls weighing $ m_{1} $ and $ m_{2} $ and with speeds $ v_{1} $ and $ v_{2} $ collide, their new speeds will be:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF34E/939b5bce3bf45a602cb8d3e9f25a3ee89c788ac0.png).Your task is to find out, where each ball will be $ t $ seconds after.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ t $ ( $ 1<=n<=10,0<=t<=100 $ ) — amount of balls and duration of the process. Then follow $ n $ lines, each containing three integers: $ x_{i} $ , $ v_{i} $ , $ m_{i} $ ( $ 1<=|v_{i}|,m_{i}<=100,|x_{i}|<=100 $ ) — coordinate, speed and weight of the ball with index $ i $ at time moment $ 0 $ .

It is guaranteed that no two balls have the same coordinate initially. Also each collision will be a collision of not more than two balls (that is, three or more balls never collide at the same point in all times from segment $ [0;t] $ ).

### 输出格式

Output $ n $ numbers — coordinates of the balls $ t $ seconds after. Output the numbers accurate to at least 4 digits after the decimal point.

## 输入输出样例

### 输入样例 #1

```cpp
2 9
3 4 5
0 7 8

```
### 输出样例 #1

```cpp
68.538461538
44.538461538

```
### 输入样例 #2

```cpp
3 10
1 2 3
4 -5 6
7 -8 9

```
### 输出样例 #2

```cpp
-93.666666667
-74.666666667
-15.666666667

```
