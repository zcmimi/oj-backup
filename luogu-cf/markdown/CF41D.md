# Pawn

## 题意翻译

翻译：

题目描述：

国际象棋棋盘最底行站了一个兵。 它只有两种行动方式： 向上左或向上右走。 它可以选择从最低行哪个节点开始他的旅程。 每个格子上有0-9颗豌豆，而士兵想移动到最上一行并且积累到尽可能多的豌豆。同时，因为这个士兵必须把豌豆平均分给自己和他的k个兄弟，他所收集到的豌豆必须是k+1的倍数。请找到他可以收集到的最多豌豆，并确定他的操作序列。

规定士兵不能手动扔出豌豆，并且他必须捡起所到达的每一个格子的所有豌豆。

输入格式：

第一行三个整数n,m,k($2 <= n,m <= 100, 0 <= k <= 10)$ 行数、列数、士兵的兄弟们。

接下来一个$n \times m$的矩阵，每个元素均是0-9的整数（不空格），描述该格的豌豆。第一行被认为是最上一行，最后一行被认为是最下一行。

输出格式：

如果不能收集到k+1倍数的豌豆，输出-1.

否则，输出第一行一个整数，为最多豌豆数；第二行一个整数，为士兵开始移动的位置；第三行包括n-1个字母L 或 R，表示士兵的行动序列。

如果有多种收集到相同且是k+1倍数数量的豌豆，你可以任意输出一种方案。

Translated by @Maniac丶坚果 

## 题目描述

On some square in the lowest row of a chessboard a stands a pawn. It has only two variants of moving: upwards and leftwards or upwards and rightwards. The pawn can choose from which square of the lowest row it can start its journey. On each square lay from 0 to 9 peas. The pawn wants to reach the uppermost row having collected as many peas as possible. As there it will have to divide the peas between itself and its $ k $ brothers, the number of peas must be divisible by $ k+1 $ . Find the maximal number of peas it will be able to collect and which moves it should make to do it.

The pawn cannot throw peas away or leave the board. When a pawn appears in some square of the board (including the first and last square of the way), it necessarily takes all the peas.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ , $ k $ ( $ 2<=n,m<=100,0<=k<=10 $ ) — the number of rows and columns on the chessboard, the number of the pawn's brothers. Then follow $ n $ lines containing each $ m $ numbers from 0 to 9 without spaces — the chessboard's description. Each square is described by one number — the number of peas in it. The first line corresponds to the uppermost row and the last line — to the lowest row.

### 输出格式

If it is impossible to reach the highest row having collected the number of peas divisible by $ k+1 $ , print -1.

Otherwise, the first line must contain a single number — the maximal number of peas the pawn can collect given that the number must be divisible by $ k+1 $ . The second line must contain a single number — the number of the square's column in the lowest row, from which the pawn must start its journey. The columns are numbered from the left to the right with integral numbers starting from $ 1 $ . The third line must contain a line consisting of $ n-1 $ symbols — the description of the pawn's moves. If the pawn must move upwards and leftwards, print L, if it must move upwards and rightwards, print R. If there are several solutions to that problem, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
3 3 1
123
456
789

```
### 输出样例 #1

```cpp
16
2
RL

```
### 输入样例 #2

```cpp
3 3 0
123
456
789

```
### 输出样例 #2

```cpp
17
3
LR

```
### 输入样例 #3

```cpp
2 2 10
98
75

```
### 输出样例 #3

```cpp
-1

```
