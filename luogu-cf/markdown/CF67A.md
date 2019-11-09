# Partial Teacher

## 题意翻译

有n个正整数a1,...,an，给出ai和ai+1的大小关系序列s1...sn−1，si为=,L,R分别表示ai等于、大于、小于ai+1，求满足条件的序列中这n个数的和最小对应的序列

## 题目描述

A teacher decides to give toffees to his students. He asks $ n $ students to stand in a queue. Since the teacher is very partial, he follows the following rule to distribute toffees.

He looks at the first two students and gives more toffees to the student having higher marks than the other one. If they have the same marks they get the same number of toffees. The same procedure is followed for each pair of adjacent students starting from the first one to the last one.

It is given that each student receives at least one toffee. You have to find the number of toffees given to each student by the teacher such that the total number of toffees is minimum.

## 输入输出格式

### 输入格式

The first line of input contains the number of students $ n $ ( $ 2<=n<=1000 $ ). The second line gives ( $ n-1 $ ) characters consisting of "L", "R" and "=". For each pair of adjacent students "L" means that the left student has higher marks, "R" means that the right student has higher marks and "=" means that both have equal marks.

### 输出格式

Output consists of $ n $ integers separated by a space representing the number of toffees each student receives in the queue starting from the first one to the last one.

## 输入输出样例

### 输入样例 #1

```cpp
5
LRLR

```
### 输出样例 #1

```cpp
2 1 2 1 2

```
### 输入样例 #2

```cpp
5
=RRR

```
### 输出样例 #2

```cpp
1 1 2 3 4

```
