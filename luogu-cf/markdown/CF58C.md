# Trees

## 题意翻译

称一个序列是美丽的当且仅当：

1. 它是回文的。

2. 它的左边一半是连续递增的正整数。

如12321、1221都是美丽的，而1231、1331都不是美丽的。

给定一个长为$n$ 的序列，问至少修改几个数可以使它变成美丽的。

Translated by @_rqy

## 题目描述

On Bertown's main street $ n $ trees are growing, the tree number $ i $ has the height of $ a_{i} $ meters ( $ 1<=i<=n $ ). By the arrival of the President of Berland these trees were decided to be changed so that their heights formed a beautiful sequence. This means that the heights of trees on ends (the $ 1 $ st one and the $ n $ -th one) should be equal to each other, the heights of the $ 2 $ -nd and the $ (n-1) $ -th tree must also be equal to each other, at that the height of the $ 2 $ -nd tree should be larger than the height of the first tree by $ 1 $ , and so on. In other words, the heights of the trees, standing at equal distance from the edge (of one end of the sequence) must be equal to each other, and with the increasing of the distance from the edge by $ 1 $ the tree height must also increase by $ 1 $ . For example, the sequences "2 3 4 5 5 4 3 2" and "1 2 3 2 1" are beautiful, and '1 3 3 1" and "1 2 3 1" are not.

Changing the height of a tree is a very expensive operation, using advanced technologies invented by Berland scientists. In one operation you can choose any tree and change its height to any number, either increase or decrease. Note that even after the change the height should remain a positive integer, i. e, it can't be less than or equal to zero. Identify the smallest number of changes of the trees' height needed for the sequence of their heights to become beautiful.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=10^{5} $ ) which is the number of trees. The second line contains integers $ a_{i} $ ( $ 1<=a_{i}<=10^{5} $ ) which are the heights of the trees.

### 输出格式

Print a single number which is the minimal number of trees whose heights will have to be changed for the sequence to become beautiful.

## 输入输出样例

### 输入样例 #1

```cpp
3
2 2 2

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
4
1 2 2 1

```
### 输出样例 #2

```cpp
0

```
