# Phone numbers

## 题意翻译

给一串长度为n的数字串，在两个或三个数字之间加'-'，使得这个数字串便于记忆。

如果有多解，随意输出其中一个就好

2<=n<=100

Translated by 稀神探女

## 题目描述

Phone number in Berland is a sequence of $ n $ digits. Often, to make it easier to memorize the number, it is divided into groups of two or three digits. For example, the phone number 1198733 is easier to remember as 11-987-33. Your task is to find for a given phone number any of its divisions into groups of two or three digits.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 2<=n<=100 $ ) — amount of digits in the phone number. The second line contains $ n $ digits — the phone number to divide into groups.

### 输出格式

Output any of divisions of the given phone number into groups of two or three digits. Separate groups by single character -. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
6
549871

```
### 输出样例 #1

```cpp
54-98-71
```


### 输入样例 #2

```cpp
7
1198733

```
### 输出样例 #2

```cpp
11-987-33

```
