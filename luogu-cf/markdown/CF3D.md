# Least Cost Bracket Sequence

## 题意翻译

给一个序列，序列里面会有左括号、问号、右括号。对于一个‘？’而言，可以将其替换为一个‘（’，也可以替换成一个‘）’，但是都有相应的代价。问：如何替换使得代价最小。前提是替换之后的序列中，括号是匹配的。如果不能替换为一个括号匹配的序列则输出-1。

------------

### 输入

第一行是序列，序列长度不超过5.10^4，下面m(m是？的数量)行有每行2个数据，第一个是**'（'**的代价，第2个是**'）'**的代价

### 输出：第一行打印代价，第二行打印替换后的序列。不行输出-1

Translated by @liyifeng

## 题目描述

This is yet another problem on regular bracket sequences.

A bracket sequence is called regular, if by inserting "+" and "1" into it we get a correct mathematical expression. For example, sequences "(())()", "()" and "(()(()))" are regular, while ")(", "(()" and "(()))(" are not. You have a pattern of a bracket sequence that consists of characters "(", ")" and "?". You have to replace each character "?" with a bracket so, that you get a regular bracket sequence.

For each character "?" the cost of its replacement with "(" and ")" is given. Among all the possible variants your should choose the cheapest.

## 输入输出格式

### 输入格式

The first line contains a non-empty pattern of even length, consisting of characters "(", ")" and "?". Its length doesn't exceed $ 5·10^{4} $ . Then there follow $ m $ lines, where $ m $ is the number of characters "?" in the pattern. Each line contains two integer numbers $ a_{i} $ and $ b_{i} $ ( $ 1<=a_{i},b_{i}<=10^{6} $ ), where $ a_{i} $ is the cost of replacing the $ i $ -th character "?" with an opening bracket, and $ b_{i} $ — with a closing one.

### 输出格式

Print the cost of the optimal regular bracket sequence in the first line, and the required sequence in the second.

Print -1, if there is no answer. If the answer is not unique, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
(??)
1 2
2 8

```
### 输出样例 #1

```cpp
4
()()

```
