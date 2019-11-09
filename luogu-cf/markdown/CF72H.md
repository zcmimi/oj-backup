# Reverse It!

## 题意翻译

读入一个数字，可能是负数，长度<=1001,反转这个数字，注意删除前导0

## 题目描述

The 14th of March was the international day of mathematics, because of number $ π=3.1415926.. $ .

In the occasion of this day Goofy Nephews Unity Organization (GNU) wants to publish the fastest program in math at 1:59:26 AM.

Now the time is 1:11:11 AM and the project team haven't checked their program yet. Because of shortage of time they want to check their program with some queries. So they hired Hormizd (one of the greatest programmers in world) to write a tester for GNU's new program. Because Hormizd has much more important things to do, he wants you to write a small part of tester and it is reversing the numbers. Help him before 1:59:26.

We can reverse numbers easily. For example by reversing $ 1234 $ we get $ 4321 $ .

Note, that if the integer is negative then its reverse would be also negative. For example reverse of $ -123 $ is $ -321 $ .

Also, you have to delete all the leading zeroes before and after the reverse.

Given an integer you have to help Hormizd reverse it.

## 输入输出格式

### 输入格式

The first line contains a single integer $ n $ . It is less than $ 10^{1000} $ by it's absolute value. This integer may have leading zeros. If it had leading zeros you should first omit them and print the reverse of remaining digits. It's guaranteed that input contains less than 10001 characters.

### 输出格式

Output a single integer, the reverse of the given number. You have to omit leading zeros in the output.

## 输入输出样例

### 输入样例 #1

```cpp
23

```
### 输出样例 #1

```cpp
32

```
### 输入样例 #2

```cpp
-032

```
### 输出样例 #2

```cpp
-23

```
### 输入样例 #3

```cpp
01234560

```
### 输出样例 #3

```cpp
654321

```
