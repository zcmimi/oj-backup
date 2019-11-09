# The least round way

## 题意翻译

题目描述

给定由非负整数组成的$n \times n$ 的正方形矩阵，你需要寻找一条路径：

以左上角为起点

每次只能向右或向下走

以右下角为终点

并且，如果我们把沿路遇到的数进行相乘，积应当是最小“round”，换句话说，应当以最小数目的0的结尾.

输入格式

第一行包含一个整数 n ($2 \leq n \leq 1000$)，n 为矩阵的规模，接下来的n行包含矩阵的元素（不超过10^9的非负整数）.

输出格式

第一行应包含最小尾0的个数，第二行打印出相应的路径（译注：D为下，R为右）

## 题目描述

There is a square matrix $ n×n $ , consisting of non-negative integer numbers. You should find such a way on it that

- starts in the upper left cell of the matrix;

- each following cell is to the right or down from the current cell;

- the way ends in the bottom right cell.

Moreover, if we multiply together all the numbers along the way, the result should be the least "round". In other words, it should end in the least possible number of zeros.

## 输入输出格式

### 输入格式

The first line contains an integer number $ n $ ( $ 2<=n<=1000 $ ), $ n $ is the size of the matrix. Then follow $ n $ lines containing the matrix elements (non-negative integer numbers not exceeding $ 10^{9} $ ).

### 输出格式

In the first line print the least number of trailing zeros. In the second line print the correspondent way itself.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2 3
4 5 6
7 8 9

```
### 输出样例 #1

```cpp
0
DDRR

```
