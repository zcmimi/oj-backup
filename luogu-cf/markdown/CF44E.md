# Anfisa the Monkey

## 题意翻译

给定一个字符串，要求将它分为k行长度>=a并<=b的部分，输出这些被划分出来的部分，没有符合要求的划分就输出"No solution"

## 题目描述

Anfisa the monkey learns to type. She is yet unfamiliar with the "space" key and can only type in lower-case Latin letters. Having typed for a fairly long line, Anfisa understood that it would be great to divide what she has written into $ k $ lines not shorter than $ a $ and not longer than $ b $ , for the text to resemble human speech more. Help Anfisa.

## 输入输出格式

### 输入格式

The first line contains three integers $ k $ , $ a $ and $ b $ ( $ 1<=k<=200 $ , $ 1<=a<=b<=200 $ ). The second line contains a sequence of lowercase Latin letters — the text typed by Anfisa. It is guaranteed that the given line is not empty and its length does not exceed $ 200 $ symbols.

### 输出格式

Print $ k $ lines, each of which contains no less than $ a $ and no more than $ b $ symbols — Anfisa's text divided into lines. It is not allowed to perform any changes in the text, such as: deleting or adding symbols, changing their order, etc. If the solution is not unique, print any of them. If there is no solution, print "No solution" (without quotes).

## 输入输出样例

### 输入样例 #1

```cpp
3 2 5
abrakadabra

```
### 输出样例 #1

```cpp
ab
rakad
abra

```
### 输入样例 #2

```cpp
4 1 2
abrakadabra

```
### 输出样例 #2

```cpp
No solution

```
