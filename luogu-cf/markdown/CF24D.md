# Broken robot

## 题意翻译

你收到的礼物是一个非常聪明的机器人，行走在一块长方形的木板上。不幸的是，你知道它是坏的，表现得相当奇怪（随机）。该板由n行和m列的单元格组成。机器人最初是在i行和j j列的某个单元格上。然后在每一步机器人可以到另一个单元。目的是去底层（n次）行。机器人可以停留在当前单元，向左移动，向右边移动，或者移动到当前下方的单元。如果机器人在最左边的列不能向左移动，如果它是在最右边的列不能向右移动。在每一步中，所有可能的动作都是同样可能的。返回步的预期数量达到下面的行。

输入输出格式

输入格式：

在第一行，您将得到两个空间分隔的整数n和 $ N $ and $ M $ ( $ 1<=N,M<=1000 $ ).。在第二行，您将得到另外两个空间分隔的整数i i和j ( $ 1<=i<=N,1<=j<=M $ ) ），即初始行的数目和初始列的数目。注意，（1，1）（1，1）是棋盘的左上角，（n，m）（n，m）是右下角。

输出格式：

在小数点后至少有4个4位数的线上输出预期的步骤数。

感谢 @MaWenXin @稀神探女 提供的翻译。

## 题目描述

You received as a gift a very clever robot walking on a rectangular board. Unfortunately, you understood that it is broken and behaves rather strangely (randomly). The board consists of $ N $ rows and $ M $ columns of cells. The robot is initially at some cell on the $ i $ -th row and the $ j $ -th column. Then at every step the robot could go to some another cell. The aim is to go to the bottommost ( $ N $ -th) row. The robot can stay at it's current cell, move to the left, move to the right, or move to the cell below the current. If the robot is in the leftmost column it cannot move to the left, and if it is in the rightmost column it cannot move to the right. At every step all possible moves are equally probable. Return the expected number of step to reach the bottommost row.

## 输入输出格式

### 输入格式

On the first line you will be given two space separated integers $ N $ and $ M $ ( $ 1<=N,M<=1000 $ ). On the second line you will be given another two space separated integers $ i $ and $ j $ ( $ 1<=i<=N,1<=j<=M $ ) — the number of the initial row and the number of the initial column. Note that, $ (1,1) $ is the upper left corner of the board and $ (N,M) $ is the bottom right corner.

### 输出格式

Output the expected number of steps on a line of itself with at least $ 4 $ digits after the decimal point.

## 输入输出样例

### 输入样例 #1

```cpp
10 10
10 4

```
### 输出样例 #1

```cpp
0.0000000000

```
### 输入样例 #2

```cpp
10 14
5 14

```
### 输出样例 #2

```cpp
18.0038068653

```
