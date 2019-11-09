# Coins

## 题意翻译

输入n(1<=n<=10^6)，按递减顺序输出小于n的数，且n要能被输出的数整除。

尽最大可能让输出的数的数量多。

如果有多种方案输出的数的数量相等，输出任意一种方案。

Translated by @萝莉大法好

## 题目描述

In Berland a money reform is being prepared. New coins are being introduced. After long economic calculations was decided that the most expensive coin should possess the denomination of exactly $ n $ Berland dollars. Also the following restriction has been introduced for comfort: the denomination of each coin should be divisible by the denomination of any cheaper coin. It is known that among all the possible variants the variant with the largest number of new coins will be chosen. Find this variant. Print in the order of decreasing of the coins' denominations.

## 输入输出格式

### 输入格式

The first and only line contains an integer $ n $ ( $ 1<=n<=10^{6} $ ) which represents the denomination of the most expensive coin.

### 输出格式

Print the denominations of all the coins in the order of decreasing. The number of coins must be the largest possible (with the given denomination $ n $ of the most expensive coin). Also, the denomination of every coin must be divisible by the denomination of any cheaper coin. Naturally, the denominations of all the coins should be different. If there are several solutins to that problem, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
10

```
### 输出样例 #1

```cpp
10 5 1

```
### 输入样例 #2

```cpp
4

```
### 输出样例 #2

```cpp
4 2 1

```
### 输入样例 #3

```cpp
3

```
### 输出样例 #3

```cpp
3 1

```
