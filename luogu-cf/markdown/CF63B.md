# Settlers&#039; Training

## 题意翻译

一个共有n个数递增序列，每次操作使得全数列任意两个相邻且不同的数中前面一个数加一，问需要几次操作才能把所有的数都变成k,1<=n,k<=100

## 题目描述

In a strategic computer game "Settlers II" one has to build defense structures to expand and protect the territory. Let's take one of these buildings. At the moment the defense structure accommodates exactly $ n $ soldiers. Within this task we can assume that the number of soldiers in the defense structure won't either increase or decrease.

Every soldier has a rank — some natural number from $ 1 $ to $ k $ . $ 1 $ stands for a private and $ k $ stands for a general. The higher the rank of the soldier is, the better he fights. Therefore, the player profits from having the soldiers of the highest possible rank.

To increase the ranks of soldiers they need to train. But the soldiers won't train for free, and each training session requires one golden coin. On each training session all the $ n $ soldiers are present.

At the end of each training session the soldiers' ranks increase as follows. First all the soldiers are divided into groups with the same rank, so that the least possible number of groups is formed. Then, within each of the groups where the soldiers below the rank $ k $ are present, exactly one soldier increases his rank by one.

You know the ranks of all $ n $ soldiers at the moment. Determine the number of golden coins that are needed to increase the ranks of all the soldiers to the rank $ k $ .

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ k $ ( $ 1<=n,k<=100 $ ). They represent the number of soldiers and the number of different ranks correspondingly. The second line contains $ n $ numbers in the non-decreasing order. The $ i $ -th of them, $ a_{i} $ , represents the rank of the $ i $ -th soldier in the defense building ( $ 1<=i<=n $ , $ 1<=a_{i}<=k $ ).

### 输出格式

Print a single integer — the number of golden coins needed to raise all the soldiers to the maximal rank.

## 输入输出样例

### 输入样例 #1

```cpp
4 4
1 2 2 3

```
### 输出样例 #1

```cpp
4
```


### 输入样例 #2

```cpp
4 3
1 1 1 1

```
### 输出样例 #2

```cpp
5
```


## 说明

In the first example the ranks will be raised in the following manner:

1 2 2 3 $ → $ 2 2 3 4 $ → $ 2 3 4 4 $ → $ 3 4 4 4 $ → $ 4 4 4 4

Thus totals to 4 training sessions that require 4 golden coins.

