# Vasya the Architect

## 题意翻译

给出n个块的左下角坐标和右上角坐标，按照给出的块的顺序一个个往上叠，叠不了了就结束，问最多能叠多少个

## 题目描述

Once Vasya played bricks. All the bricks in the set had regular cubical shape. Vasya vas a talented architect, however the tower he built kept falling apart.

Let us consider the building process. Vasya takes a brick and puts it on top of the already built tower so that the sides of the brick are parallel to the sides of the bricks he has already used. Let's introduce a Cartesian coordinate system on the horizontal plane, where Vasya puts the first brick. Then the projection of brick number $ i $ on the plane is a square with sides parallel to the axes of coordinates with opposite corners in points $ (x_{i,1},y_{i,1}) $ and $ (x_{i,2},y_{i,2}) $ . The bricks are cast from homogeneous plastic and the weight of a brick $ a×a×a $ is $ a^{3} $ grams.

It is guaranteed that Vasya puts any brick except the first one on the previous one, that is the area of intersection of the upper side of the previous brick and the lower side of the next brick is always positive.

We (Vasya included) live in a normal world where the laws of physical statics work. And that is why, perhaps, if we put yet another brick, the tower will collapse under its own weight. Vasya puts the cubes consecutively one on top of the other until at least one cube loses the balance and falls down. If it happens, Vasya gets upset and stops the construction. Print the number of bricks in the maximal stable tower, that is the maximal number $ m $ satisfying the condition that all the towers consisting of bricks 1, 2, ..., $ k $ for every integer $ k $ from 1 to $ m $ remain stable.

## 输入输出格式

### 输入格式

The first input file contains an integer $ n $ ( $ 1<=n<=100 $ ) which is the number of bricks. Each of the next $ n $ lines contains four numbers $ x_{i,1},y_{i,1},x_{i,2},y_{i,2} $ ( $ x_{i,1}≠x_{i,2},|x_{i,1}-x_{i,2}|=|y_{i,1}-y_{i,2}| $ ) which are the coordinates of the opposite angles of the base of the brick number $ i $ . The coordinates are integers and their absolute value does not exceed $ 50 $ .

The cubes are given in the order Vasya puts them. It is guaranteed that the area of intersection of the upper side of the brick number $ i-1 $ and the lower side of the brick number $ i $ is strictly strictly greater than zero for all $ i>=2 $ .

### 输出格式

Print the number of bricks in the maximal stable tower.

## 输入输出样例

### 输入样例 #1

```cpp
2
0 0 3 3
1 0 4 3

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
2
0 0 3 3
2 0 5 3

```
### 输出样例 #2

```cpp
1

```
### 输入样例 #3

```cpp
3
0 0 3 3
1 0 4 3
2 0 5 3

```
### 输出样例 #3

```cpp
3

```
