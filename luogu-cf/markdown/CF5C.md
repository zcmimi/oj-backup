# Longest Regular Bracket Sequence

## 题意翻译

给出一个括号序列，求出最长合法子串和它的数量。

合法的定义：这个序列中左右括号匹配

## 题目描述

This is yet another problem dealing with regular bracket sequences.

We should remind you that a bracket sequence is called regular, if by inserting «+» and «1» into it we can get a correct mathematical expression. For example, sequences «(())()», «()» and «(()(()))» are regular, while «)(», «(()» and «(()))(» are not.

You are given a string of «(» and «)» characters. You are to find its longest substring that is a regular bracket sequence. You are to find the number of such substrings as well.

## 输入输出格式

### 输入格式

The first line of the input file contains a non-empty string, consisting of «(» and «)» characters. Its length does not exceed $ 10^{6} $ .

### 输出格式

Print the length of the longest substring that is a regular bracket sequence, and the number of such substrings. If there are no such substrings, write the only line containing "0 1".

## 输入输出样例

### 输入样例 #1

```cpp
)((())))(()())

```
### 输出样例 #1

```cpp
6 2

```
### 输入样例 #2

```cpp
))(

```
### 输出样例 #2

```cpp
0 1

```
