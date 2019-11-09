# Shooting Gallery

## 题意翻译

## Description

国王要去参加射击比赛。赢了可以得到粉红熊猫。

靶场里面有一个垂直于水平面的板子，目标会从这个板子上出现。我们使用笛卡尔坐标系来描述这个板子和目标，具体的，第$i$个板子的坐标是$(x_i,y_i)$，它会在第$t_i$秒出现并立刻消失。国王有可能打中一个目标，当且仅当国王的枪口在这一刻恰好指向它。如果在这一刻枪口指向它，那么打中它的概率为$p_i$。国王枪口移动的速度为每秒一个单位长度，（注：枪口可以不沿着坐标轴移动），同时枪口可以再任何时刻停下来不移动。现在给你所有目标的信息，求国王期望最多得到多少分。

## Input

第一行是一个整数$n$，代表目标个数

下面$n$行，每行$4$个数，第$i$行的数据为$x_i,y_i,t_i,p_i$，意义见【Description】。其中前三个数字为整数，$p_i$为一个实数。数字间用空格隔开

## Output

输出一行一个实数，代表期望最多得到多少分。当输出与答案差距不超过$10^{-6}$即认为正确。

## Hint

$Forall:$

$1~\leq~n~\leq~1000~,~-1000~\leq~x_i,y_i~\leq~1000~,$

$0~\leq~t_i~\leq~10^9~,~0~\leq~p_i~\leq~1$

## 题目描述

One warm and sunny day king Copa decided to visit the shooting gallery, located at the Central Park, and try to win the main prize — big pink plush panda. The king is not good at shooting, so he invited you to help him.

The shooting gallery is an infinite vertical plane with Cartesian coordinate system on it. The targets are points on this plane. Each target is described by it's coordinates $ x_{i} $ , and $ y_{i} $ , by the time of it's appearance $ t_{i} $ and by the number $ p_{i} $ , which gives the probability that Copa hits this target if he aims at it.

A target appears and disappears instantly, so Copa can hit the target only if at the moment $ t_{i} $ his gun sight aimed at $ (x_{i},y_{i}) $ . Speed of movement of the gun sight on the plane is equal to 1. Copa knows all the information about the targets beforehand (remember, he is a king!). He wants to play in the optimal way, which maximizes the expected value of the amount of hit targets. He can aim at any target at the moment 0.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=1000 $ ) — amount of targets in the shooting gallery. Then $ n $ lines follow, each describing one target. Each description consists of four numbers $ x_{i} $ , $ y_{i} $ , $ t_{i} $ , $ p_{i} $ (where $ x_{i} $ , $ y_{i} $ , $ t_{i} $ — integers, $ -1000<=x_{i},y_{i}<=1000,0<=t_{i}<=10^{9} $ , real number $ p_{i} $ is given with no more than 6 digits after the decimal point, $ 0<=p_{i}<=1 $ ). No two targets may be at the same point.

### 输出格式

Output the maximum expected value of the amount of targets that was shot by the king. Your answer will be accepted if it differs from the correct answer by not more than $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
1
0 0 0 0.5

```
### 输出样例 #1

```cpp
0.5000000000

```
### 输入样例 #2

```cpp
2
0 0 0 0.6
5 0 5 0.7

```
### 输出样例 #2

```cpp
1.3000000000

```
