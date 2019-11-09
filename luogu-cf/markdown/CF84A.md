# Toy Army

## 题意翻译

运功场上有两支队伍，分别是A、B两队，每支队伍由n人组成（n一定是偶数），双方会进行一次互相射击（肯定能射中人，被射中的人会被杀死）。

如果n除以4等于0，那么A队、B队都还剩下n/4个人。 否则，A队还剩下n/4+1个人，B队还剩下n/4个人。

输出多少人被杀死了。

## 题目描述

The hero of our story, Valera, and his best friend Arcady are still in school, and therefore they spend all the free time playing turn-based strategy "GAGA: Go And Go Again". The gameplay is as follows.

There are two armies on the playing field each of which consists of $ n $ men ( $ n $ is always even). The current player specifies for each of her soldiers an enemy's soldier he will shoot (a target) and then all the player's soldiers shot simultaneously. This is a game world, and so each soldier shoots perfectly, that is he absolutely always hits the specified target. If an enemy soldier is hit, he will surely die. It may happen that several soldiers had been indicated the same target. Killed soldiers do not participate in the game anymore.

The game "GAGA" consists of three steps: first Valera makes a move, then Arcady, then Valera again and the game ends.

You are asked to calculate the maximum total number of soldiers that may be killed during the game.

## 输入输出格式

### 输入格式

The input data consist of a single integer $ n $ ( $ 2<=n<=10^{8} $ , $ n $ is even). Please note that before the game starts there are $ 2n $ soldiers on the fields.

### 输出格式

Print a single number — a maximum total number of soldiers that could be killed in the course of the game in three turns.

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
4

```
### 输出样例 #2

```cpp
6

```
## 说明

The first sample test:

1\) Valera's soldiers 1 and 2 shoot at Arcady's soldier 1.

2\) Arcady's soldier 2 shoots at Valera's soldier 1.

3\) Valera's soldier 1 shoots at Arcady's soldier 2.

There are 3 soldiers killed in total: Valera's soldier 1 and Arcady's soldiers 1 and 2.

