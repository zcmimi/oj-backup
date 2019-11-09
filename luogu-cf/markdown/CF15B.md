# Laser

## 题意翻译

## 题目描述

佩娅是科研学员中最负责任的科技工作者。所以她的上司叫她去用她们学院最先进的激光仪去做一个很智障的任务：去融化一块巧克力。

我们的激光仪包含了一个$ n * m $的网格和一个机械臂。机械臂上固定有两束垂直于网格的激光。这两束激光总是射♂向任意两个格子的中心。既然这两束激光被固定在了机械臂上，它们的运动都是有规律的。如果一束激光向一个方向运动，那么令一束激光也会和第一束激光进行一样的运动。

已知有这些条件：

- 一开始，整个网格都被$ n * m $的巧克力完全覆盖，而且两束激光从一开始就在网格的上方，且它们都是打开的。

- 一旦一束激光射向了一小块巧克力，它就会立即融化掉

- 每一次机械臂的矢量运动都和网格的边缘平行，而且每一次运动结束后，激光束都会指向一小块巧克力的中心。

- 无论任何时候，激光束都不能出巧克力的边缘。佩娅才不想成为第二个戈登·弗里曼博士（在半条命游戏系列里被射线射中变异了的游戏角色）呢。

- 一开始，题目会给你n和m，还有一开始被激光指着的巧克力网格（$ x1, y1 $）和（$ x2, y2 $），$ x $是行数，$ y $是列数。列和行号都从1开始计数。你的任务就是找出有多少点不能被激光融化。（激光可以随便运动）

## 输入输出格式

### 输入格式：

第一行包含一个整数$ t $（$ 1<=t<=10000 $），代表数据的组数。接下来有$ t $行，每行有6个整数：$ n, m, x1, y1, x2, y2 $, 它们都是用空格隔开的数 （$ 2<=n, m<=10^9, 1<=x1,x2<=n, 1<=y1,y2<=m $）。

我们给的数据保证坐标$ (x1, y1) $和$ (x2, y2) $是不相同的。

### 输出格式

有$ t $行，每行对应一个测试点的答案。

## 题目描述

Petya is the most responsible worker in the Research Institute. So he was asked to make a very important experiment: to melt the chocolate bar with a new laser device. The device consists of a rectangular field of $ n×m $ cells and a robotic arm. Each cell of the field is a $ 1×1 $ square. The robotic arm has two lasers pointed at the field perpendicularly to its surface. At any one time lasers are pointed at the centres of some two cells. Since the lasers are on the robotic hand, their movements are synchronized — if you move one of the lasers by a vector, another one moves by the same vector.

The following facts about the experiment are known:

- initially the whole field is covered with a chocolate bar of the size $ n×m $ , both lasers are located above the field and are active;

- the chocolate melts within one cell of the field at which the laser is pointed;

- all moves of the robotic arm should be parallel to the sides of the field, after each move the lasers should be pointed at the centres of some two cells;

- at any one time both lasers should be pointed at the field. Petya doesn't want to become a second Gordon Freeman.

You are given $ n $ , $ m $ and the cells $ (x_{1},y_{1}) $ and $ (x_{2},y_{2}) $ , where the lasers are initially pointed at ( $ x_{i} $ is a column number, $ y_{i} $ is a row number). Rows are numbered from $ 1 $ to $ m $ from top to bottom and columns are numbered from $ 1 $ to $ n $ from left to right. You are to find the amount of cells of the field on which the chocolate can't be melted in the given conditions.

## 输入输出格式

### 输入格式

The first line contains one integer number $ t $ $ (1<=t<=10000) $ — the number of test sets. Each of the following $ t $ lines describes one test set. Each line contains integer numbers $ n $ , $ m $ , $ x_{1} $ , $ y_{1} $ , $ x_{2} $ , $ y_{2} $ , separated by a space ( $ 2<=n,m<=10^{9} $ , $ 1<=x_{1},x_{2}<=n $ , $ 1<=y_{1},y_{2}<=m $ ). Cells $ (x_{1},y_{1}) $ and $ (x_{2},y_{2}) $ are distinct.

### 输出格式

Each of the $ t $ lines of the output should contain the answer to the corresponding input test set.

## 输入输出样例

### 输入样例 #1

```cpp
2
4 4 1 1 3 3
4 3 1 1 2 2

```
### 输出样例 #1

```cpp
8
2

```
