# TCMCF+++

## 题意翻译

题目描述: Vasya对以TCMCF+++为规则的编程比赛感兴趣。在竞赛中会提出N个问题，每个问题都有一个为整数的积分数（可能是负数甚 至等于零）。据TCMCF+++规则，只有接受问题可以获得积分，选手的得分总数等于他/她已经完成了的所有问题的积分的乘积。如果一 个人没有解决任何问题，那么他/她甚至不会出现在最后的积分榜上，也不会被认为是参与者。Vasya明白得到最多的积分不一定能解 决所有问题。不幸的是，他在比赛结束后才明白这一点。现在他请你帮助他：找出他必须解决的问题，以获得最多的积分。

输入格式: 第一行包含一个整数N，N(1<=n<=100)为提出问题的数目。下一行包含N个整数，为每个提出的问题的积分。

输出格式: 输出时将为得到最多的分数而必须解决的问题的积分分开,请不要忘记，至少有一个问题是必须解决的。如果有多个解决这 个问题的办法，输出其中的任何一个

感谢@Rain_morning 提供的翻译

## 题目描述

Vasya has gotten interested in programming contests in TCMCF+++ rules. On the contest $ n $ problems were suggested and every problem had a cost — a certain integral number of points (perhaps, negative or even equal to zero). According to TCMCF+++ rules, only accepted problems can earn points and the overall number of points of a contestant was equal to the product of the costs of all the problems he/she had completed. If a person didn't solve anything, then he/she didn't even appear in final standings and wasn't considered as participant. Vasya understood that to get the maximal number of points it is not always useful to solve all the problems. Unfortunately, he understood it only after the contest was finished. Now he asks you to help him: find out what problems he had to solve to earn the maximal number of points.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ) — the number of the suggested problems. The next line contains $ n $ space-separated integers $ c_{i} $ ( $ -100<=c_{i}<=100 $ ) — the cost of the $ i $ -th task. The tasks' costs may coinсide.

### 输出格式

Print space-separated the costs of the problems that needed to be solved to get the maximal possible number of points. Do not forget, please, that it was necessary to solve at least one problem. If there are several solutions to that problem, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
5
1 2 -3 3 3

```
### 输出样例 #1

```cpp
3 1 2 3 

```
### 输入样例 #2

```cpp
13
100 100 100 100 100 100 100 100 100 100 100 100 100

```
### 输出样例 #2

```cpp
100 100 100 100 100 100 100 100 100 100 100 100 100 

```
### 输入样例 #3

```cpp
4
-2 -2 -2 -2

```
### 输出样例 #3

```cpp
-2 -2 -2 -2 

```
