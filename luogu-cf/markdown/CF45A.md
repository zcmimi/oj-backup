# Codecraft III

## 题意翻译

 ## 题目大意

给你一个月份，问你$k$个月后的月份

月份列表：January, February, March, April, May, June, July, August, September, October, November, December

输入第一行一个字符串$s$（保证字符串是像列表中那样第一个字母大写，后面小写），第二行一个整数$k$（$1\leq k\leq100$）

输出一个字符串，表示$k$个月后的月份

（PS：题面的故事在讲这个人等题目的这个游戏发布）

Translated by Khassar

## 题目描述

Today Vasya visited a widely known site and learned that the continuation of his favourite game Codecraft II will appear after exactly $ k $ months. He looked at the calendar and learned that at the moment is the month number $ s $ . Vasya immediately got interested in what month Codecraft III will appear. Help him understand that.

All the twelve months in Vasya's calendar are named using their usual English names: January, February, March, April, May, June, July, August, September, October, November, December.

## 输入输出格式

### 输入格式

The first input line contains the name of the current month. It is guaranteed that it is a proper English name of one of twelve months. The first letter is uppercase, the rest are lowercase. The second line contains integer $ k $ ( $ 0<=k<=100 $ ) — the number of months left till the appearance of Codecraft III.

### 输出格式

Print starting from an uppercase letter the name of the month in which the continuation of Codeforces II will appear. The printed name must be contained in the list January, February, March, April, May, June, July, August, September, October, November, December.

## 输入输出样例

### 输入样例 #1

```cpp
November
3

```
### 输出样例 #1

```cpp
February

```
### 输入样例 #2

```cpp
May
24

```
### 输出样例 #2

```cpp
May

```
