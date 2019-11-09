# Spelling Check

## 题意翻译

Petya发现，当他用键盘打字时，他经常多打出一个字母。他想要发明一个自动改正单词的程序，能够将他打出的单词删去一个字母，改为字典中对应的正确单词。请你帮助他写一个程序，从打出的单词中删去哪一个字母，才能改为字典中的那个单词？

输入输出格式

输入格式：

输入包含两个字符串，字符串中只含有小写字母。每个字符串长度不超过10^6，第一个字符串总是比第二个的字符数多1。

输出格式：

输出的第一行应为改正的方案总数。在第二行以增序输出每一种方案被删除字母的位置（字母从1开始编号），如果不能通过删除一个字母的方式改正，则输出0。

Translated by @handahao 

## 题目描述

Petya has noticed that when he types using a keyboard, he often presses extra buttons and adds extra letters to the words. Of course, the spell-checking system underlines the words for him and he has to click every word and choose the right variant. Petya got fed up with correcting his mistakes himself, that’s why he decided to invent the function that will correct the words itself. Petya started from analyzing the case that happens to him most of the time, when all one needs is to delete one letter for the word to match a word from the dictionary. Thus, Petya faces one mini-task: he has a printed word and a word from the dictionary, and he should delete one letter from the first word to get the second one. And now the very non-trivial question that Petya faces is: which letter should he delete?

## 输入输出格式

### 输入格式

The input data contains two strings, consisting of lower-case Latin letters. The length of each string is from $ 1 $ to $ 10^{6} $ symbols inclusive, the first string contains exactly $ 1 $ symbol more than the second one.

### 输出格式

In the first line output the number of positions of the symbols in the first string, after the deleting of which the first string becomes identical to the second one. In the second line output space-separated positions of these symbols in increasing order. The positions are numbered starting from $ 1 $ . If it is impossible to make the first string identical to the second string by deleting one symbol, output one number $ 0 $ .

## 输入输出样例

### 输入样例 #1

```cpp
abdrakadabra
abrakadabra

```
### 输出样例 #1

```cpp
1
3

```
### 输入样例 #2

```cpp
aa
a

```
### 输出样例 #2

```cpp
2
1 2

```
### 输入样例 #3

```cpp
competition
codeforces

```
### 输出样例 #3

```cpp
0

```
