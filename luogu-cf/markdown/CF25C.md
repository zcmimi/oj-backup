# Roads in Berland

## 题意翻译

有一个国家，有$n$ 个城市，编号为$1$ ~$n$ ，任意两个城市之间要么没有道路，要么有一条双向的道路连接。每一条道路都有一个长度——长度是一个为$1$ ~$1000$ 之间的整数。

现在我们知道了任意两个城市之间的最短路径，但这可能有点长。现在国家决定再次建造$k$ 条道路（也是双向的），但国家想知道在新增一条道路后所有最短路径的总长度，但缺少人手。于是，在这个时刻，国家想到了擅长OI的你，请你帮助他们完成这个任务。

# 输入输出格式

### 输入格式

第一行，一个正整数$n(2<=n<=300)$ ——这个国家内城市的个数。

接下来有一个$n\times n$ 的矩阵，第$i$ 行，第$j$ 列描述一个整数$d_{i,j}$ ，描述了第$i$ 个城市到第$j$ 个城市的最短路径。当然$d_{i,i}=0,d_{i,j}=d_{j,i}(1<=d_{i,j}<=1000)$ 。

后面的一行有一个正整数$k(1<=k<=300)$ ——准备建造的道路个数。紧跟着$k$ 行，每行表示一条准备建造的道路，描述这个道路的是$a_i,b_i,c_i(1<=a_i,b_i<=n,a_i\neq b_i,1<=c_i<=1000)$ ，$a_i$ 和$b_i$ ，表示这是一条连接$a_i,b_i$ 的道路，$c_i$ 表示这一条道路的长度。

### 输出格式

输出$k$ 个用空格分开的整数$q_i(1<=i<=k)$ ，$q_i$ 应该为当前所有城市之间最短路的和，**每两个城市之间的道路只能计算一次。**

感谢@2016wudi 提供的翻译

## 题目描述

There are $ n $ cities numbered from 1 to $ n $ in Berland. Some of them are connected by two-way roads. Each road has its own length — an integer number from 1 to 1000. It is known that from each city it is possible to get to any other city by existing roads. Also for each pair of cities it is known the shortest distance between them. Berland Government plans to build $ k $ new roads. For each of the planned road it is known its length, and what cities it will connect. To control the correctness of the construction of new roads, after the opening of another road Berland government wants to check the sum of the shortest distances between all pairs of cities. Help them — for a given matrix of shortest distances on the old roads and plans of all new roads, find out how the sum of the shortest distances between all pairs of cities changes after construction of each road.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 2<=n<=300 $ ) — amount of cities in Berland. Then there follow $ n $ lines with $ n $ integer numbers each — the matrix of shortest distances. $ j $ -th integer in the $ i $ -th row — $ d_{i,j} $ , the shortest distance between cities $ i $ and $ j $ . It is guaranteed that $ d_{i,i}=0,d_{i,j}=d_{j,i} $ , and a given matrix is a matrix of shortest distances for some set of two-way roads with integer lengths from 1 to 1000, such that from each city it is possible to get to any other city using these roads.

Next line contains integer $ k $ ( $ 1<=k<=300 $ ) — amount of planned roads. Following $ k $ lines contain the description of the planned roads. Each road is described by three space-separated integers $ a_{i} $ , $ b_{i} $ , $ c_{i} $ ( $ 1<=a_{i},b_{i}<=n,a_{i}≠b_{i},1<=c_{i}<=1000 $ ) — $ a_{i} $ and $ b_{i} $ — pair of cities, which the road connects, $ c_{i} $ — the length of the road. It can be several roads between a pair of cities, but no road connects the city with itself.

### 输出格式

Output $ k $ space-separated integers $ q_{i} $ ( $ 1<=i<=k $ ). $ q_{i} $ should be equal to the sum of shortest distances between all pairs of cities after the construction of roads with indexes from 1 to $ i $ . Roads are numbered from 1 in the input order. Each pair of cities should be taken into account in the sum exactly once, i. e. we count unordered pairs.

## 输入输出样例

### 输入样例 #1

```cpp
2
0 5
5 0
1
1 2 3

```
### 输出样例 #1

```cpp
3 
```


### 输入样例 #2

```cpp
3
0 4 5
4 0 9
5 9 0
2
2 3 8
1 2 1

```
### 输出样例 #2

```cpp
17 12 
```


