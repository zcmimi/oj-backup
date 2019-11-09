# Coins

## 题意翻译

有三枚硬币，两两重量不一。现将它们两两放在天平上比较，并给出三次比较的结果，请将三枚硬币按重量递增序输出。如果方案有矛盾，输出“Impossible”

Translated by @Lolierl

## 题目描述

One day Vasya came across three Berland coins. They didn't have any numbers that's why Vasya didn't understand how their denominations differ. He supposed that if one coin is heavier than the other one, then it should be worth more. Vasya weighed all the three pairs of coins on pan balance scales and told you the results. Find out how the deminations of the coins differ or if Vasya has a mistake in the weighting results. No two coins are equal.

## 输入输出格式

### 输入格式

The input data contains the results of all the weighting, one result on each line. It is guaranteed that every coin pair was weighted exactly once. Vasya labelled the coins with letters «A», «B» and «C». Each result is a line that appears as (letter)(> or < sign)(letter). For example, if coin "A" proved lighter than coin "B", the result of the weighting is A<B.

### 输出格式

It the results are contradictory, print Impossible. Otherwise, print without spaces the rearrangement of letters «A», «B» and «C» which represent the coins in the increasing order of their weights.

## 输入输出样例

### 输入样例 #1

```cpp
A&gt;B
C&lt;B
A&gt;C

```
### 输出样例 #1

```cpp
CBA
```


### 输入样例 #2

```cpp
A&lt;B
B&gt;C
C&gt;A

```
### 输出样例 #2

```cpp
ACB
```


