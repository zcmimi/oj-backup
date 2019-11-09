# World Football Cup

## 题意翻译

# 题意

众所周知，2010年FIFA世界杯在南非举行。BFA决定下一届世界杯将在伯兰德举行。BFA决定改变世界杯的一些规定：

最后的比赛涉及$n$支球队（$n$总是偶数）

前$n / 2$队（根据排名）进入淘汰赛阶段

积分榜是按照以下原则制作的：胜利一个队得$3$分，平分$1$分，失败$0$分。首先，球队按积分顺序排在积分榜上，分数相等比较净胜球，净胜球相等比较进球数。

你被要求写一个程序，通过给定的比赛名单和所有比赛的结果，找到设法进入淘汰赛阶段的球队名单。

## 输入格式

第一个输入行包含唯一的整数 $n$ $(1 \leq\; n \leq\; 50)$表示参加世界杯决赛的球队数量。 以下n行包含这些团队的名称，名称是一个包含小写和大写拉丁字母的字符串，其长度不超过$30$个字符。以下的

$ n*(n-1)/2$ 行描述格式为$name1-name2 \quad num1:num2$，其中$name1,name1$为团队名称;$num1,num2 (0 \leq\; num1,num2 \leq\; 100) $ 为相应的队伍得分。 数据保证没有两支球队名字相同，没有比赛一个球队与自己打球，任意两个球队只会比赛一次。

## 输出格式

按照字典顺序输出$n/2$行进入淘汰赛阶段的球队的名字，在一个单独的行中输出每支球队名称。数据保证结果唯一。

Translated by @Youngsc

## 题目描述

Everyone knows that 2010 FIFA World Cup is being held in South Africa now. By the decision of BFA (Berland's Football Association) next World Cup will be held in Berland. BFA took the decision to change some World Cup regulations:

- the final tournament features $ n $ teams ( $ n $ is always even)

- the first $ n/2 $ teams (according to the standings) come through to the knockout stage

- the standings are made on the following principle: for a victory a team gets 3 points, for a draw — 1 point, for a defeat — 0 points. In the first place, teams are ordered in the standings in decreasing order of their points; in the second place — in decreasing order of the difference between scored and missed goals; in the third place — in the decreasing order of scored goals

- it's written in Berland's Constitution that the previous regulation helps to order the teams without ambiguity.

You are asked to write a program that, by the given list of the competing teams and the results of all the matches, will find the list of teams that managed to get through to the knockout stage.

## 输入输出格式

### 输入格式

The first input line contains the only integer $ n $ ( $ 1<=n<=50 $ ) — amount of the teams, taking part in the final tournament of World Cup. The following $ n $ lines contain the names of these teams, a name is a string of lower-case and upper-case Latin letters, its length doesn't exceed 30 characters. The following $ n·(n-1)/2 $ lines describe the held matches in the format name1-name2 num1:num2, where $ name1 $ , $ name2 $ — names of the teams; $ num1 $ , $ num2 $ ( $ 0<=num1,num2<=100 $ ) — amount of the goals, scored by the corresponding teams. Accuracy of the descriptions is guaranteed: there are no two team names coinciding accurate to the letters' case; there is no match, where a team plays with itself; each match is met in the descriptions only once.

### 输出格式

Output $ n/2 $ lines — names of the teams, which managed to get through to the knockout stage in lexicographical order. Output each name in a separate line. No odd characters (including spaces) are allowed. It's guaranteed that the described regulations help to order the teams without ambiguity.

## 输入输出样例

### 输入样例 #1

```cpp
4
A
B
C
D
A-B 1:1
A-C 2:2
A-D 1:0
B-C 1:0
B-D 0:3
C-D 0:3

```
### 输出样例 #1

```cpp
A
D

```
### 输入样例 #2

```cpp
2
a
A
a-A 2:1

```
### 输出样例 #2

```cpp
a

```
