# Cottage Village

## 题意翻译

题目描述：给定一坐标轴，轴上有n座房子，每座房子的位置是xi，边长是ai，有个人想要贴着其中一座房子建造他自己的一座边长为t的房子，输出共有多少种建法

输入:第一行两个整数n,t,之后n行分别有两个整数xi和ai

输出:见题目描述

注意：xi为每座房子的中心坐标

1<=n,t<=1000

−1000<=xi<=1000

1<=ai<=1000

感谢 @稀神探女 提供的翻译。

## 题目描述

A new cottage village called «Flatville» is being built in Flatland. By now they have already built in «Flatville» $n$ square houses with the centres on the $Ox$ -axis. The houses' sides are parallel to the coordinate axes. It's known that no two houses overlap, but they can touch each other.

The architect bureau, where Peter works, was commissioned to build a new house in «Flatville». The customer wants his future house to be on the $Ox$ -axis, to be square in shape, have a side $ t $ , and touch at least one of the already built houses. For sure, its sides should be parallel to the coordinate axes, its centre should be on the $ Ox $ -axis and it shouldn't overlap any of the houses in the village.

Peter was given a list of all the houses in «Flatville». Would you help him find the amount of possible positions of the new house?

## 输入输出格式

### 输入格式

The first line of the input data contains numbers $ n $ and $ t $ ( $ 1<=n,t<=1000 $ ). Then there follow $ n $ lines, each of them contains two space-separated integer numbers: $ x_{i} $ $ a_{i} $ , where $ x_{i} $ — $ x $ -coordinate of the centre of the $ i $ -th house, and $ a_{i} $ — length of its side ( $ -1000<=x_{i}<=1000 $ , $ 1<=a_{i}<=1000 $ ).

### 输出格式

Output the amount of possible positions of the new house.

## 输入输出样例

### 输入样例 #1

```cpp
2 2
0 4
6 2

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
2 2
0 4
5 2

```
### 输出样例 #2

```cpp
3

```
### 输入样例 #3

```cpp
2 3
0 4
5 2

```
### 输出样例 #3

```cpp
2

```
## 说明

It is possible for the $ x $ -coordinate of the new house to have non-integer value.

