# Horse Races

## 题意翻译

彼佳非常喜欢赛马，有编号从l到r的马参加比赛。幸运数字为4或7。有机会赢的马的编号满足在这一串数字中，存在两个幸运数字，它们之间的距离不超过k（两个相邻的数字之间的距离为1）。问有机会赢的马的编号一共有几个。输出答案对1e9+7取模。

## 题目描述

Petya likes horse racing very much. Horses numbered from $ l $ to $ r $ take part in the races. Petya wants to evaluate the probability of victory; for some reason, to do that he needs to know the amount of nearly lucky horses' numbers. A nearly lucky number is an integer number that has at least two lucky digits the distance between which does not exceed $ k $ . Petya learned from some of his mates from Lviv that lucky digits are digits $ 4 $ and $ 7 $ . The distance between the digits is the absolute difference between their positions in the number of a horse. For example, if $ k=2 $ , then numbers $ 412395497 $ , $ 404 $ , $ 4070400000070004007 $ are nearly lucky and numbers $ 4 $ , $ 4123954997 $ , $ 4007000040070004007 $ are not.

Petya prepared $ t $ intervals $ [l_{i},r_{i}] $ and invented number $ k $ , common for all of them. Your task is to find how many nearly happy numbers there are in each of these segments. Since the answers can be quite large, output them modulo $ 1000000007 $ ( $ 10^{9}+7 $ ).

## 输入输出格式

### 输入格式

The first line contains two integers $ t $ and $ k $ ( $ 1<=t,k<=1000 $ ) — the number of segments and the distance between the numbers correspondingly. Next $ t $ lines contain pairs of integers $ l_{i} $ and $ r_{i} $ ( $ 1<=l<=r<=10^{1000} $ ). All numbers are given without the leading zeroes. Numbers in each line are separated by exactly one space character.

### 输出格式

Output $ t $ lines. In each line print one integer — the answer for the corresponding segment modulo $ 1000000007 $ ( $ 10^{9}+7 $ ).

## 输入输出样例

### 输入样例 #1

```cpp
1 2
1 100

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
1 2
70 77

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
2 1
1 20
80 100

```
### 输出样例 #3

```cpp
0
0

```
## 说明

In the first sample, the four nearly lucky numbers are 44, 47, 74, 77.

In the second sample, only 74 and 77 are in the given segment.

