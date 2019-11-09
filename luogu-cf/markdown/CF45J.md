# Planting Trees

## 题意翻译

Vasya是greencode野生动物保护协会的支持者。

有一天他找到了一个空地，他把它分成了 $n*m$ 个方格并决定在上边种出一个森林。Vasya将要种 $n*m$ 棵高度从 1 到 $n*m$ 的树，并且高度两两不同。

为了让他的森林看起来更加的自然，他希望任意两颗四联通相邻的树高度差的绝对值严格大于1。请帮助Vasya制定森林的种植计划。无解输出-1，多解输出任意一种方案。

感谢@MloVtry 提供的翻译

## 题目描述

Vasya is a Greencode wildlife preservation society proponent. One day he found an empty field nobody owned, divided it into $ n×m $ squares and decided to plant a forest there. Vasya will plant $ nm $ trees of all different heights from $ 1 $ to $ nm $ . For his forest to look more natural he wants any two trees growing in the side neighbouring squares to have the absolute value of difference in heights to be strictly more than 1. Help Vasya: make the plan of the forest planting for which this condition is fulfilled.

## 输入输出格式

### 输入格式

The first line contains two space-separated integers $ n $ and $ m $ ( $ 1<=n,m<=100 $ ) — the number of rows and columns on Vasya's field

### 输出格式

If there's no solution, print -1. Otherwise, print $ n $ lines containing $ m $ numbers each — the trees' planting plan. In every square of the plan the height of a tree that should be planted on this square should be written. If there are several solutions to that problem, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
2 3

```
### 输出样例 #1

```cpp
3 6 2
5 1 4

```
### 输入样例 #2

```cpp
2 1

```
### 输出样例 #2

```cpp
-1

```
