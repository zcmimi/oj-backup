# Fruits

## 题意翻译

给出n个数和m个字符串

字符串可以重复，而且重复的字符串视为一种字符串，同种字符串所代表的价值相同

求把n个数分配给m种字符串得到的值的和最小价值和最大价值分别是多少（一个数只能分配一次）

1<=n,m<=100

Translated by 稀神探女

## 题目描述

The spring is coming and it means that a lot of fruits appear on the counters. One sunny day little boy Valera decided to go shopping. He made a list of $ m $ fruits he wanted to buy. If Valera want to buy more than one fruit of some kind, he includes it into the list several times.

When he came to the fruit stall of Ashot, he saw that the seller hadn't distributed price tags to the goods, but put all price tags on the counter. Later Ashot will attach every price tag to some kind of fruits, and Valera will be able to count the total price of all fruits from his list. But Valera wants to know now what can be the smallest total price (in case of the most «lucky» for him distribution of price tags) and the largest total price (in case of the most «unlucky» for him distribution of price tags).

## 输入输出格式

### 输入格式

The first line of the input contains two integer number $ n $ and $ m $ ( $ 1<=n,m<=100 $ ) — the number of price tags (which is equal to the number of different kinds of fruits that Ashot sells) and the number of items in Valera's list. The second line contains $ n $ space-separated positive integer numbers. Each of them doesn't exceed $ 100 $ and stands for the price of one fruit of some kind. The following $ m $ lines contain names of the fruits from the list. Each name is a non-empty string of small Latin letters which length doesn't exceed 32. It is guaranteed that the number of distinct fruits from the list is less of equal to $ n $ . Also it is known that the seller has in stock all fruits that Valera wants to buy.

### 输出格式

Print two numbers $ a $ and $ b $ ( $ a<=b $ ) — the minimum and the maximum possible sum which Valera may need to buy all fruits from his list.

## 输入输出样例

### 输入样例 #1

```cpp
5 3
4 2 1 10 5
apple
orange
mango

```
### 输出样例 #1

```cpp
7 19

```
### 输入样例 #2

```cpp
6 5
3 5 1 6 8 1
peach
grapefruit
banana
orange
orange

```
### 输出样例 #2

```cpp
11 30

```
