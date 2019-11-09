# Director

## 题意翻译

题目描述

给出$n$个名字和$n$个附名，请你将名字和附名两两配对，使得首字母相同的名字对数最多，并以最小字典序输出。

输入格式

第一行一个正整数$n(1 \leq n \leq 100)$

接下来$n$行每行一个长度不超过$10$的字符串描述一个名字。接下来$n$行每行一个长度不超过$10$的字符串描述一个附名。数据保证字符串两两不同，字符串的第一个字母为大写拉丁字母，其余为小写拉丁字母

输出格式

一行，输出满足题意的名字配对。输出格式为

$Name_1\ Surname_1,\ Name_2\ Surname_2,\ ... \,,\ Name_n\ Surname_n$

其中$Name_i$与$Surname_i$为一对配对的名字与附名，其间用一个空格隔开。每一对名字之间用一个逗号加一个空格隔开。$Surname_n$之后不能出现额外的空格或者逗号

## 题目描述

Vasya is a born Berland film director, he is currently working on a new blockbuster, "The Unexpected". Vasya knows from his own experience how important it is to choose the main characters' names and surnames wisely. He made up a list of $ n $ names and $ n $ surnames that he wants to use. Vasya haven't decided yet how to call characters, so he is free to match any name to any surname. Now he has to make the list of all the main characters in the following format: " $ Name_{1} $ $ Surname_{1} $ , $ Name_{2} $ $ Surname_{2} $ , $ ... $ , $ Name_{n} $ $ Surname_{n} $ ", i.e. all the name-surname pairs should be separated by exactly one comma and exactly one space, and the name should be separated from the surname by exactly one space. First of all Vasya wants to maximize the number of the pairs, in which the name and the surname start from one letter. If there are several such variants, Vasya wants to get the lexicographically minimal one. Help him.

An answer will be verified a line in the format as is shown above, including the needed commas and spaces. It's the lexicographical minimality of such a line that needs to be ensured. The output line shouldn't end with a space or with a comma.

## 输入输出格式

### 输入格式

The first input line contains number $ n $ ( $ 1<=n<=100 $ ) — the number of names and surnames. Then follow $ n $ lines — the list of names. Then follow $ n $ lines — the list of surnames. No two from those $ 2n $ strings match. Every name and surname is a non-empty string consisting of no more than 10 Latin letters. It is guaranteed that the first letter is uppercase and the rest are lowercase.

### 输出格式

The output data consist of a single line — the needed list. Note that one should follow closely the output data format!

## 输入输出样例

### 输入样例 #1

```cpp
4
Ann
Anna
Sabrina
John
Petrov
Ivanova
Stoltz
Abacaba

```
### 输出样例 #1

```cpp
Ann Abacaba, Anna Ivanova, John Petrov, Sabrina Stoltz
```


### 输入样例 #2

```cpp
4
Aa
Ab
Ac
Ba
Ad
Ae
Bb
Bc

```
### 输出样例 #2

```cpp
Aa Ad, Ab Ae, Ac Bb, Ba Bc
```


