# Tetris revisited

## 题目描述

Physicist Woll likes to play one relaxing game in between his search of the theory of everything.

Game interface consists of a rectangular $ n×m $ playing field and a dashboard. Initially some cells of the playing field are filled while others are empty. Dashboard contains images of all various connected (we mean connectivity by side) figures of 2, 3, 4 and 5 cells, with all their rotations and reflections. Player can copy any figure from the dashboard and place it anywhere at the still empty cells of the playing field. Of course any figure can be used as many times as needed.

Woll's aim is to fill the whole field in such a way that there are no empty cells left, and also... just have some fun.

Every initially empty cell should be filled with exactly one cell of some figure. Every figure should be entirely inside the board.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF86B/13789101668b22f7cdc585796ee699072b55edc1.png)In the picture black cells stand for initially filled cells of the field, and one-colour regions represent the figures.

## 输入输出格式

### 输入格式

First line contains integers $ n $ and $ m $ ( $ 1<=n,m<=1000 $ ) — the height and the width of the field correspondingly. Next $ n $ lines contain $ m $ symbols each. They represent the field in a natural way: $ j $ -th character of the $ i $ -th line is "\#" if the corresponding cell is filled, and "." if it is empty.

### 输出格式

If there is no chance to win the game output the only number "-1" (without the quotes). Otherwise output any filling of the field by the figures in the following format: each figure should be represented by some digit and figures that touch each other by side should be represented by distinct digits. Every initially filled cell should be represented by "\#".

## 输入输出样例

### 输入样例 #1

```cpp
2 3
...
#.#

```
### 输出样例 #1

```cpp
000
#0#

```
### 输入样例 #2

```cpp
3 3
.#.
...
..#

```
### 输出样例 #2

```cpp
5#1
511
55#

```
### 输入样例 #3

```cpp
3 3
...
.##
.#.

```
### 输出样例 #3

```cpp
-1

```
### 输入样例 #4

```cpp
1 2
##

```
### 输出样例 #4

```cpp
##

```
## 说明

In the third sample, there is no way to fill a cell with no empty neighbours.

In the forth sample, Woll does not have to fill anything, so we should output the field from the input.

