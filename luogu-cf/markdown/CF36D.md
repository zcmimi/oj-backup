# New Game with a Chess Piece

## 题意翻译

Petya和Vasya正在发明一种新的游戏，这种游戏需要一个长方形的棋盘和一个棋子。游戏开始时，棋子放在棋盘的左上角。两名队员轮流移动棋子。每一次移动，棋子可以向右移动一格，或者向下移动一格，或者斜向下和向右移动k格，直到不能移动棋子的一方输掉。他们还没想好该怎么称呼这个游戏，也没想好棋盘的最佳尺寸。你的任务是编写一个程序，根据棋盘大小决定游戏的结果。

感谢@pushinl 提供的翻译

## 题目描述

Petya and Vasya are inventing a new game that requires a rectangular board and one chess piece. At the beginning of the game the piece stands in the upper-left corner of the board. Two players move the piece in turns. Each turn the chess piece can be moved either one square to the right or one square down or jump $ k $ squares diagonally down and to the right. The player who can’t move the piece loses.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF36D/6de962072be4a9388ec093a95ba4343538d648ef.png)The guys haven’t yet thought what to call the game or the best size of the board for it. Your task is to write a program that can determine the outcome of the game depending on the board size.

## 输入输出格式

### 输入格式

The first input line contains two integers $ t $ and $ k $ ( $ 1<=t<=20 $ , $ 1<=k<=10^{9} $ ). Each of the following $ t $ lines contains two numbers $ n $ , $ m $ — the board’s length and width ( $ 1<=n,m<=10^{9} $ ).

### 输出格式

Output $ t $ lines that can determine the outcomes of the game on every board. Write «+» if the first player is a winner, and «-» otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
10 2
1 1
1 2
2 1
2 2
1 3
2 3
3 1
3 2
3 3
4 3

```
### 输出样例 #1

```cpp
-
+
+
-
-
+
-
+
+
+

```
