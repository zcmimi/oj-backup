# Goofy Numbers

## 题意翻译

## 题目描述

当且仅当（`if and only if`）存在一个正整数$c$使得$a \times c = b$时，一个非负数$a$就是一个非负数$b$的因子（`divisor`）

有一些数是真的有意思，控制员Surena对一些非负数定义了一些有趣的意思：

- 如果这个数能被其中的一些数位（但不是所有）整除，那么输出"happy"

- 如果这个数能被其中所有的数位整除，那么输出"happier"

- 如果这个数不能被其中任何一个的数位整除，那么输出"upset"

现在 Surena 想知道这个数是 `happy`，`happier`还是`upset`。

## 输入输出格式

### 输入格式：

输入一个非负数$n$（$1 \le n \le 10^8$）

### 输出格式：

输出一行：`happy`，`happier`或`upset`

## 说明：

第二个测试点中$29994$只能被$2$整除`happy`

第三个测试点中$23$不能被其中任何一个数整除，输出`upset`

## 题目描述

The non-negative integer $ a $ is a divisor of the non-negative integer $ b $ if and only if there exists a positive integer $ c $ such that $ a×c=b $ .

Some numbers are really interesting. Commander Surena defines some interesting properties for non-negative integers:

- An integer is happy if it is divisible by at least one of its digits and not by all of them.

- An integer is happier if it is divisible by all of its digits.

- An integer is upset if it's divisible by none of its digits.

Surena asks you to find out if a given number is happy, happier or upset.

## 输入输出格式

### 输入格式

Input contains a single non-negative integer $ n $ ( $ 1<=n<=10^{8} $ ).

### 输出格式

Write on a single line the type of the integer: happy, happier or upset. Print the type in lowercase letters.

## 输入输出样例

### 输入样例 #1

```cpp
99

```
### 输出样例 #1

```cpp
happier

```
### 输入样例 #2

```cpp
29994

```
### 输出样例 #2

```cpp
happy

```
### 输入样例 #3

```cpp
23

```
### 输出样例 #3

```cpp
upset

```
## 说明

In the second test $ 29994 $ is only divisible by $ 2 $ .

In the third test $ 23 $ is a prime number.

