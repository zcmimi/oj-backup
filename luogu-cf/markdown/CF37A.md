# Towers

## 题意翻译

Little Vasya收到了一个来自青年建筑师的盒子，盒子里有n（1<=n<=1000）条木头。现在他知道每条木头的长度，如果有两根木头长度一致，则他可以把其中一条放在另一条的顶部

Vasya想知道用木头建立的塔的最小数量。帮助Vasya以最好的方式使用这些木头。（每根木头都要用上）

输入：第一行：n

第二行：每条木头的长度（小于一千的自然数）

输出：最大塔的高度(某塔叠放木头数量)及其塔的总数。记住，Vasya应该利用所有的木头。

Translated by @____233____ 

## 题目描述

Little Vasya has received a young builder’s kit. The kit consists of several wooden bars, the lengths of all of them are known. The bars can be put one on the top of the other if their lengths are the same.

Vasya wants to construct the minimal number of towers from the bars. Help Vasya to use the bars in the best way possible.

## 输入输出格式

### 输入格式

The first line contains an integer $ N $ ( $ 1<=N<=1000 $ ) — the number of bars at Vasya’s disposal. The second line contains $ N $ space-separated integers $ l_{i} $ — the lengths of the bars. All the lengths are natural numbers not exceeding $ 1000 $ .

### 输出格式

In one line output two numbers — the height of the largest tower and their total number. Remember that Vasya should use all the bars.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2 3

```
### 输出样例 #1

```cpp
1 3

```
### 输入样例 #2

```cpp
4
6 5 6 7

```
### 输出样例 #2

```cpp
2 3

```
