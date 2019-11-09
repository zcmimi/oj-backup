# Safe

## 题意翻译

题目描述

小万尝试破解一个保险柜上的密码。他知道这条密码包含n个数字，而且每一个数字都是0或者1。小万为了破解保险箱已经试了m次密码。每次输入密码以后系统都会告诉他一共有几位数字输入对了。但系统不会告诉他哪几位是错误的。小万实在是太不走运了，以至于他输入的所有密码中没有一条中正确的数码的个数多于5个。现在小万已经放弃了：因为他觉得这个保险箱系统有问题。帮帮小万计算还有多少种他没有试过的密码，而且这些密码不能与之前试过的自相矛盾。

输入输出格式

输入格式

第一行包含两个整数n和m (6<=n<=35, 1<=m<=10)，它们分别表示密码由多少个数码组成和小万已经试过多少次了。

接下来包含m行：每一行包括一个数组和一个整数，它们分别代表小万本次中尝试的密码和系统反退给小万的数。

输出格式

输出一个整数，代表还有多少种可能的密码不会和之前出现过的密码出现矛盾。

感谢@deadpool123 提供的翻译

## 题目描述

Vasya tries to break in a safe. He knows that a code consists of $ n $ numbers, and every number is a 0 or a 1. Vasya has made $ m $ attempts to enter the code. After each attempt the system told him in how many position stand the right numbers. It is not said in which positions the wrong numbers stand. Vasya has been so unlucky that he hasn’t entered the code where would be more than 5 correct numbers. Now Vasya is completely bewildered: he thinks there’s a mistake in the system and it is self-contradictory. Help Vasya — calculate how many possible code variants are left that do not contradict the previous system responses.

## 输入输出格式

### 输入格式

The first input line contains two integers $ n $ and $ m $ ( $ 6<=n<=35,1<=m<=10 $ ) which represent the number of numbers in the code and the number of attempts made by Vasya. Then follow $ m $ lines, each containing space-separated $ s_{i} $ and $ c_{i} $ which correspondingly indicate Vasya’s attempt (a line containing $ n $ numbers which are 0 or 1) and the system’s response (an integer from 0 to 5 inclusively).

### 输出格式

Print the single number which indicates how many possible code variants that do not contradict the $ m $ system responses are left.

## 输入输出样例

### 输入样例 #1

```cpp
6 2
000000 2
010100 4

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
6 3
000000 2
010100 4
111100 0

```
### 输出样例 #2

```cpp
0

```
### 输入样例 #3

```cpp
6 3
000000 2
010100 4
111100 2

```
### 输出样例 #3

```cpp
1

```
