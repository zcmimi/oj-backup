# Ant on the Tree

## 题意翻译

无环连通无向图称为树。树是一类图，不仅对于人很有趣，而且对蚂蚁也很有趣。

蚂蚁站在树根处。他发现树中有N个顶点，它们由n-1条边连接，因此在任何一对节点之间都有一条路径。叶节点与根节点不同，它只与另一个节点相连。

蚂蚁想要访问树中的每个节点并返回到根，每条边都要经过两次。此外，他想以特定的顺序访问节点。你要找到蚂蚁的可能路线。

输入：

第一行包含整数N（3<=N<=300）代表树中的顶点数量。接下来的N-1行描述边。每个边用两个整数来描述，即它连接的顶点的编号。均为无向边。顶点从1开始编号，1是根节点。最后一行包含k整数，其中k是树中叶子的数量。这些数字描述了叶节点应该被访问的顺序。保证每个叶节点只出现一次。

输出：

如果所需的路径不存在，输出-1。否则，输出2N-1个数字，描述路径。每次蚂蚁到达一个节点时，输出它的编号。

------------

简化：给一棵树，根节点为1，要求以特定顺序遍历这棵树的叶子节点，并顺序输出到达的每一个节点。如果做不到，输出-1

## 题目描述

Connected undirected graph without cycles is called a tree. Trees is a class of graphs which is interesting not only for people, but for ants too.

An ant stands at the root of some tree. He sees that there are $ n $ vertexes in the tree, and they are connected by $ n-1 $ edges so that there is a path between any pair of vertexes. A leaf is a distinct from root vertex, which is connected with exactly one other vertex.

The ant wants to visit every vertex in the tree and return to the root, passing every edge twice. In addition, he wants to visit the leaves in a specific order. You are to find some possible route of the ant.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 3<=n<=300 $ ) — amount of vertexes in the tree. Next $ n-1 $ lines describe edges. Each edge is described with two integers — indexes of vertexes which it connects. Each edge can be passed in any direction. Vertexes are numbered starting from $ 1 $ . The root of the tree has number $ 1 $ . The last line contains $ k $ integers, where $ k $ is amount of leaves in the tree. These numbers describe the order in which the leaves should be visited. It is guaranteed that each leaf appears in this order exactly once.

### 输出格式

If the required route doesn't exist, output -1. Otherwise, output $ 2n-1 $ numbers, describing the route. Every time the ant comes to a vertex, output it's index.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2
2 3
3

```
### 输出样例 #1

```cpp
1 2 3 2 1 
```


### 输入样例 #2

```cpp
6
1 2
1 3
2 4
4 5
4 6
5 6 3

```
### 输出样例 #2

```cpp
1 2 4 5 4 6 4 2 1 3 1 
```


### 输入样例 #3

```cpp
6
1 2
1 3
2 4
4 5
4 6
5 3 6

```
### 输出样例 #3

```cpp
-1

```
