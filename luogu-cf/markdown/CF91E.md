# Igloo Skyscraper

## 题意翻译

今天，北极在一名为“玩具冰屋摩天大楼”的运动中举办奥林匹克运动会！

有 $n$ 个海象（编号为 $1$ 到 $n$ ）参加比赛建造自己的摩天大楼 。在 $t=0$ 时，第 $i$ 个海象的摩天大楼的高度为 $a_i$ 。每一时刻，编号为 $i$ 的海象会完成 $b_i$ 层楼的建造。

在奥运会现场报道的记者向活动组织者提出了 $q$ 次询问。每次询问给出三个数字 $l_i,r_i,t_i$。活动组织者用数字 $x$ 回答每个查询，其中 $x$ 满足：

1. 数字 $x$ 位于从 $l_i$ 到 $r_i$ 的区间，即 $l_i \leq x \leq r_i$ 。

2. 编号为 $x$ 的海象的摩天大楼在 $t_i$ 时刻拥有编号在 $[l_i,r_i]$ 中所有海象的摩天大楼中的最大高度。

对于每位记者的查询，输出符合上述标准的海象的编号 $x$ 。**如果有多个可能的答案，请输出其中任何一个。**

### 输入格式

第一行包含两个正整数 $n$ 和 $q$（ $1 \le n,q \le 10^5$）。

接下来的 $n$ 行为海牛建造的摩天大楼的情况，每行两个整数 $a_i$，$b_i$（ $1\le a_i,b_i \le 10^9$ ）。

接下来 $q$ 行为询问，每行三个整数：$l_i,r_i,t_i$（ $1\le l_i \le r_i \le n,0 \le t_i \le 10^6$ ）。

### 输出格式

对于每个询问，输出符合标准的海象 $x$ 的编号。

**如果有多个符合条件的答案，你可以输出其中任意一个。**

## 题目描述

Today the North Pole hosts an Olympiad in a sport called... toy igloo skyscrapers' building!

There are $ n $ walruses taking part in the contest. Each walrus is given a unique number from $ 1 $ to $ n $ . After start each walrus begins to build his own igloo skyscraper. Initially, at the moment of time equal to $ 0 $ , the height of the skyscraper $ i $ -th walrus is equal to $ a_{i} $ . Each minute the $ i $ -th walrus finishes building $ b_{i} $ floors.

The journalists that are reporting from the spot where the Olympiad is taking place, make $ q $ queries to the organizers. Each query is characterized by a group of three numbers $ l_{i} $ , $ r_{i} $ , $ t_{i} $ . The organizers respond to each query with a number $ x $ , such that:

1\. Number $ x $ lies on the interval from $ l_{i} $ to $ r_{i} $ inclusive ( $ l_{i}<=x<=r_{i} $ ).

2\. The skyscraper of the walrus number $ x $ possesses the maximum height among the skyscrapers of all walruses from the interval $ [l_{i},r_{i}] $ at the moment of time $ t_{i} $ .

For each journalists' query print the number of the walrus $ x $ that meets the above-given criteria. If there are several possible answers, print any of them.

## 输入输出格式

### 输入格式

The first line contains numbers $ n $ and $ q $ ( $ 1<=n,q<=10^{5} $ ). Next $ n $ lines contain pairs of numbers $ a_{i} $ , $ b_{i} $ ( $ 1<=a_{i},b_{i}<=10^{9} $ ). Then follow $ q $ queries i the following format $ l_{i} $ , $ r_{i} $ , $ t_{i} $ , one per each line ( $ 1<=l_{i}<=r_{i}<=n $ , $ 0<=t_{i}<=10^{6} $ ). All input numbers are integers.

### 输出格式

For each journalists' query print the number of the walrus $ x $ that meets the criteria, given in the statement. Print one number per line.

## 输入输出样例

### 输入样例 #1

```cpp
5 4
4 1
3 5
6 2
3 5
6 5
1 5 2
1 3 5
1 1 0
1 5 0

```
### 输出样例 #1

```cpp
5
2
1
5

```
### 输入样例 #2

```cpp
5 4
6 1
5 1
2 5
4 3
6 1
2 4 1
3 4 5
1 4 5
1 2 0

```
### 输出样例 #2

```cpp
3
3
3
1

```
