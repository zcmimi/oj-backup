# Contact

## 题意翻译

小 Petya 正在准备他和外星人的第一次沟通。他知道，外星人的宇宙飞船上都有一面是非退化（不共线三点构成的）三角形，并且这次只会来 4 艘。为飞船设计的着陆平台可以由在一个二维坐标系上，由 3 个特殊的塔，构成一个可以在旋转、平移和反射（沿边缘的对称性）上都可以和飞船上的三角形相吻合的三角形着陆平台。着陆后，飞船可以重叠。

每一个塔都可以用来着陆不止一艘飞船，举个例子：如果有两艘一模一样的飞船，咱们不用造 6 个塔，3 个就够了。Petya 想知道最少造几个塔就可以让他们的四艘飞船全部着陆。

### 输入格式：

输入四行，每行都有 6 个整数 x1 y1 x2 y2 x3 y3（ 0<=x1,y1,x2,y2,x3,y3<=20），每一行表示一艘飞船上所带有的形状的三个点。每一行数据保证可以作出一个非退化三角形。

### 输出格式：

输出一个整数。表示最少几个塔就可以让所有的飞船降落。

## 说明

在第一组样例中，塔可以放在 (0,0),(1,0),(3,0),(1,2)。第二艘船可以降落在后面的三个塔上。

在第二组样例中，可以选择 (0,0),(0,1),(1,0),(0,2),(2,0),(0,5),(5,0),(0,17),(17,0) 这几个点。用 9 个以下的塔是不可能的。

## 题目描述

Little Petya is preparing for the first contact with aliens. He knows that alien spaceships have shapes of non-degenerate triangles and there will be exactly 4 ships. Landing platform for a ship can be made of 3 special columns located at some points of a Cartesian plane such that these 3 points form a triangle equal to the ship with respect to rotations, translations (parallel shifts along some vector) and reflections (symmetries along the edges). The ships can overlap after the landing.

Each column can be used to land more than one ship, for example, if there are two equal ships, we don't need to build 6 columns to land both ships, 3 will be enough. Petya wants to know what minimum number of columns will be enough to land all ships.

## 输入输出格式

### 输入格式

Each of 4 lines will contain 6 integers $ x_{1} $ $ y_{1} $ $ x_{2} $ $ y_{2} $ $ x_{3} $ $ y_{3} $ ( $ 0<=x_{1},y_{1},x_{2},y_{2},x_{3},y_{3}<=20 $ ), representing 3 points that describe the shape of each of 4 ships. It is guaranteed that 3 points in each line will represent a non-degenerate triangle.

### 输出格式

First line should contain minimum number of columns enough to land all spaceships.

## 输入输出样例

### 输入样例 #1

```cpp
0 0 1 0 1 2
0 0 0 2 2 2
0 0 3 0 1 2
0 0 3 0 2 2

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
0 0 0 1 1 1
0 0 0 2 2 2
0 0 0 5 5 5
0 0 0 17 17 17

```
### 输出样例 #2

```cpp
9

```
## 说明

In the first test case columns can be put in these points: $ (0,0),(1,0),(3,0),(1,2) $ . Note that the second ship can land using last 3 columns.

In the second test case following points can be chosen: $ (0,0),(0,1),(1,0),(0,2),(2,0),(0,5),(5,0),(0,17),(17,0) $ . It is impossible to use less than 9 columns.

