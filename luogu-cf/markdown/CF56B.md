# Spoilt Permutation

## 题意翻译

给出一个长度为 $ n $ 的序列（保证序列中 $ 1-n $ 每个数有且仅出现1次），问能否恰好反转序列中的一段，使得序列变成 $ 1,2...n $ 的顺序。

输入格式：第一行读入一个整数 $ n $ ,下一行读入 $ n $ 个数字，即要处理的序列。

输出格式：若无法恰好反转序列中的一段使得序列变成 $ 1,2...n $ 的顺序，输出"0 0"，否则输出两个数"L R"，代表要反转的区间为 $ [L,R] $。

## 题目描述

Vasya collects coins: he has exactly one coin for every year from $ 1 $ to $ n $ . Naturally, Vasya keeps all the coins in his collection in the order in which they were released. Once Vasya's younger brother made a change — he took all the coins whose release year dated from $ l $ to $ r $ inclusively and put them in the reverse order. That is, he took a certain segment $ [l,r] $ and reversed it. At that the segment's endpoints did not coincide. For example, if $ n=8 $ , then initially Vasya's coins were kept in the order 1 2 3 4 5 6 7 8. If Vasya's younger brother chose the segment $ [2,6] $ , then after the reversal the coin order will change to 1 6 5 4 3 2 7 8. Vasya suspects that someone else could have spoilt the permutation after his brother. Help him to find that out. Check if the given permutation can be obtained from the permutation 1 2 ... $ n $ using exactly one segment reversal. If it is possible, find the segment itself.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=1000 $ ) which is the number of coins in Vasya's collection. The second line contains space-separated $ n $ integers which are the spoilt sequence of coins. It is guaranteed that the given sequence is a permutation, i.e. it contains only integers from $ 1 $ to $ n $ , and every number is used exactly 1 time.

### 输出格式

If it is impossible to obtain the given permutation from the original one in exactly one action, print 0 0. Otherwise, print two numbers $ l $ $ r $ ( $ 1<=l&lt;r<=n $ ) which are the endpoints of the segment that needs to be reversed to obtain from permutation 1 2 ... $ n $ the given one.

## 输入输出样例

### 输入样例 #1

```cpp
8
1 6 5 4 3 2 7 8

```
### 输出样例 #1

```cpp
2 6

```
### 输入样例 #2

```cpp
4
2 3 4 1

```
### 输出样例 #2

```cpp
0 0

```
### 输入样例 #3

```cpp
4
1 2 3 4

```
### 输出样例 #3

```cpp
0 0

```
