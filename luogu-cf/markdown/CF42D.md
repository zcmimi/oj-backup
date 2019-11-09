# Strange town

## 题意翻译

# 题目描述

Volodya最近到了一个很奇怪的小镇。这个小镇里有N个景点，并且每两个景点之间都有一条双向边连接。每条边都有一定的旅行费用（保证为自然数），保证每条路的费用都不同。但是最令人吃~~鸡~~惊的是每条遍历这个小镇里所有景点的路线都有相同的总费用！也就是说，任意一条包括所有景点的成环路线，它的总费用与这条路线无关。Volodya想要学OI的你编写一个程序来帮助他找出是否能够构建一张双向联通图符合上述要求且所有道路的旅行费用都不超过1000。

# 输入输出格式

## 输入格式：

输入一个自然数N(3<=N<=20)，表示小镇的景点数。

## 输出格式：

输出N行每行包含N个正整数，表示这张双向联通图的费用邻接矩阵。（第i行的第j个数表示第i个景点和第j个景点之间的道路费用）邻接矩阵对角线上的数应为0。所有费用的值都应该不大于1000。所有的费用的值都应该为正整数且两两互不相同。如果有多张图符合要求，随便输出一张你喜欢的就好。

由 @姜澜 提供翻译

## 题目描述

Volodya has recently visited a very odd town. There are $ N $ tourist attractions in the town and every two of them are connected by a bidirectional road. Each road has some travel price (natural number) assigned to it and all prices are distinct. But the most striking thing about this town is that each city sightseeing tour has the same total price! That is, if we choose any city sightseeing tour — a cycle which visits every attraction exactly once — the sum of the costs of the tour roads is independent of the tour. Volodya is curious if you can find such price system with all road prices not greater than 1000.

## 输入输出格式

### 输入格式

Input contains just one natural number ( $ 3<=N<=20 $ ) — the number of town attractions.

### 输出格式

Output should contain $ N $ rows containing $ N $ positive integer numbers each — the adjacency matrix of the prices graph (thus, $ j $ -th number in $ i $ -th row should be equal to the price of the road between the $ j $ -th and the $ i $ -th attraction). Diagonal numbers should be equal to zero. All numbers should not be greater than 1000. All prices should be positive and pairwise distinct. If there are several solutions, output any of them.

## 输入输出样例

### 输入样例 #1

```cpp
3

```
### 输出样例 #1

```cpp
0 3 4 
3 0 5 
4 5 0 

```
