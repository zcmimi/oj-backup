# Company Income Growth

## 题意翻译

题目描述

给出一个长度为$n$的序列$a_i(i \in [1,N])$，求一个最长的递增序列$b_i$，设其长度为$K$，则有$\forall i \in [1,K] , a_{b_i-2000}=i$

输入格式

第一行一个正整数$n(1 \leq n \leq 100)$表示序列长度

第二行$n$个整数$a_i(-100 \leq a_i \leq 100)$

输出格式

第一行一个非负整数$K$表示$b_i$的长度

接下来$K$个正整数描述序列$b_i$

## 题目描述

Petya works as a PR manager for a successful Berland company BerSoft. He needs to prepare a presentation on the company income growth since $ 2001 $ (the year of its founding) till now. Petya knows that in $ 2001 $ the company income amounted to $ a_{1} $ billion bourles, in $ 2002 $ — to $ a_{2} $ billion, ..., and in the current $ (2000+n) $ -th year — $ a_{n} $ billion bourles. On the base of the information Petya decided to show in his presentation the linear progress history which is in his opinion perfect. According to a graph Petya has already made, in the first year BerSoft company income must amount to $ 1 $ billion bourles, in the second year — $ 2 $ billion bourles etc., each following year the income increases by $ 1 $ billion bourles. Unfortunately, the real numbers are different from the perfect ones. Among the numbers $ a_{i} $ can even occur negative ones that are a sign of the company’s losses in some years. That is why Petya wants to ignore some data, in other words, cross some numbers $ a_{i} $ from the sequence and leave only some subsequence that has perfect growth.

Thus Petya has to choose a sequence of years $ y_{1} $ , $ y_{2} $ , ..., $ y_{k} $ ,so that in the year $ y_{1} $ the company income amounted to $ 1 $ billion bourles, in the year $ y_{2} $ — $ 2 $ billion bourles etc., in accordance with the perfect growth dynamics. Help him to choose the longest such sequence.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ). The next line contains $ n $ integers $ a_{i} $ ( $ -100<=a_{i}<=100 $ ). The number $ a_{i} $ determines the income of BerSoft company in the $ (2000+i) $ -th year. The numbers in the line are separated by spaces.

### 输出格式

Output $ k $ — the maximum possible length of a perfect sequence. In the next line output the sequence of years $ y_{1} $ , $ y_{2} $ , ..., $ y_{k} $ . Separate the numbers by spaces. If the answer is not unique, output any. If no solution exist, output one number $ 0 $ .

## 输入输出样例

### 输入样例 #1

```cpp
10
-2 1 1 3 2 3 4 -10 -2 5

```
### 输出样例 #1

```cpp
5
2002 2005 2006 2007 2010

```
### 输入样例 #2

```cpp
3
-1 -2 -3

```
### 输出样例 #2

```cpp
0

```
