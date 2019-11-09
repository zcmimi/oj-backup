# Oranges and Apples

## 题意翻译

题目描述：已知有2N-1个箱子，每个箱子里有一些烂苹果和橘子。你的任务是从中选择N个箱子使得这N个箱子中的烂苹果数目不小于总数的一半，橘子数目也不小于总数的一半。

输入：第一行一个整数t，表示数据组数，之后对于每组数据先有一个整数N，后2N-1行每行两个整数代表该箱子中烂苹果和橘子的数量。

输出:对于每组数据，若不存在合法方案则输出"NO",否则输出"YES",并在下面的N行输出选择箱子的编号（从1开始编号）

Translated by 稀神探女

## 题目描述

In $ 2N-1 $ boxes there are apples and oranges. Your task is to choose $ N $ boxes so, that they will contain not less than half of all the apples and not less than half of all the oranges.

## 输入输出格式

### 输入格式

The first input line contains one number $ T $ — amount of tests. The description of each test starts with a natural number $ N $ — amount of boxes. Each of the following $ 2N-1 $ lines contains numbers $ a_{i} $ and $ o_{i} $ — amount of apples and oranges in the $ i $ -th box ( $ 0<=a_{i},o_{i}<=10^{9} $ ). The sum of $ N $ in all the tests in the input doesn't exceed $ 10^{5} $ . All the input numbers are integer.

### 输出格式

For each test output two lines. In the first line output YES, if it's possible to choose $ N $ boxes, or NO otherwise. If the answer is positive output in the second line $ N $ numbers — indexes of the chosen boxes. Boxes are numbered from 1 in the input order. Otherwise leave the second line empty. Separate the numbers with one space.

## 输入输出样例

### 输入样例 #1

```cpp
2
2
10 15
5 7
20 18
1
0 0

```
### 输出样例 #1

```cpp
YES
1 3
YES
1

```
