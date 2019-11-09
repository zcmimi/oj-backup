# Journey

## 题意翻译

兔子Stewie发现了一个新的平行宇宙。这个宇宙是二维的且是矩形网格，包含n行，m列。它是非常小的：网格的一个格子只能包含一个粒子。这个宇宙中的每一个粒子要么是静态的，要么是动态的。每个静态粒子总是保持在同一位置。由于莫名其妙的引力定律，平行宇宙中没有两个静态粒子存在于一行或一列中，也不可能存在于其它静态粒子的左上，左下，右上，右下的4个格子中。一个动态粒子出现在一个随机的空格子中，随机地选择目的格子（目的格子可能与起始格子重合，请看样例），并沿着最短的路径移动到没有被静态粒子占据的目标格子中。所有空格子被选择为路径的开始或结束的概率是相同的。到达目标格子后，粒子消失。在同一个时刻只允许有一个动态粒子存在。每个移动过程中，这个粒子必须从一个格子移动到相邻的一个格子，这个过程需要一个银河秒。Stewie对宇宙中一个粒子的平均寿命感兴趣。

------------

## 输入输出格式

#### 输入格式：

第一行包含两个用空格分开的整数：n，m（2＜n，m <＝1000），表示宇宙的大小。后面有n行，每行m个符号，每一个符号描述了没有动态粒子的宇宙——如果第i行第 j个符号等于‘X’，表示有一个静态粒子，如果它是空的，则等于“.”。保证所描述的宇宙满足上述静态粒子排布规则

#### 输出格式：

输出有一行，一个数，表示粒子的平均寿命。

结果如与正确答案有10的-6次方以内误差，即为正确。

## 题目描述

Stewie the Rabbit explores a new parallel universe. This two dimensional universe has the shape of a rectangular grid, containing $ n $ lines and $ m $ columns. The universe is very small: one cell of the grid can only contain one particle. Each particle in this universe is either static or dynamic. Each static particle always remains in one and the same position. Due to unintelligible gravitation laws no two static particles in the parallel universe can be present in one column or row, and they also can't be present in the diagonally adjacent cells. A dynamic particle appears in a random empty cell, randomly chooses the destination cell (destination cell may coincide with the start cell, see the samples) and moves there along the shortest path through the cells, unoccupied by the static particles. All empty cells have the same probability of being selected as the beginning or end of the path. Having reached the destination cell, the particle disappears. Only one dynamic particle can exist at one moment of time. This particle can move from a cell to a cell if they have an adjacent side, and this transition takes exactly one galactic second. Stewie got interested in what is the average lifespan of one particle in the given universe.

## 输入输出格式

### 输入格式

The first line contains two space-separated integers: $ n,m $ ( $ 2<=n,m<=1000 $ ) which represent the sizes of the universe. The next $ n $ lines containing $ m $ symbols each describe the universe without dynamic particles — the $ j $ -th symbol of the $ i $ -th line equals to 'X' if the cell is occupied by a static particle, and to '.' if it is empty. It is guaranteed that the described universe satisfies the properties described above, that is no two static particles can be in one column or in one row, besides, they can't be positioned in the diagonally adjacent cells.

### 输出格式

You have to print on a single line a single number which is the average life span of a particle with an accuracy of at least 6 decimal places.

The answer will be accepted if it is within $ 10^{-6} $ of absolute or relative error from the correct answer.

## 输入输出样例

### 输入样例 #1

```cpp
2 2
..
.X

```
### 输出样例 #1

```cpp
0.888888888889

```
### 输入样例 #2

```cpp
3 3
...
.X.
...

```
### 输出样例 #2

```cpp
2.000000000000

```
