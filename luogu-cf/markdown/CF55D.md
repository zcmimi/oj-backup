# Beautiful numbers

## 题意翻译

题目描述

Volodya是一个很皮的男♂孩。他认为一个能被它自己的每一位数上的数整除的数是很妙的。我们先忽略他的想法的正确性（如需证明请百度“神奇海螺”），只回答在l到r之间有多少个很妙的数字。

输入输出格式

输入：总共有t个询问：

第一行：t；

接下来t行：每行两个数l和r。

注意：请勿使用%lld读写长整型（虽然我也不知道为什么），请优先使用cin（或者是%I64d）。

输出：t行，每行为一个询问的答案。

## 题目描述

Volodya is an odd boy and his taste is strange as well. It seems to him that a positive integer number is beautiful if and only if it is divisible by each of its nonzero digits. We will not argue with this and just count the quantity of beautiful numbers in given ranges.

## 输入输出格式

### 输入格式

The first line of the input contains the number of cases $ t $ ( $ 1<=t<=10 $ ). Each of the next $ t $ lines contains two natural numbers $ l_{i} $ and $ r_{i} $ ( $ 1<=l_{i}<=r_{i}<=9·10^{18} $ ).

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cin (also you may use %I64d).

### 输出格式

Output should contain $ t $ numbers — answers to the queries, one number per line — quantities of beautiful numbers in given intervals (from $ l_{i} $ to $ r_{i} $ , inclusively).

## 输入输出样例

### 输入样例 #1

```cpp
1
1 9

```
### 输出样例 #1

```cpp
9

```
### 输入样例 #2

```cpp
1
12 15

```
### 输出样例 #2

```cpp
2

```
