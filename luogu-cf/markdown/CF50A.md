# Domino piling

## 题意翻译

大意：

使用尽可能多的2×1标准多米诺骨牌，在以下条件的限制下填充 M×N的矩形板：

1.每个多米诺骨牌完全覆盖两个方块。

2.无重叠。

3.每块都完全放在板上，允许接触板的边缘。

Translated by @khong 

## 题目描述

You are given a rectangular board of $ M×N $ squares. Also you are given an unlimited number of standard domino pieces of $ 2×1 $ squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1\. Each domino completely covers two squares.

2\. No two dominoes overlap.

3\. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

## 输入输出格式

### 输入格式

In a single line you are given two integers $ M $ and $ N $ — board sizes in squares ( $ 1<=M<=N<=16 $ ).

### 输出格式

Output one number — the maximal number of dominoes, which can be placed.

## 输入输出样例

### 输入样例 #1

```cpp
2 4

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
3 3

```
### 输出样例 #2

```cpp
4

```
