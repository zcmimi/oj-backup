# Table Bowling【卡语言已隐藏】

## 题目描述

Table bowling tournament participant completed the competition according to the given final standings table. The table is given as a sequence of lines, each line has a format "name score". Your task is to prepare another table consisting of lines in the form "place name". Sort participant by score (desc.) and by the name lexicographically in the case of a tie. Places are numerated from 1. If more than one participant has some score, all of them share the places and you should output something like "12-14 john".

Please, look into the samples for clarification.

## 输入输出格式

### 输入格式

The first line contains $ n $ ( $ 1<=n<=100 $ ) — the number of rows in the table. Following $ n $ lines contain the given table. Each line has the form "name score", where "name" is a sequence of lowercase Latin letters, and "score" — is an integer number between 0 and 1000, inclusive. All the names are distinct. The length of each name is between 1 and 10 characters, inclusive. There is single space between the name and the score in each line.

### 输出格式

Print the required table. Look at the sample outputs for clarifications.

## 输入输出样例

### 输入样例 #1

```cpp
5
vasya 10
ted 11
petya 10
katya 33
mike 44

```
### 输出样例 #1

```cpp
1 mike
2 katya
3 ted
4-5 petya
4-5 vasya

```
### 输入样例 #2

```cpp
3
a 1
b 13
c 1

```
### 输出样例 #2

```cpp
1 b
2-3 a
2-3 c

```
