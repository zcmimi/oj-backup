# What is for dinner?

## 题意翻译

鲨鱼有n颗牙齿，分别分布于m行上，第i颗牙齿有一个初始活力值$c_i$。鲨鱼有k个食物想要吃，但是，每吃掉一个食物就要消耗某一排牙齿的每一颗牙齿各1点活力，而鲨鱼必须保证每个牙齿的剩余活力不能到负数。

试求鲨鱼最多能吃到的食物个数。

输入:第一排三个整数n,m,k，后面n排每行两个整数x和$c_i$,分别表示这个牙齿所在的行数和初始活力值。

输出：一个整数，为答案。

1<=m<=n<=1000,0<=k<=$10^6$,

1<=x<=m,0<=$c_i$<=$10^6$

Translated by @稀神探女

## 题目描述

In one little known, but very beautiful country called Waterland, lives a lovely shark Valerie. Like all the sharks, she has several rows of teeth, and feeds on crucians. One of Valerie's distinguishing features is that while eating one crucian she uses only one row of her teeth, the rest of the teeth are "relaxing".

For a long time our heroine had been searching the sea for crucians, but a great misfortune happened. Her teeth started to ache, and she had to see the local dentist, lobster Ashot. As a professional, Ashot quickly relieved Valerie from her toothache. Moreover, he managed to determine the cause of Valerie's developing caries (for what he was later nicknamed Cap).

It turned that Valerie eats too many crucians. To help Valerie avoid further reoccurrence of toothache, Ashot found for each Valerie's tooth its residual viability. Residual viability of a tooth is a value equal to the amount of crucians that Valerie can eat with this tooth. Every time Valerie eats a crucian, viability of all the teeth used for it will decrease by one. When the viability of at least one tooth becomes negative, the shark will have to see the dentist again.

Unhappy, Valerie came back home, where a portion of crucians was waiting for her. For sure, the shark couldn't say no to her favourite meal, but she had no desire to go back to the dentist. That's why she decided to eat the maximum amount of crucians from the portion but so that the viability of no tooth becomes negative.

As Valerie is not good at mathematics, she asked you to help her to find out the total amount of crucians that she can consume for dinner.

We should remind you that while eating one crucian Valerie uses exactly one row of teeth and the viability of each tooth from this row decreases by one.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ , $ k $ ( $ 1<=m<=n<=1000,0<=k<=10^{6} $ ) — total amount of Valerie's teeth, amount of tooth rows and amount of crucians in Valerie's portion for dinner. Then follow $ n $ lines, each containing two integers: $ r $ ( $ 1<=r<=m $ ) — index of the row, where belongs the corresponding tooth, and $ c $ ( $ 0<=c<=10^{6} $ ) — its residual viability.

It's guaranteed that each tooth row has positive amount of teeth.

### 输出格式

In the first line output the maximum amount of crucians that Valerie can consume for dinner.

## 输入输出样例

### 输入样例 #1

```cpp
4 3 18
2 3
1 2
3 6
2 3

```
### 输出样例 #1

```cpp
11

```
### 输入样例 #2

```cpp
2 2 13
1 13
2 12

```
### 输出样例 #2

```cpp
13

```
