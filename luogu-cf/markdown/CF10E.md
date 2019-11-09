# Greedy Change

## 题意翻译

给定n种货币，每种货币数量无限。 现在要求以最少的货币数目表示一个数S。 一种方法当然是DP求一个最优解了， 当然正 常人的做法是贪心：每次取最大的不超过当前待表示数的货币。 现在，你的任务是证明正常人的表示法不一定最优：找到最小的S，使得正常人的表示法 比理论最优解差，或说明这样的S不存在。

输入格式

第一行包含一个整数n(1≤n≤400)。第二行包含n个整数ai(1 ≤ai≤109)为每个硬币面值。保证a1>a2>an>并且an=1

输出格式

如果贪心能以最优的方式求出所以和，输出-1。否则以非最优方式输出贪婪算法收集的最小和。

Translated by @liyifeng

## 题目描述

Billy investigates the question of applying greedy algorithm to different spheres of life. At the moment he is studying the application of greedy algorithm to the problem about change. There is an amount of $ n $ coins of different face values, and the coins of each value are not limited in number. The task is to collect the sum $ x $ with the minimum amount of coins. Greedy algorithm with each its step takes the coin of the highest face value, not exceeding $ x $ . Obviously, if among the coins' face values exists the face value 1, any sum $ x $ can be collected with the help of greedy algorithm. However, greedy algorithm does not always give the optimal representation of the sum, i.e. the representation with the minimum amount of coins. For example, if there are face values $ {1,3,4} $ and it is asked to collect the sum $ 6 $ , greedy algorithm will represent the sum as $ 4+1+1 $ , while the optimal representation is $ 3+3 $ , containing one coin less. By the given set of face values find out if there exist such a sum $ x $ that greedy algorithm will collect in a non-optimal way. If such a sum exists, find out the smallest of these sums.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=400 $ ) — the amount of the coins' face values. The second line contains $ n $ integers $ a_{i} $ ( $ 1<=a_{i}a_{2}>...>a_{n} $ and $ a_{n}=1 $ .

### 输出格式

If greedy algorithm collects any sum in an optimal way, output -1. Otherwise output the smallest sum that greedy algorithm collects in a non-optimal way.

## 输入输出样例

### 输入样例 #1

```cpp
5
25 10 5 2 1

```
### 输出样例 #1

```cpp
-1

```
### 输入样例 #2

```cpp
3
4 3 1

```
### 输出样例 #2

```cpp
6

```
