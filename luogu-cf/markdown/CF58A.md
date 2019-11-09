# Chat room

## 题意翻译

给定一个字符串使删除这个字符串的一些字符使它变成“hello”

## 题目描述

Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word $ s $ . It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word $ s $ .

## 输入输出格式

### 输入格式

The first and only line contains the word $ s $ , which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

### 输出格式

If Vasya managed to say hello, print "YES", otherwise print "NO".

## 输入输出样例

### 输入样例 #1

```cpp
ahhellllloou

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
hlelo

```
### 输出样例 #2

```cpp
NO

```
