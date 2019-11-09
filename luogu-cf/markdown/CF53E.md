# Dead Ends

## 题意翻译

## 题目描述：

Bertown的生活变得困难了起来。这个城市有太多的道路，而且政府花费了太多来维护这些道路。这里有$n$个节点和$m$条双向道路，且两两节点之间可以通过道路相互到达。现在市长想要关闭一些道路，使最后总共有$n-1$条道路留下，并且所以节点之间仍然联通。另外，市长很关心终点，也就是只有一条道路可以到达的点的数量。终点不能太多也不能太少。在讨论过这个问题之后，市长和他的助手们觉得在应该关闭的道路关闭后，应该总共有恰好$k$个终点。你的任务是求出满足以下三个条件的方案数：

1.有恰好$n-1$条道路保留下来；

2.整张道路图仍然联通；

3.最后有恰好$k$个终点在道路图上。

如果有一条道路在第一种方案中被关闭而在第二种方案中没有被关闭，那么我们认为这两种方案不同。

## 输入格式：

第一行有三个整数$n$，$m$和$k$（$3\leq n\leq10 , n-1\leq m\leq \frac {n(n-1)} {2} , 2\leq k\leq n-1$），依次代表了节点、道路和终点的数量。随后$m$行，每行包含两个不同的整数$v_1$和$v_2$（$1\leq v_1 , v_2\leq n , v_1 \not= v_2$），代表一条道路连接的两个节点。每一对节点之间最多有一条道路。节点被编号为1到$n$。保证初始的图联通。

## 输出格式：

一个整数：满足条件的方案数。

## 题目描述

Life in Bertown has become hard. The city has too many roads and the government spends too much to maintain them. There are $ n $ junctions and $ m $ two way roads, at which one can get from each junction to any other one. The mayor wants to close some roads so that the number of roads left totaled to $ n-1 $ roads and it were still possible to get from each junction to any other one. Besides, the mayor is concerned with the number of dead ends which are the junctions from which only one road goes. There shouldn't be too many or too few junctions. Having discussed the problem, the mayor and his assistants decided that after the roads are closed, the road map should contain exactly $ k $ dead ends. Your task is to count the number of different ways of closing the roads at which the following conditions are met:

- There are exactly $ n-1 $ roads left.

- It is possible to get from each junction to any other one.

- There are exactly $ k $ dead ends on the resulting map.

Two ways are considered different if there is a road that is closed in the first way, and is open in the second one.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ and $ k $ ( $ 3<=n<=10,n-1<=m<=n·(n-1)/2,2<=k<=n-1 $ ) which represent the number of junctions, roads and dead ends correspondingly. Then follow $ m $ lines each containing two different integers $ v_{1} $ and $ v_{2} $ ( $ 1<=v_{1},v_{2}<=n,v_{1}≠v_{2} $ ) which represent the number of junctions connected by another road. There can be no more than one road between every pair of junctions. The junctions are numbered with integers from $ 1 $ to $ n $ . It is guaranteed that it is possible to get from each junction to any other one along the original roads.

### 输出格式

Print a single number — the required number of ways.

## 输入输出样例

### 输入样例 #1

```cpp
3 3 2
1 2
2 3
1 3

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
4 6 2
1 2
2 3
3 4
4 1
1 3
2 4

```
### 输出样例 #2

```cpp
12

```
### 输入样例 #3

```cpp
4 6 3
1 2
2 3
3 4
4 1
1 3
2 4

```
### 输出样例 #3

```cpp
4

```
