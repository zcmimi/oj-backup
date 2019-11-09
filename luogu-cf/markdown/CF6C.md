# Alice, Bob and Chocolate

## 题意翻译

n个糖，a从前往后吃，b从后往前吃，每个糖都有吃完需要的时间，每个人在同一时间只能吃一个，吃完某一个后，才能吃下一个，如果两个人同时开始吃同一个，b会让给a，问最后每个人总共吃了多少糖

## 题目描述

Alice and Bob like games. And now they are ready to start a new game. They have placed $ n $ chocolate bars in a line. Alice starts to eat chocolate bars one by one from left to right, and Bob — from right to left. For each chocololate bar the time, needed for the player to consume it, is known (Alice and Bob eat them with equal speed). When the player consumes a chocolate bar, he immediately starts with another. It is not allowed to eat two chocolate bars at the same time, to leave the bar unfinished and to make pauses. If both players start to eat the same bar simultaneously, Bob leaves it to Alice as a true gentleman.

How many bars each of the players will consume?

## 输入输出格式

### 输入格式

The first line contains one integer $ n $ ( $ 1<=n<=10^{5} $ ) — the amount of bars on the table. The second line contains a sequence $ t_{1},t_{2},...,t_{n} $ ( $ 1<=t_{i}<=1000 $ ), where $ t_{i} $ is the time (in seconds) needed to consume the $ i $ -th bar (in the order from left to right).

### 输出格式

Print two numbers $ a $ and $ b $ , where $ a $ is the amount of bars consumed by Alice, and $ b $ is the amount of bars consumed by Bob.

## 输入输出样例

### 输入样例 #1

```cpp
5
2 9 8 2 7

```
### 输出样例 #1

```cpp
2 3

```
