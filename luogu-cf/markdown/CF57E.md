# Chess

## 题意翻译

计算国际象棋中的骑士能够在k步内到达的不同的格子的数目mod 1000000007的值。

其中有n个格子被删除。

## 题目描述

Brian the Rabbit adores chess. Not long ago he argued with Stewie the Rabbit that a knight is better than a king. To prove his point he tries to show that the knight is very fast but Stewie doesn't accept statements without evidence. He constructed an infinite chessboard for Brian, where he deleted several squares to add some more interest to the game. Brian only needs to count how many different board squares a knight standing on a square with coordinates of $ (0,0) $ can reach in no more than $ k $ moves. Naturally, it is forbidden to move to the deleted squares.

Brian doesn't very much like exact sciences himself and is not acquainted with programming, that's why he will hardly be able to get ahead of Stewie who has already started solving the problem. Help Brian to solve the problem faster than Stewie.

## 输入输出格式

### 输入格式

The first line contains two integers $ k $ and $ n $ ( $ 0<=k<=10^{18},0<=n<=440 $ ) which are correspondingly the maximal number of moves a knight can make and the number of deleted cells. Then follow $ n $ lines, each giving the coordinates of a deleted square in the form $ (x_{i},y_{i}) $ ( $ |x_{i}|<=10,|y_{i}|<=10 $ ). All the numbers are integer, the deleted squares are different and it is guaranteed that the square $ (0,0) $ is not deleted.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cin (also you may use %I64d).

### 输出格式

You must print the answer on a single line. As it can be rather long, you should print it modulo $ 1000000007 $ .

## 输入输出样例

### 输入样例 #1

```cpp
1 0

```
### 输出样例 #1

```cpp
9

```
### 输入样例 #2

```cpp
2 7
-1 2
1 2
2 1
2 -1
1 -2
-1 -2
-2 -1

```
### 输出样例 #2

```cpp
9

```
