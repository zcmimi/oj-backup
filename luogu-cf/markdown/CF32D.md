# Constellation

## 题意翻译

一个Berland星空图填充了一个N×M的正方形。在每一个正方形上都可能有星星。Berland的十字星座是所有的天文学家最喜欢的星座。这个星座可以由任何5个恒星组成，所以对于整数x（星座的半径），有以下原则：

第二个和第一个在同一条垂直线上，但是在第一个的上边x单位处。

第三个和第一个在同一条垂直线上，但是在第一个的下边x单位处。

第四个和第一个在同一水平线上，但是在第一个的左边x单位处。

第五个和第一个在同一水平线上，但是在第一个的右边x单位处。

这些星座可以非常多，这就是为什么他们有以下原则：当两星座相比，更小的半径会有更小的指数；如果他们的半径相等，其中央恒星如果高于另一个中央恒星；如果他们中央恒星都在同一水平的人，其中央恒星是对另一个中央恒星的左边。

你的任务是找到星座为指数K的Berland的星空图。

输入格式

第一行包含三个整数N,M和k(1 <= N，M = 300,1 <= K <= 3*10^7)分别为地图的高与宽以及所需星座的指数。左上角坐标为(1,1)，右下角坐标为(N,M)。N行，M列的字符分别描述星空图。第i行第j列的字符为mapij

输出格式

如果星座指数小于k，输出-1。否则输出5行，每行分别两个整数，即星座的每一个星星的坐标。按照中央、上、下、左、右的顺序输出星星：

感谢@Shan_Xian 提供的翻译

## 题目描述

A star map in Berland is a checked field $ n×m $ squares. In each square there is or there is not a star. The favourite constellation of all Berland's astronomers is the constellation of the Cross. This constellation can be formed by any 5 stars so, that for some integer $ x $ (radius of the constellation) the following is true:

- the 2nd is on the same vertical line as the 1st, but $ x $ squares up

- the 3rd is on the same vertical line as the 1st, but $ x $ squares down

- the 4th is on the same horizontal line as the 1st, but $ x $ squares left

- the 5th is on the same horizontal line as the 1st, but $ x $ squares right

Such constellations can be very numerous, that's why they are numbered with integers from 1 on the following principle: when two constellations are compared, the one with a smaller radius gets a smaller index; if their radii are equal — the one, whose central star if higher than the central star of the other one; if their central stars are at the same level — the one, whose central star is to the left of the central star of the other one.

Your task is to find the constellation with index $ k $ by the given Berland's star map.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ and $ k $ ( $ 1<=n,m<=300,1<=k<=3·10^{7} $ ) — height and width of the map and index of the required constellation respectively. The upper-left corner has coordinates $ (1,1) $ , and the lower-right — $ (n,m) $ . Then there follow $ n $ lines, $ m $ characters each — description of the map. $ j $ -th character in $ i $ -th line is «\*», if there is a star in the corresponding square, and «.» if this square is empty.

### 输出格式

If the number of the constellations is less than $ k $ , output -1. Otherwise output 5 lines, two integers each — coordinates of the required constellation. Output the stars in the following order: central, upper, lower, left, right.

## 输入输出样例

### 输入样例 #1

```cpp
5 6 1
....*.
...***
....*.
..*...
.***..

```
### 输出样例 #1

```cpp
2 5
1 5
3 5
2 4
2 6

```
### 输入样例 #2

```cpp
5 6 2
....*.
...***
....*.
..*...
.***..

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
7 7 2
...*...
.......
...*...
*.***.*
...*...
.......
...*...

```
### 输出样例 #3

```cpp
4 4
1 4
7 4
4 1
4 7

```
