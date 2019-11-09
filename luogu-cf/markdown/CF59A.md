# Word

## 题意翻译

给定一个字符串要求改变最少的字符使这个字符串中只有大写字母或小写字母，如果大写字符与小写字符个数一样，就全变为小写字符

## 题目描述

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

## 输入输出格式

### 输入格式

The first line contains a word $ s $ — it consists of uppercase and lowercase Latin letters and possesses the length from $ 1 $ to $ 100 $ .

### 输出格式

Print the corrected word $ s $ . If the given word $ s $ has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

## 输入输出样例

### 输入样例 #1

```cpp
HoUse

```
### 输出样例 #1

```cpp
house

```
### 输入样例 #2

```cpp
ViP

```
### 输出样例 #2

```cpp
VIP

```
### 输入样例 #3

```cpp
maTRIx

```
### 输出样例 #3

```cpp
matrix

```
