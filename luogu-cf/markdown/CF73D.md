# FreeDiv

## 题意翻译

有n个顶点m条边，每个顶点只能连接1个无需花费的边，无数个代价唯1的边，每个连通分量只能连接k个无需花费的边，无数个代价唯1的边。ps：已给定的边除外

### 输入

nmk

每条边的两个顶点

### 输出

最小的花费

## 题目描述

Vasya plays FreeDiv. In this game he manages a huge state, which has $ n $ cities and $ m $ two-way roads between them. Unfortunately, not from every city you can reach any other one moving along these roads. Therefore Vasya decided to divide the state into provinces so that in every province, one could reach from every city all the cities of the province, but there are no roads between provinces.

Unlike other turn-based strategies, in FreeDiv a player has the opportunity to build tunnels between cities. The tunnels are two-way roads along which one can move armies undetected by the enemy. However, no more than one tunnel can be connected to each city. As for Vasya, he wants to build a network of tunnels so that any pair of cities in his state were reachable by some path consisting of roads and a tunnels. But at that no more than $ k $ tunnels are connected to each province (otherwise, the province will be difficult to keep in case other provinces are captured by enemy armies).

Vasya discovered that maybe he will not be able to build such a network for the current condition of the state. Maybe he'll have first to build several roads between cities in different provinces to merge the provinces. Your task is to determine the minimum number of roads Vasya needs to build so that it was possible to build the required network of tunnels in the resulting state.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ and $ k $ ( $ 1<=n,k<=10^{6},0<=m<=10^{6} $ ). Each of the next $ m $ lines contains two integers. They are the numbers of cities connected by a corresponding road. No road connects city to itself and there is at most one road between each pair of cities.

### 输出格式

Print a single number, the minimum number of additional roads.

## 输入输出样例

### 输入样例 #1

```cpp
3 3 2
1 2
2 3
3 1

```
### 输出样例 #1

```cpp
0
```


### 输入样例 #2

```cpp
4 2 2
1 2
3 4

```
### 输出样例 #2

```cpp
0
```


### 输入样例 #3

```cpp
4 0 2

```
### 输出样例 #3

```cpp
1
```


## 说明

In the first example only one province exists, so it is not necessary to build any tunnels or roads.

In the second example two provinces exist. It is possible to merge the provinces by building a tunnel between cities 1 and 3.

In the third example at least one additional road is necessary. For example it is possible to build additional road between cities 1 and 2 and build two tunnels between cities 1 and 3, 2 and 4 after that.

