# Reconnaissance

## 题意翻译

## 题目描述

根据Berland军队的规定，一个巡逻队应当包含两名士兵。由于这两名士兵不能相差太多，它们的身高相差不能超过$d$ 厘米。Bob上尉有$n$ 名士兵在他的支队中。他们的身高分别是$a_1,a_2,\ldots,a_n$ 厘米。一些士兵有着相同的身高。Bob想知道他有多少种能从他的支队中选拔一个巡逻队出来的方案。

方案$(1,2)$ 和$(2,1)$ 应当被视作是不同的

### 输入格式：

第一行两个整数$n$ 和$d$ （$1\leq n\leq1000,1\leq d\leq10^9$ ）— Bob的支队中的士兵的数量和最大所被允许的身高差距。第二行包含个空格分开的整数 — Bob支队中所有士兵的身高。这些数不会超过$10^9$

### 输出格式：

输出一个数 — 高度差不超过$d$ 的士兵组成巡逻队的方案数

Translated by Khassar

## 题目描述

According to the regulations of Berland's army, a reconnaissance unit should consist of exactly two soldiers. Since these two soldiers shouldn't differ much, their heights can differ by at most $ d $ centimeters. Captain Bob has $ n $ soldiers in his detachment. Their heights are $ a_{1},a_{2},...,a_{n} $ centimeters. Some soldiers are of the same height. Bob wants to know, how many ways exist to form a reconnaissance unit of two soldiers from his detachment.

Ways $ (1,2) $ and $ (2,1) $ should be regarded as different.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ d $ ( $ 1<=n<=1000,1<=d<=10^{9} $ ) — amount of soldiers in Bob's detachment and the maximum allowed height difference respectively. The second line contains $ n $ space-separated integers — heights of all the soldiers in Bob's detachment. These numbers don't exceed $ 10^{9} $ .

### 输出格式

Output one number — amount of ways to form a reconnaissance unit of two soldiers, whose height difference doesn't exceed $ d $ .

## 输入输出样例

### 输入样例 #1

```cpp
5 10
10 20 50 60 65

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
5 1
55 30 29 31 55

```
### 输出样例 #2

```cpp
6

```
