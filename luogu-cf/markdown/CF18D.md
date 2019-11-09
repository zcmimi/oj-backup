# Seller Bob

## 题意翻译

题目描述:你能够按顺序获得一些容量为 2^x MB的硬盘，你可以保留它，但是你在卖掉当前这个之前是不能保留其他的硬盘的（卖掉这个硬盘的收益为2^x）。在已经知道什么时候会有人买什么类型的硬盘的前提下，问你能获得的最大收益是多少。

输入:第一行一个数n，表示总共有n天,

之后n行,每行一个字符串和一个整数x,

若开头为"win"，则表示该天获得了一个容量为2^xMB的硬盘；

若开头为"sell"，则表示该天有顾客来买容量为2^xMB的硬盘

输出:一个数w，表示最大收益

1<=n<=5000

0<=x<=2000

translated by 稀神探女

## 题目描述

Last year Bob earned by selling memory sticks. During each of $ n $ days of his work one of the two following events took place:

- A customer came to Bob and asked to sell him a $ 2^{x} $ MB memory stick. If Bob had such a stick, he sold it and got $ 2^{x} $ berllars.

- Bob won some programming competition and got a $ 2^{x} $ MB memory stick as a prize. Bob could choose whether to present this memory stick to one of his friends, or keep it.

Bob never kept more than one memory stick, as he feared to mix up their capacities, and deceive a customer unintentionally. It is also known that for each memory stick capacity there was at most one customer, who wanted to buy that memory stick. Now, knowing all the customers' demands and all the prizes won at programming competitions during the last $ n $ days, Bob wants to know, how much money he could have earned, if he had acted optimally.

## 输入输出格式

### 输入格式

The first input line contains number $ n $ ( $ 1<=n<=5000 $ ) — amount of Bob's working days. The following $ n $ lines contain the description of the days. Line sell x stands for a day when a customer came to Bob to buy a $ 2^{x} $ MB memory stick ( $ 0<=x<=2000 $ ). It's guaranteed that for each $ x $ there is not more than one line sell x. Line win x stands for a day when Bob won a $ 2^{x} $ MB memory stick ( $ 0<=x<=2000 $ ).

### 输出格式

Output the maximum possible earnings for Bob in berllars, that he would have had if he had known all the events beforehand. Don't forget, please, that Bob can't keep more than one memory stick at a time.

## 输入输出样例

### 输入样例 #1

```cpp
7
win 10
win 5
win 3
sell 5
sell 3
win 10
sell 10

```
### 输出样例 #1

```cpp
1056

```
### 输入样例 #2

```cpp
3
win 5
sell 6
sell 4

```
### 输出样例 #2

```cpp
0

```
