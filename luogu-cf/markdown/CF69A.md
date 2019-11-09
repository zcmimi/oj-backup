# Young Physicist

## 题意翻译

## 题目大意

给你一个整数$n$ （$1\leq n\leq 100$ ），再给你一些空间里的矢量坐标$x_i,y_i,z_i$ （$-100\leq x_i,y_i,z_i\leq 100$ ），求这些矢量的和是否为0，是输出YES，不是输出NO

（译者注：如果你看英文原文的话，他是在求受力平衡，但是原文中有这样一句话"we need only to check if the sum of all vectors is equal to 0"，所以并不是我抽题面抽的连做法都写出来了）

Translated by Khassar

## 题目描述

A guy named Vasya attends the final grade of a high school. One day Vasya decided to watch a match of his favorite hockey team. And, as the boy loves hockey very much, even more than physics, he forgot to do the homework. Specifically, he forgot to complete his physics tasks. Next day the teacher got very angry at Vasya and decided to teach him a lesson. He gave the lazy student a seemingly easy task: You are given an idle body in space and the forces that affect it. The body can be considered as a material point with coordinates (0; 0; 0). Vasya had only to answer whether it is in equilibrium. "Piece of cake" — thought Vasya, we need only to check if the sum of all vectors is equal to 0. So, Vasya began to solve the problem. But later it turned out that there can be lots and lots of these forces, and Vasya can not cope without your help. Help him. Write a program that determines whether a body is idle or is moving by the given vectors of forces.

## 输入输出格式

### 输入格式

The first line contains a positive integer $ n $ ( $ 1<=n<=100 $ ), then follow $ n $ lines containing three integers each: the $ x_{i} $ coordinate, the $ y_{i} $ coordinate and the $ z_{i} $ coordinate of the force vector, applied to the body ( $ -100<=x_{i},y_{i},z_{i}<=100 $ ).

### 输出格式

Print the word "YES" if the body is in equilibrium, or the word "NO" if it is not.

## 输入输出样例

### 输入样例 #1

```cpp
3
4 1 7
-2 4 -1
1 -5 -3

```
### 输出样例 #1

```cpp
NO
```


### 输入样例 #2

```cpp
3
3 -1 7
-5 2 -4
2 -1 -3

```
### 输出样例 #2

```cpp
YES
```


