# Hierarchy

## 题意翻译

题目描述小N的公司有n个员工，每个员工i有一个初始的权值q[i]，每一个员工有且只有一个上司。

有m条申请，每个申请由三个数a[i],b[i],c[i]构成，代表将a[i]任命为b[i]的上司所需要的花费为c[i]，同时必须保证q[a[i]]>q[b[i]]。试求使每个员工(顶头上司除外)都有且只有一个上司所花费的最小代价

输入:第一行n，第二行n个数表示q[i]，第三行m,之后m行每行三个数表示a[i],b[i],c[i]

输出:一个整数表示最小代价，若无解则输出-1

1<=n

0<=m

0<=qi

0<=ci

1<=ai,bi

Translated by 稀神探女

## 题目描述

Nick's company employed $ n $ people. Now Nick needs to build a tree hierarchy of «supervisor-surbodinate» relations in the company (this is to say that each employee, except one, has exactly one supervisor). There are $ m $ applications written in the following form: «employee $ a_{i} $ is ready to become a supervisor of employee $ b_{i} $ at extra cost $ c_{i} $ ». The qualification $ q_{j} $ of each employee is known, and for each application the following is true: $ q_{ai}>q_{bi} $ .

Would you help Nick calculate the minimum cost of such a hierarchy, or find out that it is impossible to build it.

## 输入输出格式

### 输入格式

The first input line contains integer $ n $ ( $ 1<=n<=1000 $ ) — amount of employees in the company. The following line contains $ n $ space-separated numbers $ q_{j} $ ( $ 0<=q_{j}<=10^{6} $ )— the employees' qualifications. The following line contains number $ m $ ( $ 0<=m<=10000 $ ) — amount of received applications. The following $ m $ lines contain the applications themselves, each of them in the form of three space-separated numbers: $ a_{i} $ , $ b_{i} $ and $ c_{i} $ ( $ 1<=a_{i},b_{i}<=n $ , $ 0<=c_{i}q_{bi} $ .

### 输出格式

Output the only line — the minimum cost of building such a hierarchy, or -1 if it is impossible to build it.

## 输入输出样例

### 输入样例 #1

```cpp
4
7 2 3 1
4
1 2 5
2 4 1
3 4 1
1 3 5

```
### 输出样例 #1

```cpp
11

```
### 输入样例 #2

```cpp
3
1 2 3
2
3 1 2
3 1 3

```
### 输出样例 #2

```cpp
-1

```
## 说明

In the first sample one of the possible ways for building a hierarchy is to take applications with indexes 1, 2 and 4, which give 11 as the minimum total cost. In the second sample it is impossible to build the required hierarchy, so the answer is -1.

