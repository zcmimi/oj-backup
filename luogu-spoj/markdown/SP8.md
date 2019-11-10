# CMPLS - Complete the Sequence!

## 题意翻译

给定一个数列 P(n)，这个数列的通项公式可表示为:

P(n)=a$_{i}$ $\cdot$ $n^{i}$+a$_{i-1}$ $\cdot$ $n^{i−1}$+ ... +a$_{1}$ $\cdot$ n+a$_{0}$。

现在给出这个数列的前S个数, 求这个数列接下来的后C项。

注意：输出可能的数中最小的。

输入:第一行数据组数t，之后每组数据分别有S，C和数列的前S项。

输出：对于每一组数据，输出接下来的C项。

t<=5000,S<=100,C<=100,S+C

Translated by @稀神探女

## 题目描述

 You probably know those quizzes in Sunday magazines: given the sequence 1, 2, 3, 4, 5, what is the next number? Sometimes it is very easy to answer, sometimes it could be pretty hard. Because these "sequence problems" are very popular, ACM wants to implement them into the "Free Time" section of their new WAP portal.

ACM programmers have noticed that some of the quizzes can be solved by describing the sequence by polynomials. For example, the sequence 1, 2, 3, 4, 5 can be easily understood as a trivial polynomial. The next number is 6. But even more complex sequences, like 1, 2, 4, 7, 11, can be described by a polynomial. In this case, 1/2.n $ ^{2} $ -1/2.n+1 can be used. Note that even if the members of the sequence are integers, polynomial coefficients may be any real numbers.

Polynomial is an expression in the following form:

P(n) = a $ _{D} $ .n $ ^{D} $ +a $ _{D-1} $ .n $ ^{D-1} $ +...+a $ _{1} $ .n+a $ _{0} $

If a $ _{D} $  0, the number D is called a _degree_ of the polynomial. Note that constant function P(n) = C can be considered as polynomial of degree 0, and the zero function P(n) = 0 is usually defined to have degree -1.

## 输入输出格式

### 输入格式

 There is a single positive integer T on the first line of input (equal to about 5000). It stands for the number of test cases to follow. Each test case consists of two lines. First line of each test case contains two integer numbers S and C separated by a single space, 1 <= S < 100, 1 <= C < 100, (S+C) <= 100. The first number, S, stands for the length of the given sequence, the second number, C is the amount of numbers you are to find to complete the sequence.

The second line of each test case contains S integer numbers X $ _{1} $ , X $ _{2} $ , ... X $ _{S} $ separated by a space. These numbers form the given sequence. The sequence can always be described by a polynomial P(n) such that for every i, X $ _{i} $ = P(i). Among these polynomials, we can find the polynomial P $ _{min} $ with the lowest possible degree. This polynomial should be used for completing the sequence.

### 输出格式

 For every test case, your program must print a single line containing C integer numbers, separated by a space. These numbers are the values completing the sequence according to the polynomial of the lowest possible degree. In other words, you are to print values P $ _{min} $ (S+1), P $ _{min} $ (S+2), .... P $ _{min} $ (S+C).

It is guaranteed that the results P $ _{min} $ (S+i) will be non-negative and will fit into the standard _integer_ type.

## 输入输出样例

### 输入样例 #1

```cpp
4
6 3
1 2 3 4 5 6
8 2
1 2 4 7 11 16 22 29
10 2
1 1 1 1 1 1 1 1 1 2
1 10
3
```


### 输出样例 #1

```cpp
7 8 9
37 46
11 56
3 3 3 3 3 3 3 3 3 3
```


## 说明

**Warning: large Input/Output data, be careful with certain languages**

