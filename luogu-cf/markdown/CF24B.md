# F1 Champions

## 题意翻译

输入n场赛车比赛的前m名的选手的名字,其中只有前10名的选手可以得到分数(得分依次为25, 18, 15, 12, 10, 8, 6, 4, 2, 1)

现在有两种排序方法 输出两种排序方法中排在第1的人的名字

方法一 先按 得分排序 得分相同的 按排在第1的次数排序(多的排在前面) 如果次数相同就按排在第2的次数排序 直到比较出来为止

方法二 先按排在第1的次数排序 次数相同的话按得分高低排序 得分相同的按排在第2的次数排序 还是相同的按排在第3的次数排序 直到比较出来为止

1<=n<=20

1<=m<=50

Translated by 稀神探女

## 题目描述

Formula One championship consists of series of races called Grand Prix. After every race drivers receive points according to their final position. Only the top 10 drivers receive points in the following order 25, 18, 15, 12, 10, 8, 6, 4, 2, 1. At the conclusion of the championship the driver with most points is the champion. If there is a tie, champion is the one with most wins (i.e. first places). If a tie still exists, it is chosen the one with most second places, and so on, until there are no more place to use for compare.

Last year another scoring system was proposed but rejected. In it the champion is the one with most wins. If there is tie, champion is the one with most points. If a tie still exists it is proceeded the same way as in the original scoring system, that is comparing number of second, third, forth, and so on, places.

You are given the result of all races during the season and you are to determine the champion according to both scoring systems. It is guaranteed, that both systems will produce unique champion.

## 输入输出格式

### 输入格式

The first line contain integer $ t $ ( $ 1<=t<=20 $ ), where $ t $ is the number of races. After that all races are described one by one. Every race description start with an integer $ n $ ( $ 1<=n<=50 $ ) on a line of itself, where $ n $ is the number of clasified drivers in the given race. After that $ n $ lines follow with the classification for the race, each containing the name of a driver. The names of drivers are given in order from the first to the last place. The name of the driver consists of lowercase and uppercase English letters and has length at most 50 characters. Comparing of names should be case-sensetive.

### 输出格式

Your output should contain exactly two line. On the first line is the name of the champion according to the original rule, and on the second line the name of the champion according to the alternative rule.

## 输入输出样例

### 输入样例 #1

```cpp
3
3
Hamilton
Vettel
Webber
2
Webber
Vettel
2
Hamilton
Vettel

```
### 输出样例 #1

```cpp
Vettel
Hamilton

```
### 输入样例 #2

```cpp
2
7
Prost
Surtees
Nakajima
Schumacher
Button
DeLaRosa
Buemi
8
Alonso
Prost
NinoFarina
JimClark
DeLaRosa
Nakajima
Patrese
Surtees

```
### 输出样例 #2

```cpp
Prost
Prost

```
## 说明

It is not guaranteed that the same drivers participate in all races. For the championship consider every driver that has participated in at least one race. The total number of drivers during the whole season is not more then $ 50 $ .

