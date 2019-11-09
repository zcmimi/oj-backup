# Extraordinarily Nice Numbers

## 题目描述

The positive integer $ a $ is a divisor of the positive integer $ b $ if and only if there exists a positive integer $ c $ such that $ a×c=b $ .

King Astyages thinks a positive integer $ x $ is extraordinarily nice if the number of its even divisors is equal to the number of its odd divisors.

For example $ 3 $ has two positive divisors $ 3 $ and $ 1 $ , both of which are odd, so $ 3 $ is not extraordinarily nice. On the other hand $ 2 $ is only divisible by $ 2 $ and $ 1 $ , so it has one odd and one even divisor. Therefore $ 2 $ is extraordinarily nice.

Given a positive integer $ x $ determine whether it's extraordinarily nice.

## 输入输出格式

### 输入格式

The input contains only a single integer $ x $ ( $ 1<=x<=10^{3} $ ).

### 输出格式

Write a single yes or no. Write yes if the number is extraordinarily nice and no otherwise.

You don't need to care about capital or small letters. The output is case-insensitive.

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
yes

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
no

```
