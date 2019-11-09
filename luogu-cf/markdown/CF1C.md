# Ancient Berland Circus

## 题意翻译

现在所有的马戏团在 Berland 都有一个直径13米的圆形竞技场, 但在过去的事情是不同的。

在古代 Berland 竞技场的马戏团被塑造成一个规则 (等角) 多边形, 角色的大小和角度可能因马戏团而异。竞技场的每个角落都有一根特别的柱子, 柱子之间的绳子标记着竞技场的边缘。

最近, 来自 Berland 的科学家发现了古代马戏团竞技场的遗迹。他们发现只有三根柱子, 其他的被毁坏了

你得到了这三根柱子的坐标。请找出竞技场中最小的区域。

输入三行，每行包含两个数字，表示柱子的坐标，坐标的绝对值不超过1000，小数点后不超过6位。

输出古代竞技场的可能的最小区域面积，精确到小数点后至少6位，保证在最佳答案中多边形角的数目不大于100。

## 题目描述

Nowadays all circuses in Berland have a round arena with diameter 13 meters, but in the past things were different.

In Ancient Berland arenas in circuses were shaped as a regular (equiangular) polygon, the size and the number of angles could vary from one circus to another. In each corner of the arena there was a special pillar, and the rope strung between the pillars marked the arena edges.

Recently the scientists from Berland have discovered the remains of the ancient circus arena. They found only three pillars, the others were destroyed by the time.

You are given the coordinates of these three pillars. Find out what is the smallest area that the arena could have.

## 输入输出格式

### 输入格式

The input file consists of three lines, each of them contains a pair of numbers –– coordinates of the pillar. Any coordinate doesn't exceed 1000 by absolute value, and is given with at most six digits after decimal point.

### 输出格式

Output the smallest possible area of the ancient arena. This number should be accurate to at least 6 digits after the decimal point. It's guaranteed that the number of angles in the optimal polygon is not larger than 100.

## 输入输出样例

### 输入样例 #1

```cpp
0.000000 0.000000
1.000000 1.000000
0.000000 1.000000

```
### 输出样例 #1

```cpp
1.00000000

```
