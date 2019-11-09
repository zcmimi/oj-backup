# Tricky and Clever Password

## 题意翻译

给定字符串S. 求一个长度n为奇数的回文串T 以及一个不超过n 的正整数x，使得： 2 S = S1 + T [1, x] + S2 + T [x + 1, n − x] + S3 + T [n − x + 1, n] S1,S2,S3是任意字符串，可 以为空串。 T [l, r]表示T 的第l到第r字符组成的子串，从1编号。 求满足条件的长度最大的T 的长度是多长。 n ≤ 10^5

Translated by liyifeng

## 题目描述

In his very young years the hero of our story, king Copa, decided that his private data was hidden not enough securely, what is unacceptable for the king. That's why he invented tricky and clever password (later he learned that his password is a palindrome of odd length), and coded all his data using it.

Copa is afraid to forget his password, so he decided to write it on a piece of paper. He is aware that it is insecure to keep password in such way, so he decided to cipher it the following way: he cut $ x $ characters from the start of his password and from the end of it ( $ x $ can be $ 0 $ , and $ 2x $ is strictly less than the password length). He obtained 3 parts of the password. Let's call it $ prefix $ , $ middle $ and $ suffix $ correspondingly, both $ prefix $ and $ suffix $ having equal length and $ middle $ always having odd length. From these parts he made a string $ A+prefix+B+middle+C+suffix $ , where $ A $ , $ B $ and $ C $ are some (possibly empty) strings invented by Copa, and « $ + $ » means concatenation.

Many years have passed, and just yesterday the king Copa found the piece of paper where his ciphered password was written. The password, as well as the strings $ A $ , $ B $ and $ C $ , was completely forgotten by Copa, so he asks you to find a password of maximum possible length, which could be invented, ciphered and written by Copa.

## 输入输出格式

### 输入格式

The input contains single string of small Latin letters with length from $ 1 $ to $ 10^{5} $ characters.

### 输出格式

The first line should contain integer $ k $ — amount of nonempty parts of the password in your answer (![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF30E/49cbd6dc77599182d92cfa2c7d962a3fbbf96901.png)). In each of the following $ k $ lines output two integers $ x_{i} $ and $ l_{i} $ — start and length of the corresponding part of the password. Output pairs in order of increasing $ x_{i} $ . Separate the numbers in pairs by a single space.

Starting position $ x_{i} $ should be an integer from $ 1 $ to the length of the input string. All $ l_{i} $ must be positive, because you should output only non-empty parts. The middle part must have odd length.

If there are several solutions, output any. Note that your goal is to maximize the sum of $ l_{i} $ , but not to maximize $ k $ .

## 输入输出样例

### 输入样例 #1

```cpp
abacaba

```
### 输出样例 #1

```cpp
1
1 7

```
### 输入样例 #2

```cpp
axbya

```
### 输出样例 #2

```cpp
3
1 1
2 1
5 1

```
### 输入样例 #3

```cpp
xabyczba

```
### 输出样例 #3

```cpp
3
2 2
4 1
7 2

```
