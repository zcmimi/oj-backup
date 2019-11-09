# Shell Game

## 题意翻译

题目描述:经典的转纸杯游戏。给定小球初始所在的纸杯位置和3次交换纸杯的操作，问你最后小球的位置。

输入:第一行一个整数标识小球的初始位置，之后3行每行两个整数a,b表示交换a,b纸杯。（要注意的是：最左边的杯子编号永远为1，最右边的编号永远为3，不会随着交换而改变）

输出:一个整数，表示最后小球所在的纸杯编号

本题目中所有数字均不超过3

Translated by @稀神探女

## 题目描述

Today the «Z» city residents enjoy a shell game competition. The residents are gathered on the main square to watch the breath-taking performance. The performer puts 3 non-transparent cups upside down in a row. Then he openly puts a small ball under one of the cups and starts to shuffle the cups around very quickly so that on the whole he makes exactly 3 shuffles. After that the spectators have exactly one attempt to guess in which cup they think the ball is and if the answer is correct they get a prize. Maybe you can try to find the ball too?

## 输入输出格式

### 输入格式

The first input line contains an integer from 1 to 3 — index of the cup which covers the ball before the shuffles. The following three lines describe the shuffles. Each description of a shuffle contains two distinct integers from 1 to 3 — indexes of the cups which the performer shuffled this time. The cups are numbered from left to right and are renumbered after each shuffle from left to right again. In other words, the cup on the left always has index 1, the one in the middle — index 2 and the one on the right — index 3.

### 输出格式

In the first line output an integer from 1 to 3 — index of the cup which will have the ball after all the shuffles.

## 输入输出样例

### 输入样例 #1

```cpp
1
1 2
2 1
2 1

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
1
2 1
3 1
1 3

```
### 输出样例 #2

```cpp
2

```
