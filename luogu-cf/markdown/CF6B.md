# President&#039;s Office

## 题意翻译

输入格式：

第一行：

房间长n,宽m,总统办公桌代表的字符串

接下来2 ~ n+1行,每行输入m列:

房间内的办公桌的颜色（大写字母）。"."为空单元格。

输出格式：

一行一个变量：

求出在总统桌四周相邻的办公桌数量

样例1 解释：

3 4 R

G . B .

. R R .

T T T .

此办公室的总统桌在二排的第二，三列（连起来的并且颜色相同算一个办公桌，此样例总统桌面积为1*2）

那么四周则有办公桌：

TTT（TTT面积为1*3）

B

因此输出2

Translated by @s5_gan

## 题目描述

President of Berland has a very vast office-room, where, apart from him, work his subordinates. Each subordinate, as well as President himself, has his own desk of a unique colour. Each desk is rectangular, and its sides are parallel to the office walls. One day President decided to establish an assembly, of which all his deputies will be members. Unfortunately, he does not remember the exact amount of his deputies, but he remembers that the desk of each his deputy is adjacent to his own desk, that is to say, the two desks (President's and each deputy's) have a common side of a positive length.

The office-room plan can be viewed as a matrix with $ n $ rows and $ m $ columns. Each cell of this matrix is either empty, or contains a part of a desk. An uppercase Latin letter stands for each desk colour. The «period» character («.») stands for an empty cell.

## 输入输出格式

### 输入格式

The first line contains two separated by a space integer numbers $ n $ , $ m $ ( $ 1<=n,m<=100 $ ) — the length and the width of the office-room, and $ c $ character — the President's desk colour. The following $ n $ lines contain $ m $ characters each — the office-room description. It is guaranteed that the colour of each desk is unique, and each desk represents a continuous subrectangle of the given matrix. All colours are marked by uppercase Latin letters.

### 输出格式

Print the only number — the amount of President's deputies.

## 输入输出样例

### 输入样例 #1

```cpp
3 4 R
G.B.
.RR.
TTT.

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
3 3 Z
...
.H.
..Z

```
### 输出样例 #2

```cpp
0

```
