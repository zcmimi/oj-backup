# Interesting Graph and Apples

## 题意翻译

给出n个点，m条边，问是否能通过加一些边，使得n个点构成有且仅有n条边的单个环。如果能，输出YES以及加上的边的条数，并按字典序打印加上的边的两个端点。如果有多组解，输出字典序最小的一种方法。否则输出NO即可。

## 题目描述

Hexadecimal likes drawing. She has drawn many graphs already, both directed and not. Recently she has started to work on a still-life «interesting graph and apples». An undirected graph is called interesting, if each of its vertices belongs to one cycle only — a funny ring — and does not belong to any other cycles. A funny ring is a cycle that goes through all the vertices just once. Moreover, loops are funny rings too.

She has already drawn the apples and some of the graph edges. But now it is not clear, how to connect the rest of the vertices to get an interesting graph as a result. The answer should contain the minimal amount of added edges. And furthermore, the answer should be the lexicographically smallest one. The set of edges $ (x_{1},y_{1}),(x_{2},y_{2}),...,(x_{n},y_{n}) $ , where $ x_{i}<=y_{i} $ , is lexicographically smaller than the set $ (u_{1},v_{1}),(u_{2},v_{2}),...,(u_{n},v_{n}) $ , where $ u_{i}<=v_{i} $ , provided that the sequence of integers $ x_{1},y_{1},x_{2},y_{2},...,x_{n},y_{n} $ is lexicographically smaller than the sequence $ u_{1},v_{1},u_{2},v_{2},...,u_{n},v_{n} $ . If you do not cope, Hexadecimal will eat you. ...eat you alive.

## 输入输出格式

### 输入格式

The first line of the input data contains a pair of integers $ n $ and $ m $ ( $ 1<=n<=50 $ , $ 0<=m<=2500 $ ) — the amount of vertices and edges respectively. The following lines contain pairs of numbers $ x_{i} $ and $ y_{i} $ ( $ 1<=x_{i} $ , $ y_{i}<=n $ ) — the vertices that are already connected by edges. The initial graph may contain multiple edges and loops.

### 输出格式

In the first line output «YES» or «NO»: if it is possible or not to construct an interesting graph. If the answer is «YES», in the second line output $ k $ — the amount of edges that should be added to the initial graph. Finally, output $ k $ lines: pairs of vertices $ x_{j} $ and $ y_{j} $ , between which edges should be drawn. The result may contain multiple edges and loops. $ k $ can be equal to zero.

## 输入输出样例

### 输入样例 #1

```cpp
3 2
1 2
2 3

```
### 输出样例 #1

```cpp
YES
1
1 3

```
