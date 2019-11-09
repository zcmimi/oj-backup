# Tree

## 题意翻译

题目描述

Bob最近用一棵树发明了一个新游戏（一棵树是一个无环图）。他删除（也可以不删除）树的任意边，并计算删除后剩下各连通分量中节点个数的乘积。你的任务是

找出Bob在一个给定树的游戏中能得到的最大分值。

输入格式

第一行为节点个数n(1<=n<=700)。接下来n-1行描述了树的边ai bi，代表ai到bi有一条边。数据保证输入的是一棵树。

输出格式

输出Bob在这棵树上能得到的最大分值。

## 题目描述

Recently Bob invented a new game with a tree (we should remind you, that a tree is a connected graph without cycles): he deletes any (possibly, zero) amount of edges of the tree, and counts the product of sizes of the connected components left after the deletion. Your task is to find out the maximum number that Bob can get in his new game for a given tree.

## 输入输出格式

### 输入格式

The first input line contains integer number $ n $ ( $ 1<=n<=700 $ ) — amount of vertices in the tree. The following $ n-1 $ lines contain the description of the edges. Each line contains the pair of vertices' indexes, joined by an edge, $ a_{i} $ , $ b_{i} $ ( $ 1<=a_{i},b_{i}<=n $ ). It's guaranteed that the graph described in the input is a tree.

### 输出格式

Output the only number — the maximum product of sizes of the connected components, that Bob can get after deleting some of the tree's edges.

## 输入输出样例

### 输入样例 #1

```cpp
5
1 2
2 3
3 4
4 5

```
### 输出样例 #1

```cpp
6
```


### 输入样例 #2

```cpp
8
1 2
1 3
2 4
2 5
3 6
3 7
6 8

```
### 输出样例 #2

```cpp
18
```


### 输入样例 #3

```cpp
3
1 2
1 3

```
### 输出样例 #3

```cpp
3
```


