# Cola

## 题意翻译

有a瓶0.5升，b瓶1升，c瓶2升的可乐，求买n升可乐的方案数

输入 $ n $ , $ a $ , $ b $ , $ c $ ( $ 1<=n<=10000 $ , $ 0<=a,b,c

感谢 @partychicken 提供的翻译。

## 题目描述

To celebrate the opening of the Winter Computer School the organizers decided to buy in $ n $ liters of cola. However, an unexpected difficulty occurred in the shop: it turned out that cola is sold in bottles $ 0.5 $ , $ 1 $ and $ 2 $ liters in volume. At that, there are exactly $ a $ bottles $ 0.5 $ in volume, $ b $ one-liter bottles and $ c $ of two-liter ones. The organizers have enough money to buy any amount of cola. What did cause the heated arguments was how many bottles of every kind to buy, as this question is pivotal for the distribution of cola among the participants (and organizers as well).

Thus, while the organizers are having the argument, discussing different variants of buying cola, the Winter School can't start. Your task is to count the number of all the possible ways to buy exactly $ n $ liters of cola and persuade the organizers that this number is too large, and if they keep on arguing, then the Winter Computer School will have to be organized in summer.

All the bottles of cola are considered indistinguishable, i.e. two variants of buying are different from each other only if they differ in the number of bottles of at least one kind.

## 输入输出格式

### 输入格式

The first line contains four integers — $ n $ , $ a $ , $ b $ , $ c $ ( $ 1<=n<=10000 $ , $ 0<=a,b,c<=5000 $ ).

### 输出格式

Print the unique number — the solution to the problem. If it is impossible to buy exactly $ n $ liters of cola, print $ 0 $ .

## 输入输出样例

### 输入样例 #1

```cpp
10 5 5 5

```
### 输出样例 #1

```cpp
9

```
### 输入样例 #2

```cpp
3 0 0 2

```
### 输出样例 #2

```cpp
0

```
