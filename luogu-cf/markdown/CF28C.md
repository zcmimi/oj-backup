# Bath Queue

## 题意翻译

校园里共有$n$ 个学生住着。每天早上，所有的学生都同时醒来去洗漱。共有$m$ 间洗漱室，第$i$ 个房间有$a_i$ 个水池。每个学生都会随机选择一个房间，选好房间后，每个房间的学生按照水池的数量排队，使得最长队伍的长度最短。请问最长队伍的长度应该是多少？

输入输出格式

输入格式：

第一行保含两个整数，学生总数n和房间总数$m(1\leq n,m\leq50)$ 。第二行包含m个整数$a_1,a_2,a_3,...,a_m(1<=a_i<=50)$ 。$a_i$ 代表第$n$ 个房间的水池数量。

输出格式：

输出一个整数最长队伍的长度，误差不大于$10^9$ 。

Translated by @handahao 

## 题目描述

There are $ n $ students living in the campus. Every morning all students wake up at the same time and go to wash. There are $ m $ rooms with wash basins. The $ i $ -th of these rooms contains $ a_{i} $ wash basins. Every student independently select one the rooms with equal probability and goes to it. After all students selected their rooms, students in each room divide into queues by the number of wash basins so that the size of the largest queue is the least possible. Calculate the expected value of the size of the largest queue among all rooms.

## 输入输出格式

### 输入格式

The first line contains two positive integers $ n $ and $ m $ ( $ 1<=n,m<=50 $ ) — the amount of students and the amount of rooms. The second line contains $ m $ integers $ a_{1},a_{2},...\ ,a_{m} $ ( $ 1<=a_{i}<=50 $ ). $ a_{i} $ means the amount of wash basins in the $ i $ -th room.

### 输出格式

Output single number: the expected value of the size of the largest queue. Your answer must have an absolute or relative error less than $ 10^{-9} $ .

## 输入输出样例

### 输入样例 #1

```cpp
1 1
2

```
### 输出样例 #1

```cpp
1.00000000000000000000

```
### 输入样例 #2

```cpp
2 2
1 1

```
### 输出样例 #2

```cpp
1.50000000000000000000

```
### 输入样例 #3

```cpp
2 3
1 1 1

```
### 输出样例 #3

```cpp
1.33333333333333350000

```
### 输入样例 #4

```cpp
7 5
1 1 2 3 1

```
### 输出样例 #4

```cpp
2.50216960000000070000

```
