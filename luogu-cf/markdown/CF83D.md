# Numbers

## 题意翻译

给出三个整数 $l,r,k$( $1 \le l \le r \le 2 \cdot 10^9, 2 \le k \le 2 \cdot 10^9$ )。

求在区间 $[l,r]$ 内满足 $k \mid i$ ， 且对于任意 $j \in [2,k-1]$ 都**不满足** $k \mid i$ 的数 $i$ 的个数。

## 题目描述

One quite ordinary day Valera went to school (there's nowhere else he should go on a week day). In a maths lesson his favorite teacher Ms. Evans told students about divisors. Despite the fact that Valera loved math, he didn't find this particular topic interesting. Even more, it seemed so boring that he fell asleep in the middle of a lesson. And only a loud ringing of a school bell could interrupt his sweet dream.

Of course, the valuable material and the teacher's explanations were lost. However, Valera will one way or another have to do the homework. As he does not know the new material absolutely, he cannot do the job himself. That's why he asked you to help. You're his best friend after all, you just cannot refuse to help.

Valera's home task has only one problem, which, though formulated in a very simple way, has not a trivial solution. Its statement looks as follows: if we consider all positive integers in the interval $ [a;b] $ then it is required to count the amount of such numbers in this interval that their smallest divisor will be a certain integer $ k $ (you do not have to consider divisor equal to one). In other words, you should count the amount of such numbers from the interval $ [a;b] $ , that are not divisible by any number between $ 2 $ and $ k-1 $ and yet are divisible by $ k $ .

## 输入输出格式

### 输入格式

The first and only line contains three positive integers $ a $ , $ b $ , $ k $ ( $ 1<=a<=b<=2·10^{9},2<=k<=2·10^{9} $ ).

### 输出格式

Print on a single line the answer to the given problem.

## 输入输出样例

### 输入样例 #1

```cpp
1 10 2

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
12 23 3

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
6 19 5

```
### 输出样例 #3

```cpp
0

```
## 说明

Comments to the samples from the statement:

In the first sample the answer is numbers $ 2,4,6,8,10 $ .

In the second one — $ 15,21 $

In the third one there are no such numbers.

