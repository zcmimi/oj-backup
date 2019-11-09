# Domain【卡语言已隐藏】

## 题目描述

This problem doesn't contain real-world specifications about domains, just use the problem statement as a formal document to solve the problem.

The given string $ s $ is a domain name if it contains the characters "a"-"z", "0"-"9" and dots. No two dots shoud follow one after another (consecutive). The dots split the given string $ s $ into the parts, the last (most right) part should have the length 2 or 3. Domain can't start or end with a dot.

You are given the string $ s $ , check if it is domain name.

## 输入输出格式

### 输入格式

The only line of the input contains given string $ s $ . The string may contain any characters with ASCII codes from 33 to 127, inclusive. The string length is between 1 and 100, inclusive.

### 输出格式

Print "YES" if the given string $ s $ is a domain name, or print "NO" if it is not.

## 输入输出样例

### 输入样例 #1

```cpp
codeforces.com

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
mail.v-kontakte.ru

```
### 输出样例 #2

```cpp
NO

```
