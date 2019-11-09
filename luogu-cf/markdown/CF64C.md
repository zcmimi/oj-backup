# Table【卡语言已隐藏】

## 题意翻译

题目描述

将从1到n*m的数字按 从左往右 的顺序填入一个n行m列的矩阵里。

这样，第一行就应该是1,2,3，……，m；第二行是m+1，m+2，m+3，……2m。

接着， 从上往下 给数字编号。请输出编号为k的数字。

输入输出格式

输入：仅一行：n，m，k（1≤n，m≤20000，1≤k≤nm）；

输出：仅一行：编号为k的数。

## 题目描述

The integer numbers from $ 1 $ to $ nm $ was put into rectangular table having $ n $ rows and $ m $ columns. The numbers was put from left to right, from top to bottom, i.e. the first row contains integers $ 1,2,...,m $ , the second — $ m+1,m+2,...,2*m $ and so on.

After it these numbers was written on the paper in another order: from top to bottom, from left to right. First, the numbers in the first column was written (from top to bottom) and so on.

Print the $ k $ -th number on the paper.

## 输入输出格式

### 输入格式

The only line in the input contains three integer numbers $ n $ , $ m $ and $ k $ ( $ 1<=n,m<=20000 $ , $ 1<=k<=nm $ ).

### 输出格式

Print the required number.

## 输入输出样例

### 输入样例 #1

```cpp
3 4 11

```
### 输出样例 #1

```cpp
8

```
### 输入样例 #2

```cpp
20000 10000 200000000

```
### 输出样例 #2

```cpp
200000000

```
