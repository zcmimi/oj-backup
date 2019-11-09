# Guilty — to the kitchen!

## 题意翻译

 ## 题目描述

今天对Volodya来说是十分不幸的一天。他的代数考试挂掉了，并且不得不在厨房里干活，即做罗宋汤（一种传统的俄罗斯汤）。通过这样也能提高他的代数水平。

根据罗宋汤的配方,罗宋汤由$n$部分组成，并且它们必须按比例（$a_1:a_2:\ldots:a_n$）混合（因此，对于一个非负的$x$，它们为$a_1*x,a_2*x,\ldots,a_n*x$升），在厨房里 Volodya发现每种配料他相应的有$b_1,b_2,\ldots,b_n$升供他使用。为了纠正他在代数上的错误，他决定用一个容量为$V$升的锅尽可能的多做汤（这意味着这它能够做$0$到$V$升的汤）。Volodya最多能做多少汤？

### 输入格式：

第一行包含两个用空格分开的整数$n$和$V$（$1\leq n\leq20,1\leq V\leq10000$）。下一行包含$n$个用空格分开的整数$a_i$（$1\leq a_i\leq100$）。

最后一行包含$n$个空格分开的整数$b_i$（$0\leq b_i\leq100$）

### 输出格式：

你的程序应当仅仅输出一个实数 — Volodya最多能做的汤的体积。你的答案必须和标准答案相差不超过$10^{-4}$

Translated by @Khassar 

## 题目描述

It's a very unfortunate day for Volodya today. He got bad mark in algebra and was therefore forced to do some work in the kitchen, namely to cook borscht (traditional Russian soup). This should also improve his algebra skills.

According to the borscht recipe it consists of $ n $ ingredients that have to be mixed in proportion ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF42A/d1dbd0f9d6798ddec90e02f2dc1080980bfbe962.png) litres (thus, there should be $ a_{1}·x,...,a_{n}·x $ litres of corresponding ingredients mixed for some non-negative $ x $ ). In the kitchen Volodya found out that he has $ b_{1},...,b_{n} $ litres of these ingredients at his disposal correspondingly. In order to correct his algebra mistakes he ought to cook as much soup as possible in a $ V $ litres volume pan (which means the amount of soup cooked can be between $ 0 $ and $ V $ litres). What is the volume of borscht Volodya will cook ultimately?

## 输入输出格式

### 输入格式

The first line of the input contains two space-separated integers $ n $ and $ V $ ( $ 1<=n<=20,1<=V<=10000 $ ). The next line contains $ n $ space-separated integers $ a_{i} $ ( $ 1<=a_{i}<=100 $ ). Finally, the last line contains $ n $ space-separated integers $ b_{i} $ ( $ 0<=b_{i}<=100 $ ).

### 输出格式

Your program should output just one real number — the volume of soup that Volodya will cook. Your answer must have a relative or absolute error less than $ 10^{-4} $ .

## 输入输出样例

### 输入样例 #1

```cpp
1 100
1
40

```
### 输出样例 #1

```cpp
40.0

```
### 输入样例 #2

```cpp
2 100
1 1
25 30

```
### 输出样例 #2

```cpp
50.0

```
### 输入样例 #3

```cpp
2 100
1 1
60 60

```
### 输出样例 #3

```cpp
100.0

```
