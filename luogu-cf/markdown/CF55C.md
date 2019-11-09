# Pie or die

## 题意翻译

题意：

Volodya和Vlad在玩下面的这个游戏。这里有k个派，分布在n×m的板子上。每一回合Volodya移动一个派到这个派边界的格子，如果这个派在板子的边界，Volodya就可以把它移出板，得到这个派并且获胜。在Volodya移动之后，Vlad在板的边界放一个长度为1的挡板，然后Volodya就不能把派从挡住的边移出。 请问，Volodya会赢得这次比赛吗？（我们假设两个玩家都无比聪明）

输入格式

第一行包含3个整数n,m,k，用空格隔开(1<=n,m<=100); 接下来的k行各包括2个整数x,y，表示一个派的坐标，用空格隔开(1<=x<=n,1<=y<=m)。一个格子可以不止有一个派。

输出格式

只输出1个单词：如果Volodya获胜，输出“YES”;否则输出“NO”。

Translated by @qwerta 

## 题目描述

Volodya and Vlad play the following game. There are $ k $ pies at the cells of $ n×m $ board. Each turn Volodya moves one pie to the neighbouring (by side) cell. If the pie lies at the border of the board then Volodya can move it outside the board, get the pie and win. After Volodya's move, Vlad bans some edge at the border of the board of length 1 (between two knots of the board) so that Volodya is not able to move the pie outside the board through this edge anymore. The question is: will Volodya win this game? We suppose both players follow the optimal strategy.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF55C/31b302de1bb09a87c0444ab4f4b5165ba7e60f5d.png)

## 输入输出格式

### 输入格式

First line contains 3 integers, separated by space: $ 1<=n,m<=100 $ — dimensions of the board and $ 0<=k<=100 $ — the number of pies. Each of the next $ k $ lines contains 2 integers, separated by space: $ 1<=x<=n $ , $ 1<=y<=m $ — coordinates of the corresponding pie. There could be more than one pie at a cell.

### 输出格式

Output only one word: "YES" — if Volodya wins, "NO" — otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
2 2 1
1 2

```
### 输出样例 #1

```cpp
YES
```


### 输入样例 #2

```cpp
3 4 0

```
### 输出样例 #2

```cpp
NO
```


### 输入样例 #3

```cpp
100 50 2
50 25
50 25

```
### 输出样例 #3

```cpp
NO
```


