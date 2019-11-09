# Half-decay tree

## 题意翻译

## 题意

定义一个完全二叉树树高为根节点到叶子节点经过的边数。

给定一个树高为 $h(1 \le h \le 30)$ 的完全二叉树，其中第 $x$ 个节点的左儿子为第 $2x$ 个节点，右儿子为第 $2x+1$ 个节点。

现在有 $q(1 \le q \le 10^{5})$ 个，分为两种操作：

1. `add v e` （ $1 \le v \le 2^{h+1}-1,1 \le e \le 10^4$ ）表示给第 $v$ 个节点的权值加 $e$

2. `decay` 操作。我们在这个二叉树里面以等概率选择一个叶子节点，将这个叶子节点到根的路径上所有的边都删去。在删除后，树会形成若干个联通块，我们定义某个联通块的的权值为这个联通块内所有节点的权值之和。我们定义删除后的树的权值为形成的所有联通块的权值的最大值。请你求出树的权值的期望。**每次删除后会恢复所有删除的边。**

## 题目描述

Recently Petya has become keen on physics. Anna V., his teacher noticed Petya's interest and gave him a fascinating physical puzzle — a half-decay tree.

A half-decay tree is a complete binary tree with the height $ h $ . The height of a tree is the length of the path (in edges) from the root to a leaf in the tree. While studying the tree Petya can add electrons to vertices or induce random decay with synchrophasotron. Random decay is a process during which the edges of some path from the root to the random leaf of the tree are deleted. All the leaves are equiprobable. As the half-decay tree is the school property, Petya will return back the deleted edges into the tree after each decay.

After being desintegrated, the tree decomposes into connected components. Charge of each component is the total quantity of electrons placed in vertices of the component. Potential of desintegerated tree is the maximum from the charges of its connected components. Each time before inducing random decay Petya is curious about the mathematical expectation of potential of the tree after being desintegrated.

## 输入输出格式

### 输入格式

First line will contain two integers $ h $ and $ q $ ( $ 1<=h<=30,1<=q<=10^{5} $ ). Next $ q $ lines will contain a query of one of two types:

- add $ v $ $ e $ Petya adds $ e $ electrons to vertex number $ v $ ( $ 1<=v<=2^{h+1}-1,0<=e<=10^{4} $ ). $ v $ and $ e $ are integers.

The vertices of the tree are numbered in the following way: the root is numbered with 1, the children of the vertex with number $ x $ are numbered with $ 2x $ and $ 2x+1 $ .

- decayPetya induces tree decay.

### 输出格式

For each query decay solution you should output the mathematical expectation of potential of the tree after being desintegrated. The absolute or relative error in the answer should not exceed $ 10^{-4} $ .

## 输入输出样例

### 输入样例 #1

```cpp
1 4
add 1 3
add 2 10
add 3 11
decay

```
### 输出样例 #1

```cpp
13.50000000

```
