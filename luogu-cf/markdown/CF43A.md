# Football

## 题意翻译

## 题目大意

两只足球队比赛，现给你进球情况，问哪支队伍赢了。

第一行一个整数$n$（$1\leq n\leq 100$），表示有$n$次进球，接下来$n$行，每行一个长度不超过$10$，只由大写字母组成的字符串，表示一个进球的球队名，保证只有两个球队。

输出一个字符串表示胜利球队的球队名，不会平局。

Translated by Khassar

## 题目描述

One day Vasya decided to have a look at the results of Berland 1910 Football Championship’s finals. Unfortunately he didn't find the overall score of the match; however, he got hold of a profound description of the match's process. On the whole there are $ n $ lines in that description each of which described one goal. Every goal was marked with the name of the team that had scored it. Help Vasya, learn the name of the team that won the finals. It is guaranteed that the match did not end in a tie.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ) — the number of lines in the description. Then follow $ n $ lines — for each goal the names of the teams that scored it. The names are non-empty lines consisting of uppercase Latin letters whose lengths do not exceed 10 symbols. It is guaranteed that the match did not end in a tie and the description contains no more than two different teams.

### 输出格式

Print the name of the winning team. We remind you that in football the team that scores more goals is considered the winner.

## 输入输出样例

### 输入样例 #1

```cpp
1
ABC

```
### 输出样例 #1

```cpp
ABC

```
### 输入样例 #2

```cpp
5
A
ABA
ABA
A
A

```
### 输出样例 #2

```cpp
A

```
