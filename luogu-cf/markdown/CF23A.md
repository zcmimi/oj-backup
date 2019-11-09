# You&#039;re Given a String...

## 题意翻译

大意：在所给字符串中找出最少出现两次的最长子串的长度

输入：这一定是非空的字符串，并由小写字母组成，长度不会超过100个字符。

输出：输出一个数。这个数是子串中最少出现两次的最长子串的长度。

Translated by @MS_CHEN

## 题目描述

You're given a string of lower-case Latin letters. Your task is to find the length of its longest substring that can be met in the string at least twice. These occurrences can overlap (see sample test 2).

## 输入输出格式

### 输入格式

The first input line contains the string. It's guaranteed, that the string is non-empty, consists of lower-case Latin letters, and its length doesn't exceed 100.

### 输出格式

Output one number — length of the longest substring that can be met in the string at least twice.

## 输入输出样例

### 输入样例 #1

```cpp
abcd

```
### 输出样例 #1

```cpp
0
```


### 输入样例 #2

```cpp
ababa

```
### 输出样例 #2

```cpp
3
```


### 输入样例 #3

```cpp
zzz

```
### 输出样例 #3

```cpp
2
```


