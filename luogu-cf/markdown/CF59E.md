# Shortest Path

## 题意翻译

在Ancient Berland有$n$ 座城市和$m$ 条长度相同的双向道路。城市从$1$ 到$n$ 编号。根据一个古老的迷信说法，如果一个旅行者连续访问了$a_i$ 、$b_i$ 、$c_i$ 三座城市而不去拜访其他城市，来自东方的神秘力量将使他遭受巨大的灾害。传说中一共有$k$ 组这样的城市，每个三元组都是有序的，这意味着你可以按照$a_i$ 、$c_i$ 、$b_i$ 这样的方式来访问一组城市而不遭受灾害。Vasya想要从城市$1$ 走到城市$n$ 并且不受到诅咒。请告诉他最短路的长度，并输出一条路线。

### 输入格式

第1行$3$ 个整数$n$ ，$m$ ，$k$ ，表示城市数、路径数以及三元组数量。

接下来$m$ 行，每行$2$ 个整数$x_i$ ，$y_i$ ，表示存在一条连接xi与yi的路。

接下来k行，每行3个整数$a_i$ 、$b_i$ 、$c_i$ ，表示一个诅咒三元组。

可能从$1$ 号城市出发并不能到达$n$ 号城市。

###输出格式

无解输出$-1$ 。

否则第1行输出最短路长度$d$ ，第2行输出$d+1$ 个数，表示一条可行最短路径。

翻译贡献者UID：35718

## 题目描述

In Ancient Berland there were $ n $ cities and $ m $ two-way roads of equal length. The cities are numbered with integers from $ 1 $ to $ n $ inclusively. According to an ancient superstition, if a traveller visits three cities $ a_{i} $ , $ b_{i} $ , $ c_{i} $ in row, without visiting other cities between them, a great disaster awaits him. Overall there are $ k $ such city triplets. Each triplet is ordered, which means that, for example, you are allowed to visit the cities in the following order: $ a_{i} $ , $ c_{i} $ , $ b_{i} $ . Vasya wants to get from the city $ 1 $ to the city $ n $ and not fulfil the superstition. Find out which minimal number of roads he should take. Also you are required to find one of his possible path routes.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ , $ k $ ( $ 2<=n<=3000,1<=m<=20000,0<=k<=10^{5} $ ) which are the number of cities, the number of roads and the number of the forbidden triplets correspondingly.

Then follow $ m $ lines each containing two integers $ x_{i} $ , $ y_{i} $ ( $ 1<=x_{i},y_{i}<=n $ ) which are the road descriptions. The road is described by the numbers of the cities it joins. No road joins a city with itself, there cannot be more than one road between a pair of cities.

Then follow $ k $ lines each containing three integers $ a_{i} $ , $ b_{i} $ , $ c_{i} $ ( $ 1<=a_{i},b_{i},c_{i}<=n $ ) which are the forbidden triplets. Each ordered triplet is listed mo more than one time. All three cities in each triplet are distinct.

City $ n $ can be unreachable from city $ 1 $ by roads.

### 输出格式

If there are no path from $ 1 $ to $ n $ print -1. Otherwise on the first line print the number of roads $ d $ along the shortest path from the city $ 1 $ to the city $ n $ . On the second line print $ d+1 $ numbers — any of the possible shortest paths for Vasya. The path should start in the city $ 1 $ and end in the city $ n $ .

## 输入输出样例

### 输入样例 #1

```cpp
4 4 1
1 2
2 3
3 4
1 3
1 4 3

```
### 输出样例 #1

```cpp
2
1 3 4

```
### 输入样例 #2

```cpp
3 1 0
1 2

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
4 4 2
1 2
2 3
3 4
1 3
1 2 3
1 3 4

```
### 输出样例 #3

```cpp
4
1 3 2 3 4

```
