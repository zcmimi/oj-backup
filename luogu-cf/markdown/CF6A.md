# Triangle

## 题意翻译

## 要求

给定4根木棍的长度，如果它们中存在3根木棍可以组成三角形，输出"TRIANGLE"；如果它们无法组成三角形，但是它们中存在3根木棍可以组成退化的三角形(任意两边之和大于等于第三边，但是不是三角形)，输出"SEGMENT"；否则，输出"IMPOSSIBLE"。

注意: 木棍不能折断，也不能只用一部分长度。

## 输入

一行4个整数，4根木棍的长度。

## 输出

如果它们中存在3根木棍可以组成三角形，输出"TRIANGLE"；如果它们无法组成三角形，但是它们中存在3根木棍可以组成退化的三角形，输出"SEGMENT"；否则，输出"IMPOSSIBLE"。

By @PC_DOS

## 题目描述

Johnny has a younger sister Anne, who is very clever and smart. As she came home from the kindergarten, she told his brother about the task that her kindergartener asked her to solve. The task was just to construct a triangle out of four sticks of different colours. Naturally, one of the sticks is extra. It is not allowed to break the sticks or use their partial length. Anne has perfectly solved this task, now she is asking Johnny to do the same.

The boy answered that he would cope with it without any difficulty. However, after a while he found out that different tricky things can occur. It can happen that it is impossible to construct a triangle of a positive area, but it is possible to construct a degenerate triangle. It can be so, that it is impossible to construct a degenerate triangle even. As Johnny is very lazy, he does not want to consider such a big amount of cases, he asks you to help him.

## 输入输出格式

### 输入格式

The first line of the input contains four space-separated positive integer numbers not exceeding 100 — lengthes of the sticks.

### 输出格式

Output TRIANGLE if it is possible to construct a non-degenerate triangle. Output SEGMENT if the first case cannot take place and it is possible to construct a degenerate triangle. Output IMPOSSIBLE if it is impossible to construct any triangle. Remember that you are to use three sticks. It is not allowed to break the sticks or use their partial length.

## 输入输出样例

### 输入样例 #1

```cpp
4 2 1 3

```
### 输出样例 #1

```cpp
TRIANGLE

```
### 输入样例 #2

```cpp
7 2 2 4

```
### 输出样例 #2

```cpp
SEGMENT

```
### 输入样例 #3

```cpp
3 5 9 1

```
### 输出样例 #3

```cpp
IMPOSSIBLE

```
