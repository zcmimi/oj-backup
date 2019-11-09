# Winner

## 题意翻译

题目描述：

在 Berland 流行着纸牌游戏 “Berlogging” ，这个游戏的赢家是根据以下规则确定的：在每一轮中，玩家获得或失去一定数量的分数，在游戏过程中，分数被记录在“名称和得分”行中，其中名字是玩家的名字，得分是在这一轮中获得的分数。得分是负值意味着玩家失去了相应的分数。如果在比赛结束时只有一名玩家分数最多，他就是获胜者。如果两名或两名以上的玩家在比赛结束时都有最大的分数 m，那么其中首先获得至少 m 分的玩家胜利。开始时，每个玩家都是0分。保证在比赛结束时至少有一个玩家的分数为正。

输入格式：

第一行包含整数n（1 <= n <= 1000），n 是游戏进行的的回合数。

第 2 ~ n+1 行，按照时间顺序输入“名称和得分”行的信息，其中名称是长度不大于 32 的小写字母组成的字符串，分数的绝对值不大于 1000。

输出格式：

输出获胜者的名称。

## 题目描述

The winner of the card game popular in Berland "Berlogging" is determined according to the following rules. If at the end of the game there is only one player with the maximum number of points, he is the winner. The situation becomes more difficult if the number of such players is more than one. During each round a player gains or loses a particular number of points. In the course of the game the number of points is registered in the line "name score", where name is a player's name, and score is the number of points gained in this round, which is an integer number. If score is negative, this means that the player has lost in the round. So, if two or more players have the maximum number of points (say, it equals to $ m $ ) at the end of the game, than wins the one of them who scored at least $ m $ points first. Initially each player has 0 points. It's guaranteed that at the end of the game at least one player has a positive number of points.

## 输入输出格式

### 输入格式

The first line contains an integer number $ n $ ( $ 1<=n<=1000 $ ), $ n $ is the number of rounds played. Then follow $ n $ lines, containing the information about the rounds in "name score" format in chronological order, where name is a string of lower-case Latin letters with the length from 1 to 32, and score is an integer number between -1000 and 1000, inclusive.

### 输出格式

Print the name of the winner.

## 输入输出样例

### 输入样例 #1

```cpp
3
mike 3
andrew 5
mike 2

```
### 输出样例 #1

```cpp
andrew

```
### 输入样例 #2

```cpp
3
andrew 3
andrew 2
mike 5

```
### 输出样例 #2

```cpp
andrew

```
