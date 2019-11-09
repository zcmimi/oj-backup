# Reconnaissance 2

## 题意翻译

题目描述：操场上有n个士兵站成了一个环，每名士兵有一个身高h[i]，试求两相邻士兵x,y，使得士兵x和士兵y身高差最小。

输入：第一行n，之后n个整数h[i]；

输出：题目描述中的x，y，若有多解任意输出一组即可。

2<=n<=100，1<=ai<=1000

Translated by @稀神探女

## 题目描述

 $ n $ soldiers stand in a circle. For each soldier his height $ a_{i} $ is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. $ |a_{i}-a_{j}| $ is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 2<=n<=100 $ ) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — $ n $ space-separated integers $ a_{1},a_{2},...,a_{n} $ ( $ 1<=a_{i}<=1000 $ ). The soldier heights are given in clockwise or counterclockwise direction.

### 输出格式

Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.

## 输入输出样例

### 输入样例 #1

```cpp
5
10 12 13 15 10

```
### 输出样例 #1

```cpp
5 1

```
### 输入样例 #2

```cpp
4
10 20 30 40

```
### 输出样例 #2

```cpp
1 2

```
