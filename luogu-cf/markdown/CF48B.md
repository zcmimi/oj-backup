# Land Lot

## 题意翻译

在一个大小为$n×m$的长方形地上有一些树，每棵占据$1×1$的大小。

现在要在地上建一个大小为$a×b$的房子（坐标均为整数），在这个范围内的树都会被砍掉。请求出最少的要砍伐的树的数量。

## 题目描述

Vasya has a beautiful garden where wonderful fruit trees grow and yield fantastic harvest every year. But lately thieves started to sneak into the garden at nights and steal the fruit too often. Vasya can’t spend the nights in the garden and guard the fruit because there’s no house in the garden! Vasya had been saving in for some time and finally he decided to build the house. The rest is simple: he should choose in which part of the garden to build the house. In the evening he sat at his table and drew the garden’s plan. On the plan the garden is represented as a rectangular checkered field $ n×m $ in size divided into squares whose side length is 1. In some squares Vasya marked the trees growing there (one shouldn’t plant the trees too close to each other that’s why one square contains no more than one tree). Vasya wants to find a rectangular land lot $ a×b $ squares in size to build a house on, at that the land lot border should go along the lines of the grid that separates the squares. All the trees that grow on the building lot will have to be chopped off. Vasya loves his garden very much, so help him choose the building land lot location so that the number of chopped trees would be as little as possible.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 1<=n,m<=50 $ ) which represent the garden location. The next $ n $ lines contain $ m $ numbers 0 or 1, which describe the garden on the scheme. The zero means that a tree doesn’t grow on this square and the 1 means that there is a growing tree. The last line contains two integers $ a $ and $ b $ ( $ 1<=a,b<=50 $ ). Note that Vasya can choose for building an $ a×b $ rectangle as well a $ b×a $ one, i.e. the side of the lot with the length of $ a $ can be located as parallel to the garden side with the length of $ n $ , as well as parallel to the garden side with the length of $ m $ .

### 输出格式

Print the minimum number of trees that needs to be chopped off to select a land lot $ a×b $ in size to build a house on. It is guaranteed that at least one lot location can always be found, i. e. either $ a<=n $ and $ b<=m $ , or $ a<=m $ и $ b<=n $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 2
1 0
1 1
1 1

```
### 输出样例 #1

```cpp
0

```
### 输入样例 #2

```cpp
4 5
0 0 1 0 1
0 1 1 1 0
1 0 1 0 1
1 1 1 1 1
2 3

```
### 输出样例 #2

```cpp
2

```
## 说明

In the second example the upper left square is (1,1) and the lower right is (3,2).

