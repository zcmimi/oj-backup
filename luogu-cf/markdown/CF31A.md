# Worms Evolution

## 题意翻译

题目描述

Vasechkin教授正在研究蠕虫的进化。最近他提出一种假说——所有蠕虫都是通过分裂而来。这里有n种形态不同的蠕虫。这些蠕虫有以下长度$a_1,a_2,\ldots,a_n$

为了证明他的理论，教授需要找到3种形态不同的蠕虫，其中第一个的长度是另外两个的和。帮助他完成这个吧。

输入格式：

第一行包含一个整数n（$3\leq n\leq100$）——蠕虫的数量。第二行包含n个被空格分开的整数$a_i$​（$1\leq a_i\leq1000$）——每种形态蠕虫的长度

输出格式：

输出3个不同的整数i,j,k（$1\leq i,j,k\leq n$）——满足这样条件的蠕虫的索引（索引？译者注：我真不知道这里怎么翻译好，这里就是指a的下标）

表示有$a_i=a_j+a_k$​。如果不存在这样的三元组，输出-1。如果有多种解，输出它们中的任意一种。可以是$a_j=a_k$

Translated by Khassar

## 题目描述

Professor Vasechkin is studying evolution of worms. Recently he put forward hypotheses that all worms evolve by division. There are $ n $ forms of worms. Worms of these forms have lengths $ a_{1} $ , $ a_{2} $ , ..., $ a_{n} $ . To prove his theory, professor needs to find 3 different forms that the length of the first form is equal to sum of lengths of the other two forms. Help him to do this.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 3<=n<=100 $ ) — amount of worm's forms. The second line contains $ n $ space-separated integers $ a_{i} $ ( $ 1<=a_{i}<=1000 $ ) — lengths of worms of each form.

### 输出格式

Output 3 distinct integers $ i $ $ j $ $ k $ ( $ 1<=i,j,k<=n $ ) — such indexes of worm's forms that $ a_{i}=a_{j}+a_{k} $ . If there is no such triple, output -1. If there are several solutions, output any of them. It possible that $ a_{j}=a_{k} $ .

## 输入输出样例

### 输入样例 #1

```cpp
5
1 2 3 5 7

```
### 输出样例 #1

```cpp
3 2 1

```
### 输入样例 #2

```cpp
5
1 8 1 5 1

```
### 输出样例 #2

```cpp
-1

```
