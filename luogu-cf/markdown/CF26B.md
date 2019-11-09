# Regular Bracket Sequence

## 题意翻译

给出一个括号的序列，求最长的合法的子序列并输出。

原序列的长度

Translated by 稀神探女

## 题目描述

A bracket sequence is called regular if it is possible to obtain correct arithmetic expression by inserting characters «+» and «1» into this sequence. For example, sequences «(())()», «()» and «(()(()))» are regular, while «)(», «(()» and «(()))(» are not.

One day Johnny got bracket sequence. He decided to remove some of the brackets from it in order to obtain a regular bracket sequence. What is the maximum length of a regular bracket sequence which can be obtained?

## 输入输出格式

### 输入格式

Input consists of a single line with non-empty string of «(» and «)» characters. Its length does not exceed $ 10^{6} $ .

### 输出格式

Output the maximum possible length of a regular bracket sequence.

## 输入输出样例

### 输入样例 #1

```cpp
(()))(

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
((()())

```
### 输出样例 #2

```cpp
6

```
