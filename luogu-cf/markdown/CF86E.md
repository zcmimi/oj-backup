# Long sequence

## 题目描述

A sequence $ a_{0},a_{1},... $ is called a recurrent binary sequence, if each term $ a_{i} $ $ (i=0,1,...) $ is equal to 0 or 1 and there exist coefficients ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF86E/4a34536159949a9ab9513f40b0fa6f71f8e25cc5.png) such that

$ a_{n}=c_{1}·a_{n-1}+c_{2}·a_{n-2}+...+c_{k}·a_{n-k}\ (mod\ 2), $ for all $ n>=k $ . Assume that not all of $ c_{i} $ are zeros.Note that such a sequence can be uniquely recovered from any $ k $ -tuple $ {a_{s},a_{s+1},...,a_{s+k-1}} $ and so it is periodic. Moreover, if a $ k $ -tuple contains only zeros, then the sequence contains only zeros, so this case is not very interesting. Otherwise the minimal period of the sequence is not greater than $ 2^{k}-1 $ , as $ k $ -tuple determines next element, and there are $ 2^{k}-1 $ non-zero $ k $ -tuples. Let us call a sequence long if its minimal period is exactly $ 2^{k}-1 $ . Your task is to find a long sequence for a given $ k $ , if there is any.

## 输入输出格式

### 输入格式

Input contains a single integer $ k $ ( $ 2<=k<=50 $ ).

### 输出格式

If there is no long sequence for a given $ k $ , output "-1" (without quotes). Otherwise the first line of the output should contain $ k $ integer numbers: $ c_{1},c_{2},...,c_{k} $ (coefficients). The second line should contain first $ k $ elements of the sequence: $ a_{0},a_{1},...,a_{k-1} $ . All of them (elements and coefficients) should be equal to 0 or 1, and at least one $ c_{i} $ has to be equal to 1.

If there are several solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
1 1
1 0

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
0 1 1
1 1 1

```
## 说明

1\. In the first sample: $ c_{1}=1 $ , $ c_{2}=1 $ , so $ a_{n}=a_{n-1}+a_{n-2}\ (mod\ 2) $ . Thus the sequence will be:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF86E/912635ecee4595ec8a08c4fc9af41871119bb40b.png)so its period equals $ 3=2^{2}-1 $ .

2\. In the second sample: $ c_{1}=0 $ , $ c_{2}=1 $ , $ c_{3}=1 $ , so $ a_{n}=a_{n-2}+a_{n-3}\ (mod\ 2) $ . Thus our sequence is:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF86E/2fea09c3d1bbe470004e6ccd52eac13ebf7eeb8e.png)and its period equals $ 7=2^{3}-1 $ .

Periods are colored.

