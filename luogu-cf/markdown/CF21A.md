# Jabber ID

## 题意翻译

题目大意

一个地址由@[/resource]组成，其中[/resource]可以被省略。

字段允许大写、小写字母，数字、下划线，其长度应在1到16。

字段允许用.来分隔。每一段的要求同字段，分隔出的每一部分长度在1到16，<hostname字段的总长度在1到32。 字段要求同字段。

给出一个地址，询问是否合法。

输入输出格式

输入格式

一行，一个字符串，表示一个地址（保证地址的字符的ASCII在33到127间），地址长度不超过100字符

输出格式

一行，如果合法输出YES，否则输出NO

## 题目描述

Jabber ID on the national Berland service «Babber» has a form @\[/resource\], where

-  — is a sequence of Latin letters (lowercase or uppercase), digits or underscores characters «\_», the length of  is between 1 and 16, inclusive.

-  — is a sequence of word separated by periods (characters «.»), where each word should contain only characters allowed for , the length of each word is between 1 and 16, inclusive. The length of  is between 1 and 32, inclusive.

-  — is a sequence of Latin letters (lowercase or uppercase), digits or underscores characters «\_», the length of  is between 1 and 16, inclusive.

The content of square brackets is optional — it can be present or can be absent.

There are the samples of correct Jabber IDs: mike@codeforces.com, 007@en.codeforces.com/contest.

Your task is to write program which checks if given string is a correct Jabber ID.

## 输入输出格式

### 输入格式

The input contains of a single line. The line has the length between 1 and 100 characters, inclusive. Each characters has ASCII-code between 33 and 127, inclusive.

### 输出格式

Print YES or NO.

## 输入输出样例

### 输入样例 #1

```cpp
mike@codeforces.com

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
john.smith@codeforces.ru/contest.icpc/12

```
### 输出样例 #2

```cpp
NO

```
