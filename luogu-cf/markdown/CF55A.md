# Flea travel

## 题意翻译

一个虫子位于绕城一圈的$n$片树叶中的一片上，在第$k$分钟，虫子会跳过$k-1$片树叶并在脚下的树叶上做一个记号。在这里，我们假设虫子的$life=+∞$。你的任务是判断该虫子是否将$n$片树叶都做了记号。

输入格式：

只有一行，一个数字$n$，为树叶总数量。

输出格式：

若将$n$片树叶都做了记号，输出$YES$。否则，输出$NO$。

Translated by @da32s1da

## 题目描述

A flea is sitting at one of the $ n $ hassocks, arranged in a circle, at the moment. After minute number $ k $ the flea jumps through $ k-1 $ hassoсks (clockwise). For example, after the first minute the flea jumps to the neighboring hassock. You should answer: will the flea visit all the hassocks or not. We assume that flea has infinitely much time for this jumping.

## 输入输出格式

### 输入格式

The only line contains single integer: $ 1<=n<=1000 $ — number of hassocks.

### 输出格式

Output "YES" if all the hassocks will be visited and "NO" otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
1

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
NO

```
