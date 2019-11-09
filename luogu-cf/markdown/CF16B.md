# Burglar and Matches

## 题意翻译

题目描述:一个窃贼到火柴仓库偷火柴,仓库有m个容器,第i个容器有a[i]个火柴盒,其中每个火柴盒中有b[i]根火柴,窃贼最多可以拿n个火柴盒 。

输入：第一行两个正整数n，m

下面m行每行有两个数a[i]和b[i]

输出：如题，输出窃贼最多能偷多少根火柴

1≤n≤2*10^8

1≤m≤20

1≤ai≤10^8,1≤bi≤10

感谢 @稀神探女 提供的翻译。

## 题目描述

A burglar got into a matches warehouse and wants to steal as many matches as possible. In the warehouse there are $ m $ containers, in the $ i $ -th container there are $ a_{i} $ matchboxes, and each matchbox contains $ b_{i} $ matches. All the matchboxes are of the same size. The burglar's rucksack can hold $ n $ matchboxes exactly. Your task is to find out the maximum amount of matches that a burglar can carry away. He has no time to rearrange matches in the matchboxes, that's why he just chooses not more than $ n $ matchboxes so that the total amount of matches in them is maximal.

## 输入输出格式

### 输入格式

The first line of the input contains integer $ n $ ( $ 1<=n<=2·10^{8} $ ) and integer $ m $ ( $ 1<=m<=20 $ ). The $ i+1 $ -th line contains a pair of numbers $ a_{i} $ and $ b_{i} $ ( $ 1<=a_{i}<=10^{8},1<=b_{i}<=10 $ ). All the input numbers are integer.

### 输出格式

Output the only number — answer to the problem.

## 输入输出样例

### 输入样例 #1

```cpp
7 3
5 10
2 5
3 6

```
### 输出样例 #1

```cpp
62

```
### 输入样例 #2

```cpp
3 3
1 3
2 2
3 1

```
### 输出样例 #2

```cpp
7

```
