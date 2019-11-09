# Journey

## 题意翻译

题意：

你现处于(1,1),矩阵大小为n*m,目标是走完所有点,不能走重复的点,一次移动一格.

你可以放置传送门于任意一点,单向传送到一个传送门标记的点.

求放置传送门次数最少的移动方案.

输入数据：

一行仅n,m.

输出数据：

第一行为传送门数k.

接下来k行,每行一组,表示有一个(x0,y0)->(x1,y1)的传送门.

接下来n*m+1行,为此时所在的点的坐标.

数据范围：

n,m∈[1,100]

n*m>1

注意：

(1,1)会在起始于末尾各出现一次.

Translated by @尘染梦 

## 题目描述

The territory of Berland is represented by a rectangular field $ n×m $ in size. The king of Berland lives in the capital, located on the upper left square $ (1,1) $ . The lower right square has coordinates $ (n,m) $ . One day the king decided to travel through the whole country and return back to the capital, having visited every square (except the capital) exactly one time. The king must visit the capital exactly two times, at the very beginning and at the very end of his journey. The king can only move to the side-neighboring squares. However, the royal advise said that the King possibly will not be able to do it. But there is a way out — one can build the system of one way teleporters between some squares so that the king could fulfill his plan. No more than one teleporter can be installed on one square, every teleporter can be used any number of times, however every time it is used, it transports to the same given for any single teleporter square. When the king reaches a square with an installed teleporter he chooses himself whether he is or is not going to use the teleport. What minimum number of teleporters should be installed for the king to complete the journey? You should also compose the journey path route for the king.

## 输入输出格式

### 输入格式

The first line contains two space-separated integers $ n $ and $ m $ ( $ 1<=n,m<=100,2<= $ $ n $ $ · $ $ m $ ) — the field size. The upper left square has coordinates $ (1,1) $ , and the lower right square has coordinates of $ (n,m) $ .

### 输出格式

On the first line output integer $ k $ — the minimum number of teleporters. Then output $ k $ lines each containing 4 integers $ x_{1} $ $ y_{1} $ $ x_{2} $ $ y_{2} $ ( $ 1<=x_{1},x_{2}<=n,1<=y_{1},y_{2}<=m $ ) — the coordinates of the square where the teleporter is installed ( $ x_{1},y_{1} $ ), and the coordinates of the square where the teleporter leads ( $ x_{2},y_{2} $ ).

Then print $ nm+1 $ lines containing 2 numbers each — the coordinates of the squares in the order in which they are visited by the king. The travel path must start and end at $ (1,1) $ . The king can move to side-neighboring squares and to the squares where a teleporter leads. Besides, he also should visit the capital exactly two times and he should visit other squares exactly one time.

## 输入输出样例

### 输入样例 #1

```cpp
2 2

```
### 输出样例 #1

```cpp
0
1 1
1 2
2 2
2 1
1 1

```
### 输入样例 #2

```cpp
3 3

```
### 输出样例 #2

```cpp
1
3 3 1 1
1 1
1 2
1 3
2 3
2 2
2 1
3 1
3 2
3 3
1 1

```
