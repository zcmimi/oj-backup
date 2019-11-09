# Right Triangles

## 题意翻译

题意：输入一个nm的矩阵，只包含‘.’和‘’两种字符。你的任务是数出所有的“Right Triangle”。‘Right Triangle’的定义是该三角形有两条边平行于矩阵的边界，并且直角点落在‘*’的中心。一个'Right Triangle'是有一个直角的三角形。

输入：第一行两个整数n,m，接下来是该矩阵

输出：一个数，整个矩阵上'Right Triangle'的个数。请c++选手不要使用%lld（p选手不要用%l64d），用cout会更好（建议来自原题）

翻译贡献者：qwerta

## 题目描述

You are given a $ n×m $ field consisting only of periods ('.') and asterisks ('\*'). Your task is to count all right triangles with two sides parallel to the square sides, whose vertices are in the centers of '\*'-cells. A right triangle is a triangle in which one angle is a right angle (that is, a 90 degree angle).

## 输入输出格式

### 输入格式

The first line contains two positive integer numbers $ n $ and $ m $ ( $ 1<=n,m<=1000 $ ). The following $ n $ lines consist of $ m $ characters each, describing the field. Only '.' and '\*' are allowed.

### 输出格式

Output a single number — total number of square triangles in the field. Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
2 2
**
*.

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
3 4
*..*
.**.
*.**

```
### 输出样例 #2

```cpp
9

```
