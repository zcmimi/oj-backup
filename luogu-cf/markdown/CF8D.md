# Two Friends

## 题意翻译

平面上有3个点：A，B，C.(a cinema, a shop and the house) 现在Alice和Bob都在A，Alice想要走到B，走的路线长度减去最短路线长度不得超过t1，Bob想经过C然后到B， 走的路径长减去最短路径长不超过t2。 要求设计他们的路线，使得从A开始的公共部分尽可能长（也就是一旦两人分开，即使重 新会合也不计入公共部分的长度了）

输入格式:

第一行t1和t2(空格隔开),第二行是A,B,C(空格隔开)。

输出格式：

输出最长距离，保留至少四位小数。

Translated by @liyifeng

## 题目描述

Two neighbours, Alan and Bob, live in the city, where there are three buildings only: a cinema, a shop and the house, where they live. The rest is a big asphalt square.

Once they went to the cinema, and the film impressed them so deeply, that when they left the cinema, they did not want to stop discussing it.

Bob wants to get home, but Alan has to go to the shop first, and only then go home. So, they agreed to cover some distance together discussing the film (their common path might pass through the shop, or they might walk circles around the cinema together), and then to part each other's company and go each his own way. After they part, they will start thinking about their daily pursuits; and even if they meet again, they won't be able to go on with the discussion. Thus, Bob's path will be a continuous curve, having the cinema and the house as its ends. Alan's path — a continuous curve, going through the shop, and having the cinema and the house as its ends.

The film ended late, that's why the whole distance covered by Alan should not differ from the shortest one by more than $ t_{1} $ , and the distance covered by Bob should not differ from the shortest one by more than $ t_{2} $ .

Find the maximum distance that Alan and Bob will cover together, discussing the film.

## 输入输出格式

### 输入格式

The first line contains two integers: $ t_{1},t_{2} $ ( $ 0<=t_{1},t_{2}<=100 $ ). The second line contains the cinema's coordinates, the third one — the house's, and the last line — the shop's.

All the coordinates are given in meters, are integer, and do not exceed 100 in absolute magnitude. No two given places are in the same building.

### 输出格式

In the only line output one number — the maximum distance that Alan and Bob will cover together, discussing the film. Output the answer accurate to not less than 4 decimal places.

## 输入输出样例

### 输入样例 #1

```cpp
0 2
0 0
4 0
-3 0

```
### 输出样例 #1

```cpp
1.0000000000

```
### 输入样例 #2

```cpp
0 0
0 0
2 0
1 0

```
### 输出样例 #2

```cpp
2.0000000000

```
