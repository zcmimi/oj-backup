# Martian Dollar

## 题意翻译

一天Vasya得到了接下来n天，在bourles 有火星元的交易的信息。 第i天每一火星元的市价（不管是买入还是卖出都一样）是a[i]. Vasya有b 火星元。 他可以执行至多一次买入一定数量的火星元并卖出的操作。 根据火星法律，对火星元的买卖必须以整数为单位。试问Vasya在过了n天后最多能得到多少火星元？

输入格式：

第一行两个数$n,b (1 <= n,b <= 2000)$ ，

第二行，n个数a[i] $ 1 <= a_i<= 2000$ ，含义如题

输出格式：

一行一个数，表示答案。

Translated by @Maniac丶坚果 

## 题目描述

One day Vasya got hold of information on the Martian dollar course in bourles for the next $ n $ days. The buying prices and the selling prices for one dollar on day $ i $ are the same and are equal to $ a_{i} $ . Vasya has $ b $ bourles. He can buy a certain number of dollars and then sell it no more than once in $ n $ days. According to Martian laws, one can buy only an integer number of dollars. Which maximal sum of money in bourles can Vasya get by the end of day $ n $ ?

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ b $ ( $ 1<=n,b<=2000 $ ) — the number of days and the initial number of money in bourles. The next line contains $ n $ integers $ a_{i} $ ( $ 1<=a_{i}<=2000 $ ) — the prices of Martian dollars.

### 输出格式

Print the single number — which maximal sum of money in bourles can Vasya get by the end of day $ n $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 4
3 7

```
### 输出样例 #1

```cpp
8

```
### 输入样例 #2

```cpp
4 10
4 3 2 1

```
### 输出样例 #2

```cpp
10

```
### 输入样例 #3

```cpp
4 10
4 2 3 1

```
### 输出样例 #3

```cpp
15

```
