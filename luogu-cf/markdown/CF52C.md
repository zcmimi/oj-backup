# Circular RMQ

## 题意翻译

【题目大意】

给出环形数列a_0，a_1，...，a_n-1。它有两种操作：

inc（lf，rg，v）这个操作使[lf，rg]区间内的每一个值增加v；

rmq（lf，rg）这个操作返回[lf，rg]区间内的最小值。

假设区间是环形的，所以当n=5，lf=3，rg=1时，表示的序列编号为：3，4，0，1。

请编写程序执行这一系列操作。

【输入】

第一行有一个整数n。

第二行为数列的初始状态a_0，a_1，...，a_n-1，a_i是整数。

第三行有一个整数m，表示操作次数。

接下来m行每行为一个操作。如果该行有两个整数lf，rg表示rmq操作，如果该行有三个整数lf，rg，v表示inc操作。

【输出】

对于每个rmq操作输出一行答案。

【样例】

输入 4 1 2 3 4

4 3 0 3 0 -1 0 1 2 1 输出 1 0 0 【数据规模】

1<=n<=200000

-10^6<=a_i,v<=10^6

0<=m<=200000

0<=lf,rg<=n-1

## 题目描述

You are given circular array $ a_{0},a_{1},...,a_{n-1} $ . There are two types of operations with it:

- $ inc(lf,rg,v) $ — this operation increases each element on the segment $ [lf,rg] $ (inclusively) by $ v $ ;

- $ rmq(lf,rg) $ — this operation returns minimal value on the segment $ [lf,rg] $ (inclusively).

Assume segments to be circular, so if $ n=5 $ and $ lf=3,rg=1 $ , it means the index sequence: $ 3,4,0,1 $ .

Write program to process given sequence of operations.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=200000 $ ). The next line contains initial state of the array: $ a_{0},a_{1},...,a_{n-1} $ ( $ -10^{6}<=a_{i}<=10^{6} $ ), $ a_{i} $ are integer. The third line contains integer $ m $ ( $ 0<=m<=200000 $ ), $ m $ — the number of operartons. Next $ m $ lines contain one operation each. If line contains two integer $ lf,rg $ ( $ 0<=lf,rg<=n-1 $ ) it means $ rmq $ operation, it contains three integers $ lf,rg,v $ ( $ 0<=lf,rg<=n-1;-10^{6}<=v<=10^{6} $ ) — $ inc $ operation.

### 输出格式

For each $ rmq $ operation write result for it. Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
4
1 2 3 4
4
3 0
3 0 -1
0 1
2 1

```
### 输出样例 #1

```cpp
1
0
0

```
