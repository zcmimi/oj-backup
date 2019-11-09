# Road Map

## 题意翻译

给定一棵树，并给定一个根，现在要换一个根，求换根后每个点的父节点

输入：第一行 节点个数 原根 新根 第二行 除原根节点外每个节点的父节点

输出：除新根节点外每个节点的父节点

感谢 @partychicken 提供的翻译。

## 题目描述

There are $ n $ cities in Berland. Each city has its index — an integer number from $ 1 $ to $ n $ . The capital has index $ r_{1} $ . All the roads in Berland are two-way. The road system is such that there is exactly one path from the capital to each city, i.e. the road map looks like a tree. In Berland's chronicles the road map is kept in the following way: for each city $ i $ , different from the capital, there is kept number $ p_{i} $ — index of the last city on the way from the capital to $ i $ .

Once the king of Berland Berl XXXIV decided to move the capital from city $ r_{1} $ to city $ r_{2} $ . Naturally, after this the old representation of the road map in Berland's chronicles became incorrect. Please, help the king find out a new representation of the road map in the way described above.

## 输入输出格式

### 输入格式

The first line contains three space-separated integers $ n $ , $ r_{1} $ , $ r_{2} $ ( $ 2<=n<=5·10^{4},1<=r_{1}≠r_{2}<=n $ ) — amount of cities in Berland, index of the old capital and index of the new one, correspondingly.

The following line contains $ n-1 $ space-separated integers — the old representation of the road map. For each city, apart from $ r_{1} $ , there is given integer $ p_{i} $ — index of the last city on the way from the capital to city $ i $ . All the cities are described in order of increasing indexes.

### 输出格式

Output $ n-1 $ numbers — new representation of the road map in the same format.

## 输入输出样例

### 输入样例 #1

```cpp
3 2 3
2 2

```
### 输出样例 #1

```cpp
2 3 
```


### 输入样例 #2

```cpp
6 2 4
6 1 2 4 2

```
### 输出样例 #2

```cpp
6 4 1 4 2 
```


