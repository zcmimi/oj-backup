# Help Shrek and Donkey

## 题意翻译

有一副互不相同的牌共 $n+m+1$ 张。有两个人，第一个人 $n$ 张，第二个人 $m$ 张。另外有一张牌放在桌子上。

两个人玩游戏轮流操作（其中第一个人为先手）。有如下 $2$ 中操作类型：

1. 猜测：猜桌上的那张牌是什么。如果猜对了则获胜，猜错了则失败。操作完之后游戏结束。

2. 指定：报一张牌的名字，如果对方手上有这张牌，则将该牌丢弃，游戏继续；如果对方手上没有这张牌，对方则会表示他不用由此牌。

现在假设两个人都知道这 $n+m+1$ 张牌分别是什么，但是不知道桌上和对方手里的牌具体是什么。

若双方都采取最优策略进行游戏，问先手和后手获胜概率。

若选手答案与标准答案的误差不超过 $10^{-9}$ 则认为正确。

数据范围：$0\le n,m\le 1000$

## 题目描述

Shrek and the Donkey (as you can guess, they also live in the far away kingdom) decided to play a card game called YAGame. The rules are very simple: initially Shrek holds $ m $ cards and the Donkey holds $ n $ cards (the players do not see each other's cards), and one more card lies on the table face down so that both players cannot see it as well. Thus, at the beginning of the game there are overall $ m+n+1 $ cards. Besides, the players know which cards the pack of cards consists of and their own cards (but they do not know which card lies on the table and which ones the other player has). The players move in turn and Shrek starts. During a move a player can:

- Try to guess which card is lying on the table. If he guesses correctly, the game ends and he wins. If his guess is wrong, the game also ends but this time the other player wins.

- Name any card from the pack. If the other player has such card, he must show it and put it aside (so that this card is no longer used in the game). If the other player doesn't have such card, he says about that.

Recently Donkey started taking some yellow pills and winning over Shrek. Now Shrek wants to evaluate his chances to win if he too starts taking the pills.Help Shrek assuming the pills are good in quality and that both players using them start playing in the optimal manner.

## 输入输出格式

### 输入格式

The first line contains space-separated integers $ m $ and $ n $ ( $ 0<=m,n<=1000 $ ).

### 输出格式

Print space-separated probabilities that Shrek wins and Donkey wins correspondingly; the absolute error should not exceed $ 10^{-9} $ .

## 输入输出样例

### 输入样例 #1

```cpp
0 3

```
### 输出样例 #1

```cpp
0.25 0.75

```
### 输入样例 #2

```cpp
1 0

```
### 输出样例 #2

```cpp
1 0

```
### 输入样例 #3

```cpp
1 1

```
### 输出样例 #3

```cpp
0.5 0.5

```
