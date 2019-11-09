# Game of chess unfinished

## 题意翻译

## 题意

一天Volodya在博物馆看到一个棋盘参展。棋盘上只剩下四个棋子：两个白车，白王和黑王。“啊哈，黑方肯定没赢！”Volodya肯定的说。你的任务是判断白方是否赢了。

棋盘上的每个棋子在一个正确的位置（每一个占据一个格子，没有两个棋子占据同一个格子，国王不能在同一个格子）。因此，你的任务是判断白方是否获胜。我们会提醒你，这意味着现在的黑王可以被对方的一个棋子吃掉，也不能移动到不败的位置。车可以移动水平或垂直的任意数量的格子（假设路径上没有其他棋子），国王可以移动到相邻的格子（或角或边）。当然，棋子不能离开棋盘。黑王可以吃掉白车（见样例3）。

## 输入输出格式

### 输入格式

输入4个由空格分开的棋子的位置：两个白车、白王、黑王。$8\times8$ 棋盘上的每个位置由两个符号表示：横坐标（a-h）和纵坐标（1-8）。这是为了保证，没有两个棋子占据相同的格子，并且国王不在同一个格子里。

### 输出格式

输出只有一个单词：当白方能取胜时输出“CHECKMATE”，否则输出“OTHER”。

Translated by @名侦探柯北2号 

## 题目描述

Once Volodya was at the museum and saw a regular chessboard as a museum piece. And there were only four chess pieces on it: two white rooks, a white king and a black king. "Aha, blacks certainly didn't win!", — Volodya said and was right for sure. And your task is to say whether whites had won or not.

Pieces on the chessboard are guaranteed to represent a correct position (every piece occupies one cell, no two pieces occupy the same cell and kings cannot take each other). Thus, your task is only to decide whether whites mate blacks. We would remind you that it means that the black king can be taken by one of the opponent's pieces at the moment and also it cannot move to an unbeaten position. A rook moves vertically or horizontally by any number of free cells (assuming there are no other pieces on its path), a king — to the adjacent cells (either by corner or by side). Certainly, pieces cannot leave the board. The black king might be able to take opponent's rooks at his turn (see sample 3).

## 输入输出格式

### 输入格式

The input contains 4 space-separated piece positions: positions of the two rooks, the white king and the black king. Each position on $ 8×8 $ chessboard is denoted by two symbols — ('a' - 'h') and ('1' - '8') — which stand for horizontal and vertical coordinates of the cell occupied by the piece. It is guaranteed, that no two pieces occupy the same cell, and kings cannot take each other.

### 输出格式

Output should contain one word: "CHECKMATE" if whites mate blacks, and "OTHER" otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
a6 b4 c8 a8

```
### 输出样例 #1

```cpp
CHECKMATE

```
### 输入样例 #2

```cpp
a6 c4 b6 b8

```
### 输出样例 #2

```cpp
OTHER

```
### 输入样例 #3

```cpp
a2 b1 a3 a1

```
### 输出样例 #3

```cpp
OTHER

```
