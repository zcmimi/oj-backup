# Extra-terrestrial Intelligence

## 题意翻译

给定一01序列，试问其中的'1'是否等距.若等距则输出"YES",否则输出"NO";

3<=n<=100

Translated by @稀神探女

**input: input.txt**

**output: output.txt**

## 题目描述

Recently Vasya got interested in finding extra-terrestrial intelligence. He made a simple extra-terrestrial signals’ receiver and was keeping a record of the signals for $ n $ days in a row. Each of those $ n $ days Vasya wrote a 1 in his notebook if he had received a signal that day and a 0 if he hadn’t. Vasya thinks that he has found extra-terrestrial intelligence if there is a system in the way the signals has been received, i.e. if all the intervals between successive signals are equal. Otherwise, Vasya thinks that the signals were sent by some stupid aliens no one cares about. Help Vasya to deduce from the information given by the receiver if he has found extra-terrestrial intelligence or not.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 3<=n<=100 $ ) — amount of days during which Vasya checked if there were any signals. The second line contains $ n $ characters 1 or 0 — the record Vasya kept each of those $ n $ days. It’s guaranteed that the given record sequence contains at least three 1s.

### 输出格式

If Vasya has found extra-terrestrial intelligence, output YES, otherwise output NO.

## 输入输出样例

### 输入样例 #1

```cpp
8
00111000

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
7
1001011

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
7
1010100

```
### 输出样例 #3

```cpp
YES

```
