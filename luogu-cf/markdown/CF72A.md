# Goshtasp, Vishtasp and Eidi

## 题目描述

Goshtasp was known to be a good programmer in his school. One day Vishtasp, Goshtasp's friend, asked him to solve this task:

Given a positive integer $ n $ , you should determine whether $ n $ is rich.

The positive integer $ x $ is rich, if there exists some set of distinct numbers $ a_{1},a_{2},...,a_{m} $ such that ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF72A/09b62a380622bf350fdb1e207b542ef3ba702c3f.png). In addition: every $ a_{i} $ should be either a prime number, or equal to $ 1 $ .

Vishtasp said that he would share his Eidi $ 50/50 $ with Goshtasp, if he could solve the task. Eidi is money given to children for Noruz by their parents and/or relatives.

Goshtasp needs to solve this problem to get money, you need to solve it to get score!

## 输入输出格式

### 输入格式

Input contains a single positive integer $ n $ ( $ 1<=n<=10000 $ ).

### 输出格式

If the number is not rich print $ 0 $ . Otherwise print the numbers $ a_{1},...,a_{m} $ . If several solutions exist print the lexicographically latest solution. Answers are compared as sequences of numbers, not as strings.

For comparing two sequences $ a_{1},...,a_{m} $ and $ b_{1},...,b_{n} $ we first find the first index $ i $ such that $ a_{i}≠b_{i} $ , if $ a_{i}&lt;b_{i} $ then $ a $ is lexicographically earlier and if $ b_{i}&lt;a_{i} $ then $ b $ is lexicographically earlier. If $ m≠n $ we add zeroes at the end of the smaller sequence (only for the moment of comparison) and then perform the comparison.

You do not need to minimize the number of elements in sequence (i.e. $ m $ ). You just need to print the lexicographically latest solution.

See samples to find out how to print the sequence.

## 输入输出样例

### 输入样例 #1

```cpp
11

```
### 输出样例 #1

```cpp
11=11

```
### 输入样例 #2

```cpp
545

```
### 输出样例 #2

```cpp
541+3+1=545

```
