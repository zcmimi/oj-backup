# Panoramix&#039;s Prediction

## 题意翻译

输入两个正整数n,m(2<=n<m<=50)，如果n和m是连续的质数，输出"YES"，否则输出"NO"。

## 题目描述

A prime number is a number which has exactly two distinct divisors: one and itself. For example, numbers $ 2 $ , $ 7 $ , $ 3 $ are prime, and $ 1 $ , $ 6 $ , $ 4 $ are not.

The next prime number after $ x $ is the smallest prime number greater than $ x $ . For example, the next prime number after $ 2 $ is $ 3 $ , and the next prime number after $ 3 $ is $ 5 $ . Note that there is exactly one next prime number after each number. So $ 5 $ is not the next prime number for $ 2 $ .

One cold April morning Panoramix predicted that soon Kakofonix will break free from his straitjacket, and this will be a black day for the residents of the Gallic countryside.

Panoramix's prophecy tells that if some day Asterix and Obelix beat exactly $ x $ Roman soldiers, where $ x $ is a prime number, and next day they beat exactly $ y $ Roman soldiers, where $ y $ is the next prime number after $ x $ , then it's time to wait for Armageddon, for nothing can shut Kakofonix up while he sings his infernal song.

Yesterday the Gauls beat $ n $ Roman soldiers and it turned out that the number $ n $ was prime! Today their victims were a troop of $ m $ Romans ( $ m&gt;n $ ). Determine whether the Gauls should wait for the black day after today's victory of Asterix and Obelix?

## 输入输出格式

### 输入格式

The first and only input line contains two positive integers — $ n $ and $ m $ ( $ 2<=n&lt;m<=50 $ ). It is guaranteed that $ n $ is prime.

Pretests contain all the cases with restrictions $ 2<=n&lt;m<=4 $ .

### 输出格式

Print YES, if $ m $ is the next prime number after $ n $ , or NO otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
3 5

```
### 输出样例 #1

```cpp
YES
```


### 输入样例 #2

```cpp
7 11

```
### 输出样例 #2

```cpp
YES
```


### 输入样例 #3

```cpp
7 9

```
### 输出样例 #3

```cpp
NO
```


