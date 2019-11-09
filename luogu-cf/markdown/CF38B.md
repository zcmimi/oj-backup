# Chess

## 题意翻译

题目描述

在一个大小8×8的国际象棋的棋盘有车和马两个棋子，保证一个棋子无法吃掉另一个。

请把另一个马放在棋盘上,使得三个棋子都无法吃掉另一个。棋子只能放在一个空的地方。

输入格式:

输入第一行，有两个字符。第一个字符是小写字母a~h,第二个是1~8的一个数字，表示车的位置。第二行骑士的位置类似。保证他们的位置不一致。

输出格式:

方案总数。

Translated by @少谷 

## 题目描述

Two chess pieces, a rook and a knight, stand on a standard chessboard $ 8×8 $ in size. The positions in which they are situated are known. It is guaranteed that none of them beats the other one.

Your task is to find the number of ways to place another knight on the board so that none of the three pieces on the board beat another one. A new piece can only be placed on an empty square.

## 输入输出格式

### 输入格式

The first input line contains the description of the rook's position on the board. This description is a line which is 2 in length. Its first symbol is a lower-case Latin letter from a to h, and its second symbol is a number from 1 to 8. The second line contains the description of the knight's position in a similar way. It is guaranteed that their positions do not coincide.

### 输出格式

Print a single number which is the required number of ways.

## 输入输出样例

### 输入样例 #1

```cpp
a1
b2

```
### 输出样例 #1

```cpp
44

```
### 输入样例 #2

```cpp
a8
d4

```
### 输出样例 #2

```cpp
38

```
