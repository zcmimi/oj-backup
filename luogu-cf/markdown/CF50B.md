# Choosing Symbol Pairs

## 题意翻译

输入一个字符串，判断有多少对是相同的。包括自己和自己这一对。注意 $(x,y)$ 和 $(y,x)$ 是不相同的一对。

感谢@frankchenfu 提供的翻译

## 题目描述

There is a given string $ S $ consisting of $ N $ symbols. Your task is to find the number of ordered pairs of integers $ i $ and $ j $ such that

1\. $ 1<=i,j<=N $

2\. $ S[i]=S[j] $ , that is the $ i $ -th symbol of string $ S $ is equal to the $ j $ -th.

## 输入输出格式

### 输入格式

The single input line contains $ S $ , consisting of lowercase Latin letters and digits. It is guaranteed that string $ S $ in not empty and its length does not exceed $ 10^{5} $ .

### 输出格式

Print a single number which represents the number of pairs $ i $ and $ j $ with the needed property. Pairs $ (x,y) $ and $ (y,x) $ should be considered different, i.e. the ordered pairs count.

## 输入输出样例

### 输入样例 #1

```cpp
great10

```
### 输出样例 #1

```cpp
7

```
### 输入样例 #2

```cpp
aaaaaaaaaa

```
### 输出样例 #2

```cpp
100

```
