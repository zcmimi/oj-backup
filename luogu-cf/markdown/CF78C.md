# Beaver Game

## 题意翻译

两只海狸（Timur and Marsel）做游戏

什么游戏呢？

有n条长度为m的木棍

从Timur开始，每只海狸轮流将一根已有的木棍任意等分

但要保证等分后的每一段长度都是不小于k的整数

（m,n，k为小于等于1000000000的正整数）

先无法等分的海狸输

已知Timur and Marsel,无比聪明，智商碾压人类（真可怕），这导致他们每一步都最优

那聪明的你，能不能告诉更聪明的评测机，到底谁会获胜呢？

贡献者：HandSome_Colin

## 题目描述

Two beavers, Timur and Marsel, play the following game.

There are $ n $ logs, each of exactly $ m $ meters in length. The beavers move in turns. For each move a beaver chooses a log and gnaws it into some number (more than one) of equal parts, the length of each one is expressed by an integer and is no less than $ k $ meters. Each resulting part is also a log which can be gnawed in future by any beaver. The beaver that can't make a move loses. Thus, the other beaver wins.

Timur makes the first move. The players play in the optimal way. Determine the winner.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ , $ k $ ( $ 1<=n,m,k<=10^{9} $ ).

### 输出格式

Print "Timur", if Timur wins, or "Marsel", if Marsel wins. You should print everything without the quotes.

## 输入输出样例

### 输入样例 #1

```cpp
1 15 4

```
### 输出样例 #1

```cpp
Timur
```


### 输入样例 #2

```cpp
4 9 5

```
### 输出样例 #2

```cpp
Marsel
```


## 说明

In the first sample the beavers only have one log, of $ 15 $ meters in length. Timur moves first. The only move he can do is to split the log into $ 3 $ parts each $ 5 $ meters in length. Then Marsel moves but he can't split any of the resulting logs, as $ k=4 $ . Thus, the winner is Timur.

In the second example the beavers have $ 4 $ logs $ 9 $ meters in length. Timur can't split any of them, so that the resulting parts possessed the length of not less than $ 5 $ meters, that's why he loses instantly.

