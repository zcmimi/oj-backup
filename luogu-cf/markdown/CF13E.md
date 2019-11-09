# Holes

## 题意翻译

有N个洞，每个洞有相应的弹力，能把这个球弹到i+power[i] 位置。当球的位置>N时即视为被弹出

输入：

第一行两个正整数N，M，下面N个数代表初始的power[i]

之后M行分别代表M个操作

共有两种操作:

0 a b 把a位置的弹力改成b

1 a 在a处放一个球，输出球被弹出前共被弹了多少次，最后一次落在哪个洞。

输出：对于每个操作2，输出两个题目中要求的值（空格隔开）

1<=N

1<=M

## 题目描述

Little Petya likes to play a lot. Most of all he likes to play a game «Holes». This is a game for one person with following rules:

There are $ N $ holes located in a single row and numbered from left to right with numbers from 1 to $ N $ . Each hole has it's own power (hole number $ i $ has the power $ a_{i} $ ). If you throw a ball into hole $ i $ it will immediately jump to hole $ i+a_{i} $ , then it will jump out of it and so on. If there is no hole with such number, the ball will just jump out of the row. On each of the $ M $ moves the player can perform one of two actions:

- Set the power of the hole $ a $ to value $ b $ .

- Throw a ball into the hole $ a $ and count the number of jumps of a ball before it jump out of the row and also write down the number of the hole from which it jumped out just before leaving the row.

Petya is not good at math, so, as you have already guessed, you are to perform all computations.

## 输入输出格式

### 输入格式

The first line contains two integers $ N $ and $ M $ ( $ 1<=N<=10^{5} $ , $ 1<=M<=10^{5} $ ) — the number of holes in a row and the number of moves. The second line contains $ N $ positive integers not exceeding $ N $ — initial values of holes power. The following $ M $ lines describe moves made by Petya. Each of these line can be one of the two types:

- $ 0 $ $ a $ $ b $

- $ 1 $ $ a $

Type $ 0 $ means that it is required to set the power of hole $ a $ to $ b $ , and type $ 1 $ means that it is required to throw a ball into the $ a $ -th hole. Numbers $ a $ and $ b $ are positive integers do not exceeding $ N $ .

### 输出格式

For each move of the type $ 1 $ output two space-separated numbers on a separate line — the number of the last hole the ball visited before leaving the row and the number of jumps it made.

## 输入输出样例

### 输入样例 #1

```cpp
8 5
1 1 1 1 1 2 8 2
1 1
0 1 3
1 1
0 3 4
1 2

```
### 输出样例 #1

```cpp
8 7
8 5
7 3

```
