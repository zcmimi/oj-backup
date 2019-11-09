# Triminoes

## 题意翻译

题目描述

给出一个$n \times m$的棋盘，棋盘用黑白两色染色（染色规则与国际象棋棋盘相同），其上某些格子被挖掉了，问能否使用$1 \times 3$和$3 \times 1$的矩形不重不漏地覆盖没有挖空的棋盘部分。

注意：矩形放置的中间的格子必须要是黑色

输入格式

第一行两个正整数$n,m(1 \leq n,m \leq 1000)$

接下来$n$行每行一个长度为$m$的字符串表示棋盘。字符为$'\ .\ '$表示这一个格子被挖空了，为$w$或$b$表示这个格子没有被挖空，颜色为白色或黑色。

输出格式

如果不存在方案，输出一行$NO$，否则输出一行$YES$后输出一个$n \times m$的矩阵，表示覆盖方案。原棋盘中的挖空部分仍然输出$'\ .\ '$，未被挖空的部分需要用$a,b,c,d$其中之一代替，输出中三个连续的$a,b,c,d$表示一个$1 \times 3$或$3 \times 1$的矩形

## 题目描述

There are many interesting tasks on domino tilings. For example, an interesting fact is known. Let us take a standard chessboard ( $ 8×8 $ ) and cut exactly two squares out of it. It turns out that the resulting board can always be tiled using dominoes $ 1×2 $ , if the two cut out squares are of the same color, otherwise it is impossible.

Petya grew bored with dominoes, that's why he took a chessboard (not necessarily $ 8×8 $ ), cut some squares out of it and tries to tile it using triminoes. Triminoes are reactangles $ 1×3 $ (or $ 3×1 $ , because triminoes can be rotated freely), also the two extreme squares of a trimino are necessarily white and the square in the middle is black. The triminoes are allowed to put on the chessboard so that their squares matched the colors of the uncut squares of the chessboard, and also the colors must match: the black squares must be matched with the black ones only and the white ones — with the white squares. The triminoes must not protrude above the chessboard or overlap each other. All the uncut squares of the board must be covered with triminoes.

Help Petya find out if it is possible to tile his board using triminos in the described way and print one of the variants of tiling.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 1<=n,m<=1000 $ ) — the board size. Next $ n $ lines contain $ m $ symbols each and represent the board description. If some position contains ".", then the square in this position has been cut out. Symbol "w" stands for a white square, "b" stands for a black square. It is guaranteed that through adding the cut squares can result in a correct chessboard (i.e. with alternating black and white squares), thought, perhaps, of a non-standard size.

### 输出格式

If at least one correct tiling exists, in the first line print "YES" (without quotes), and then — the tiling description. The description must contain $ n $ lines, $ m $ symbols in each. The cut out squares, as well as in the input data, are marked by ".". To denote triminoes symbols "a", "b", "c", "d" can be used, and all the three squares of each trimino must be denoted by the same symbol. If two triminoes share a side, than they must be denoted by different symbols. Two triminoes not sharing a common side can be denoted by one and the same symbol (c.f. sample).

If there are multiple correct ways of tiling, it is allowed to print any. If it is impossible to tile the board using triminoes or the correct tiling, for which four symbols "a", "b", "c", "d" would be enough, doesn't exist, print "NO" (without quotes) in the first line.

## 输入输出样例

### 输入样例 #1

```cpp
6 10
.w.wbw.wbw
wbwbw.w.w.
bw.wbwbwbw
w.wbw.wbwb
...wbw.w.w
..wbw.wbw.

```
### 输出样例 #1

```cpp
YES
.a.aaa.ccc
baccc.c.a.
ba.dddcbab
b.aaa.cbab
...bbb.b.b
..ccc.ddd.
```


### 输入样例 #2

```cpp
2 2
wb
bw

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
1 3
wbw

```
### 输出样例 #3

```cpp
YES
bbb

```
### 输入样例 #4

```cpp
1 3
...

```
### 输出样例 #4

```cpp
YES
...

```
