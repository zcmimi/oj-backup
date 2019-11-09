# Shortest path of the king

## 题意翻译

国王独自一人在棋盘上。尽管他很孤独，但他并不会灰心，因为他有国家大事要做。例如，他必须对广场T进行正式访问。因为国王没有浪费时间的习惯，所以他想从目前的位置上尽量走最少的步数。请你帮他做这件事。

在一次移动中，国王可以到达有一个共同的边或一个共同的顶点的正方形上，（他通常可以移动到8个不同的方格上）。

输入格式

第一行包含方形s的棋盘坐标，第二行包含平方t。

棋盘坐标由两个字符组成，第一个是小写拉丁字母（从a到h），第二个是从1到8的数字。

输出格式

在第一行打印n - 国王移动的最小数量。然后在n行打印移动本身。每个移动用8：L，R，U，D，LU，LD，RU或RD中的一个来描述。

L，R，U，D分别针对左，右，上，下移动（根据图片），2字母组合代表对角线移动。如果答案不是唯一的，请打印其中的任何一个。

Translated by @liyifeng

## 题目描述

The king is left alone on the chessboard. In spite of this loneliness, he doesn't lose heart, because he has business of national importance. For example, he has to pay an official visit to square $ t $ . As the king is not in habit of wasting his time, he wants to get from his current position $ s $ to square $ t $ in the least number of moves. Help him to do this.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF3A/5ee13bc754378d9b20e7cf9389534f02014d55d0.png)In one move the king can get to the square that has a common side or a common vertex with the square the king is currently in (generally there are 8 different squares he can move to).

## 输入输出格式

### 输入格式

The first line contains the chessboard coordinates of square $ s $ , the second line — of square $ t $ .

Chessboard coordinates consist of two characters, the first one is a lowercase Latin letter (from a to h), the second one is a digit from 1 to 8.

### 输出格式

In the first line print $ n $ — minimum number of the king's moves. Then in $ n $ lines print the moves themselves. Each move is described with one of the 8: L, R, U, D, LU, LD, RU or RD.

L, R, U, D stand respectively for moves left, right, up and down (according to the picture), and 2-letter combinations stand for diagonal moves. If the answer is not unique, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
a8
h1

```
### 输出样例 #1

```cpp
7
RD
RD
RD
RD
RD
RD
RD

```
