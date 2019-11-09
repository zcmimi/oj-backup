# TV Game

## 题意翻译

## Description

给你一个长度为$2n$的数字$S$，同时你还有两个初始为$0$的数字$A,B$。每次你可以将$S$中最靠左的一位在$S$中删除掉，并接在$A$或者$B$其中一个的后面。要求整个操作结束后，必须$A$与$B$都恰好被接$n$次。最大化$A+B$的值，输出方案。

## Input

第一行是一个整数$n$。

第二行是一个长度为$2n$的数字代表$S$

## Output

输出一行长度为$2n$的由$H$和$M$组成的字符串。如果$S$的第$i$位接到了$A$后面，则输出字符串的第$i$为是$H$。否则是$M$.

## Hint

$0~\leq~n~\leq~18$

## 题目描述

There is a new TV game on BerTV. In this game two players get a number $ A $ consisting of $ 2n $ digits. Before each turn players determine who will make the next move. Each player should make exactly $ n $ moves. On it's turn $ i $ -th player takes the leftmost digit of $ A $ and appends it to his or her number $ S_{i} $ . After that this leftmost digit is erased from $ A $ . Initially the numbers of both players ( $ S_{1} $ and $ S_{2} $ ) are «empty». Leading zeroes in numbers $ A,S_{1},S_{2} $ are allowed. In the end of the game the first player gets $ S_{1} $ dollars, and the second gets $ S_{2} $ dollars.

One day Homer and Marge came to play the game. They managed to know the number $ A $ beforehand. They want to find such sequence of their moves that both of them makes exactly $ n $ moves and which maximizes their total prize. Help them.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=18 $ ). The second line contains integer $ A $ consisting of exactly $ 2n $ digits. This number can have leading zeroes.

### 输出格式

Output the line of $ 2n $ characters «H» and «M» — the sequence of moves of Homer and Marge, which gives them maximum possible total prize. Each player must make exactly $ n $ moves. If there are several solutions, output any of them.

## 输入输出样例

### 输入样例 #1

```cpp
2
1234

```
### 输出样例 #1

```cpp
HHMM
```


### 输入样例 #2

```cpp
2
9911

```
### 输出样例 #2

```cpp
HMHM
```


