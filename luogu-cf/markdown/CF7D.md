# Palindrome Degree

## 题意翻译

一个长度为n字符串s被叫做k阶级回文串，当且仅当它本身是一个回文串，而且它长度为n/2（向下取整）的前缀和后缀都是k-1阶级回文串。任何一个字符串（包括空字符串）都至少是0阶级字符串。举例来说，"abaaba"是3阶级字符串

现在给定你一字符串，请你求出其所有前缀的的阶级之和

字符串长度<= $5*10^6$

## 题目描述

String $ s $ of length $ n $ is called $ k $ -palindrome, if it is a palindrome itself, and its prefix and suffix of length ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF7D/f337f976991ac53405b164907ebe1f51ebb0830e.png) are $ (k-1) $ -palindromes. By definition, any string (even empty) is 0-palindrome.

Let's call the palindrome degree of string $ s $ such a maximum number $ k $ , for which $ s $ is $ k $ -palindrome. For example, "abaaba" has degree equals to $ 3 $ .

You are given a string. Your task is to find the sum of the palindrome degrees of all its prefixes.

## 输入输出格式

### 输入格式

The first line of the input data contains a non-empty string, consisting of Latin letters and digits. The length of the string does not exceed $ 5·10^{6} $ . The string is case-sensitive.

### 输出格式

Output the only number — the sum of the polindrome degrees of all the string's prefixes.

## 输入输出样例

### 输入样例 #1

```cpp
a2A

```
### 输出样例 #1

```cpp
1
```


### 输入样例 #2

```cpp
abacaba

```
### 输出样例 #2

```cpp
6
```


