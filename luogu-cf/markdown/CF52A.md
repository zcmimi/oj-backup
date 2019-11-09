# 123-sequence

## 题意翻译

有一个给定整数序列a{1}、a{2}、……、a_{n} 序列中每一个元素都是从1~3中的任意一个。您必须从其中替换尽可能少的元素，以使序列中的所有数字都相等。

## 题目描述

There is a given sequence of integers $ a_{1},a_{2},...,a_{n} $ , where every number is from 1 to 3 inclusively. You have to replace the minimum number of numbers in it so that all the numbers in the sequence are equal to each other.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=10^{6} $ ). The second line contains a sequence of integers $ a_{1},a_{2},...,a_{n} $ ( $ 1<=a_{i}<=3 $ ).

### 输出格式

Print the minimum number of replacements needed to be performed to make all the numbers in the sequence equal.

## 输入输出样例

### 输入样例 #1

```cpp
9
1 3 2 2 2 1 1 2 3

```
### 输出样例 #1

```cpp
5

```
## 说明

In the example all the numbers equal to 1 and 3 should be replaced by 2.

