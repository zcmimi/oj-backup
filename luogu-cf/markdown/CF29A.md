# Spit Problem

## 题意翻译

题目大意

有n只骆驼在公园里互相吐口水，如果一个骆驼在x位置能吐距离为d的口水，那么他只能吐中位置在x+d的骆驼，如果那个位置有骆驼的话

问是否有两个骆驼能彼此之间吐中口水，是的话输出YES，否则输出NO

输入

第一行一个整数n（1≤n≤100）

接下来n行，每行两个数$x_i,d_i$

$(-10^4\leq x_i\leq10^4,1\leq |d_i| \leq2*10^4)$，$x_i$表示骆驼的位置，$d_i$整数表示吐在右侧，负数表示吐在左侧

如果有两只骆驼，它们彼此能吐中口水，输出YES。否则,输出NO

Translated by Khassar

## 题目描述

In a Berland's zoo there is an enclosure with camels. It is known that camels like to spit. Bob watched these interesting animals for the whole day and registered in his notepad where each animal spitted. Now he wants to know if in the zoo there are two camels, which spitted at each other. Help him to solve this task.

The trajectory of a camel's spit is an arc, i.e. if the camel in position $ x $ spits $ d $ meters right, he can hit only the camel in position $ x+d $ , if such a camel exists.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=100 $ ) — the amount of camels in the zoo. Each of the following $ n $ lines contains two integers $ x_{i} $ and $ d_{i} $ ( $ -10^{4}<=x_{i}<=10^{4},1<=|d_{i}|<=2·10^{4} $ ) — records in Bob's notepad. $ x_{i} $ is a position of the $ i $ -th camel, and $ d_{i} $ is a distance at which the $ i $ -th camel spitted. Positive values of $ d_{i} $ correspond to the spits right, negative values correspond to the spits left. No two camels may stand in the same position.

### 输出格式

If there are two camels, which spitted at each other, output YES. Otherwise, output NO.

## 输入输出样例

### 输入样例 #1

```cpp
2
0 1
1 -1

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
3
0 1
1 1
2 -2

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
5
2 -10
3 10
0 5
5 -5
10 1

```
### 输出样例 #3

```cpp
YES

```
