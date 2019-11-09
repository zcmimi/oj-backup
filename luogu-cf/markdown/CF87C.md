# Interesting Game

## 题意翻译

【问题描述】

小 A 拿来了一堆 n 个石子，邀请小 B 一起玩取石子游戏，规则是每人每次可以取不超

过 3 个石子，谁先取完谁获胜。

小 B 看了一眼石子的个数，在飞快的心算过后，明白了小 A 存心要坑他，于是小 B 提

出了一个新的游戏规则：

每个人每步可以将一堆石子分成 k 堆(? ≥ 2)，由于小 B 非常喜欢等差数列，尤其喜欢

公差为 1 的等差数列，故要求这 k 堆石子排成一个公差为 1 的等差数列。换句话说，如果分

出来的每堆石子有?1, ?2, … , ??个（不妨?1 ≤ ?2 ≤ ⋯ ≤ ??），那么需要满足：

?2 − ?1 = ?3 − ?2 = ⋯ = ?? − ??−1 = 1

无法操作的玩家则失败。

小 B 为了显示出自己的友善，让小 A 先取石子。小 A 觉得小 B 也别有用心，但是他自

己并无法一眼看出这个状态是否有必胜方案，于是他找了你，想知道他是否有必胜策略。

小 A 发现，得知是否有必胜策略还不够，他还需要知道先手第一步该如何操作。由于把

石头搬来搬去很累，所以小 A 想知道，若有必胜策略，先手第一步最少分成几堆可以必胜？

【输入格式】

仅一行，一个数 n，表示初始的一堆石子总数。

【输出格式】

仅一行，一个数，如果小 A 必败，则输出-1；否则输出所有的小 A 的必胜策略中，第

一步最少需要分成几堆。

## 题目描述

Two best friends Serozha and Gena play a game.

Initially there is one pile consisting of $ n $ stones on the table. During one move one pile should be taken and divided into an arbitrary number of piles consisting of $ a_{1}&gt;a_{2}&gt;...&gt;a_{k}&gt;0 $ stones. The piles should meet the condition $ a_{1}-a_{2}=a_{2}-a_{3}=...=a_{k-1}-a_{k}=1 $ . Naturally, the number of piles $ k $ should be no less than two.

The friends play in turns. The player who cannot make a move loses. Serozha makes the first move. Who will win if both players play in the optimal way?

## 输入输出格式

### 输入格式

The single line contains a single integer $ n $ ( $ 1<=n<=10^{5} $ ).

### 输出格式

If Serozha wins, print $ k $ , which represents the minimal number of piles into which he can split the initial one during the first move in order to win the game.

If Gena wins, print "-1" (without the quotes).

## 输入输出样例

### 输入样例 #1

```cpp
3

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
6

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
100

```
### 输出样例 #3

```cpp
8

```
