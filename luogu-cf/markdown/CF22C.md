# System Administrator

## 题意翻译

给定n个顶点，可以在这些顶点中连接m条双向边，要求连接后整个图联通，且去掉v顶点后整个图不连通

若有解，输出所连得m条边

若无解，输出-1

若多解，随意输出一个即可

Translated by 稀神探女

## 题目描述

Bob got a job as a system administrator in X corporation. His first task was to connect $ n $ servers with the help of $ m $ two-way direct connection so that it becomes possible to transmit data from one server to any other server via these connections. Each direct connection has to link two different servers, each pair of servers should have at most one direct connection. Y corporation, a business rival of X corporation, made Bob an offer that he couldn't refuse: Bob was asked to connect the servers in such a way, that when server with index $ v $ fails, the transmission of data between some other two servers becomes impossible, i.e. the system stops being connected. Help Bob connect the servers.

## 输入输出格式

### 输入格式

The first input line contains 3 space-separated integer numbers $ n $ , $ m $ , $ v $ ( $ 3<=n<=10^{5},0<=m<=10^{5},1<=v<=n $ ), $ n $ — amount of servers, $ m $ — amount of direct connections, $ v $ — index of the server that fails and leads to the failure of the whole system.

### 输出格式

If it is impossible to connect the servers in the required way, output -1. Otherwise output $ m $ lines with 2 numbers each — description of all the direct connections in the system. Each direct connection is described by two numbers — indexes of two servers, linked by this direct connection. The servers are numbered from 1. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
5 6 3

```
### 输出样例 #1

```cpp
1 2
2 3
3 4
4 5
1 3
3 5

```
### 输入样例 #2

```cpp
6 100 1

```
### 输出样例 #2

```cpp
-1

```
