# Parquet

## 题意翻译

题目描述:给定一规模为n*m的矩阵，假定你有1x2的木板a块，2x1的木板b块，2x2的木板c块，试问你能不能用这些木板铺满整个矩阵

注意:木板不能旋转，不能重叠，不一定要用完

输入:一行五个非负整数n,m,a,b,c

输出:若无合法方案，则输出"IMPOSSIBLE",否则随便输出一种合法方案，同一块木板用同种字母表示，相邻的木板不能都用同一种字母。

Translated by 稀神探女

## 题目描述

Once Bob decided to lay a parquet floor in his living room. The living room is of size $ n×m $ metres. Bob had planks of three types: $ a $ planks $ 1×2 $ meters, $ b $ planks $ 2×1 $ meters, and $ c $ planks $ 2×2 $ meters. Help Bob find out, if it is possible to parquet the living room with such a set of planks, and if it is possible, find one of the possible ways to do so. Bob doesn't have to use all the planks.

## 输入输出格式

### 输入格式

The first input line contains 5 space-separated integer numbers $ n $ , $ m $ , $ a $ , $ b $ , $ c $ ( $ 1<=n,m<=100,0<=a,b,c<=10^{4} $ ), $ n $ and $ m $ — the living room dimensions, $ a $ , $ b $ and $ c $ — amount of planks $ 1×2 $ , $ 2×1 $ и $ 2×2 $ respectively. It's not allowed to turn the planks.

### 输出格式

If it is not possible to parquet the room with such a set of planks, output IMPOSSIBLE. Otherwise output one of the possible ways to parquet the room — output $ n $ lines with $ m $ lower-case Latin letters each. Two squares with common sides should contain the same letters, if they belong to one and the same plank, and different letters otherwise. Different planks can be marked with one and the same letter (see examples). If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2 6 2 2 1

```
### 输出样例 #1

```cpp
aabcca
aabdda

```
### 输入样例 #2

```cpp
1 1 100 100 100

```
### 输出样例 #2

```cpp
IMPOSSIBLE

```
### 输入样例 #3

```cpp
4 4 10 10 10

```
### 输出样例 #3

```cpp
aabb
aabb
bbaa
bbaa

```
