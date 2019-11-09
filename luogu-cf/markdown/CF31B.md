# Sysadmin Bob

## 题意翻译

题目描述:给定一字符串s，请你将其分割为若干条由"A@B"构成的信息（A,B为字符串）

输入:一个字符串

输出:若不存在合法方案，输出"No solution"，否则输出用","分割的若干条信息，答案可能不唯一，随意输出一个就好

1<=s.l<=200

感谢@稀神探女 提供的翻译 

## 题目描述

Email address in Berland is a string of the form $ A $ @ $ B $ , where $ A $ and $ B $ are arbitrary strings consisting of small Latin letters.

Bob is a system administrator in «Bersoft» company. He keeps a list of email addresses of the company's staff. This list is as a large string, where all addresses are written in arbitrary order, separated by commas. The same address can be written more than once.

Suddenly, because of unknown reasons, all commas in Bob's list disappeared. Now Bob has a string, where all addresses are written one after another without any separators, and there is impossible to determine, where the boundaries between addresses are. Unfortunately, on the same day his chief asked him to bring the initial list of addresses. Now Bob wants to disjoin addresses in some valid way. Help him to do that.

## 输入输出格式

### 输入格式

The first line contains the list of addresses without separators. The length of this string is between $ 1 $ and $ 200 $ , inclusive. The string consists only from small Latin letters and characters «@».

### 输出格式

If there is no list of the valid (according to the Berland rules) email addresses such that after removing all commas it coincides with the given string, output No solution. In the other case, output the list. The same address can be written in this list more than once. If there are several solutions, output any of them.

## 输入输出样例

### 输入样例 #1

```cpp
a@aa@a

```
### 输出样例 #1

```cpp
a@a,a@a

```
### 输入样例 #2

```cpp
a@a@a

```
### 输出样例 #2

```cpp
No solution

```
### 输入样例 #3

```cpp
@aa@a

```
### 输出样例 #3

```cpp
No solution

```
