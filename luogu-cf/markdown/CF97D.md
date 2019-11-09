# Robot in Basement

## 题意翻译

在一个n*m（n，m <= 150) 的网格上，有一些格子是障碍的，并且网格边界上的格子均是障碍的，另有一个非障碍的格子是出口。一个机器人可以根据程序在该网格上行走。一段程序是一个由UDLR四种指令组成的字符串，机器人会依次执行每个命令，一个指令会使机器人向指定的方向移动一格，如果对应的格子为障碍则不动，现在给定一格长度为l（l <= 1e5)的程序，求它的一个最短前缀p，使得对于一开始的网格上任意非障碍位置都是机器人，在执行完程序p之后都停在出口上。

Translated by @jiangyige 

## 题目描述

The Professor has lost his home robot yet again. After some thinking Professor understood that he had left the robot in the basement.

The basement in Professor's house is represented by a rectangle $ n×m $ , split into $ 1×1 $ squares. Some squares are walls which are impassable; other squares are passable. You can get from any passable square to any other passable square moving through edge-adjacent passable squares. One passable square is the exit from the basement. The robot is placed exactly in one passable square. Also the robot may be placed in the exit square.

Professor is scared of going to the dark basement looking for the robot at night. However, he has a basement plan and the robot's remote control. Using the remote, Professor can send signals to the robot to shift one square left, right, up or down. When the robot receives a signal, it moves in the required direction if the robot's neighboring square in the given direction is passable. Otherwise, the robot stays idle.

Professor wrote a sequence of $ k $ commands on a piece of paper. He thinks that the sequence can lead the robot out of the basement, wherever it's initial position might be. Professor programmed another robot to press the required buttons on the remote according to the notes on the piece of paper. Professor was just about to run the program and go to bed, when he had an epiphany.

Executing each command takes some energy and Professor doesn't want to get huge electricity bill at the end of the month. That's why he wants to find in the sequence he has written out the minimal possible prefix that would guarantee to lead the robot out to the exit after the prefix is fulfilled. And that's the problem Professor challenges you with at this late hour.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ and $ k $ ( $ 3<=n,m<=150 $ , $ 1<=k<=10^{5} $ ). Next $ n $ lines contain $ m $ characters each — that is the Professor's basement's description: "\#" stands for a wall, "." stands for a passable square and "E" stands for the exit from the basement (this square also is passable). It is possible to get from each passable square to the exit, all squares located by the $ n×m $ rectangle's perimeter are the walls. Exactly one square is the exit from the basement. The last line contains $ k $ characters, the description of the sequence of commands that Professor has written out on a piece of paper. "L", "R", "U", "D" stand for commands left, right, up and down correspondingly.

### 输出格式

Print in the output file the length of the smallest possible prefix that will lead the robot to the exit square. In other words, wherever the robot had been positioned initially, it should be positioned in the exit square after all the commands from the prefix are fulfilled (during doing commands the robot can come and leave the exit square, but only the last position of the robot is interesting for us). If Professor is mistaken and no prefix (including the whole sequence) can bring the robot to the exit, print "-1" (without the quotes). If there is the only passable square and it is the exit, print "0" (without the quotes).

## 输入输出样例

### 输入样例 #1

```cpp
5 5 7
#####
#...#
#...#
#E..#
#####
UULLDDR

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
5 5 7
#####
#.#.#
#...#
#E..#
#####
UULLDDR

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
5 3 2
###
#.#
#.#
#E#
###
DD

```
### 输出样例 #3

```cpp
2

```
