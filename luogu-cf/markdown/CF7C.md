# Line

## 题意翻译

一条直线：Ax+By+C=0（AB不同时为0），找到任意一个点（在-5e18~5e18之间）让它的横纵坐标均为整数，或者确定没有这样的点。

输入：A，B，C

输出：该点坐标，没有就输出-1

## 题目描述

A line on the plane is described by an equation $ Ax+By+C=0 $ . You are to find any point on this line, whose coordinates are integer numbers from $ -5·10^{18} $ to $ 5·10^{18} $ inclusive, or to find out that such points do not exist.

## 输入输出格式

### 输入格式

The first line contains three integers $ A $ , $ B $ and $ C $ ( $ -2·10^{9}<=A,B,C0 $ .

### 输出格式

If the required point exists, output its coordinates, otherwise output -1.

## 输入输出样例

### 输入样例 #1

```cpp
2 5 3

```
### 输出样例 #1

```cpp
6 -3

```
