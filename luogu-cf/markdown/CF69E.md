# Subsegments

## 题目描述

Programmer Sasha has recently begun to study data structures. His coach Stas told him to solve the problem of finding a minimum on the segment of the array in ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF69E/8d33f6dbc21a91477b8c6a86185f0b1fd0e74ad4.png), which Sasha coped with. For Sasha not to think that he had learned all, Stas gave him a new task. For each segment of the fixed length Sasha must find the maximum element of those that occur on the given segment exactly once. Help Sasha solve this problem.

## 输入输出格式

### 输入格式

The first line contains two positive integers $ n $ and $ k $ ( $ 1<=n<=10^{5},1<=k<=n $ ) — the number of array elements and the length of the segment.

Then follow $ n $ lines: the $ i $ -th one contains a single number $ a_{i} $ ( $ -10^{9}<=a_{i}<=10^{9} $ ).

### 输出格式

Print $ n–k+1 $ numbers, one per line: on the $ i $ -th line print of the maximum number of those numbers from the subarray $ a_{i} $ $ a_{i+1} $ … $ a_{i+k-1} $ that occur in this subarray exactly 1 time. If there are no such numbers in this subarray, print "Nothing".

## 输入输出样例

### 输入样例 #1

```cpp
5 3
1
2
2
3
3

```
### 输出样例 #1

```cpp
1
3
2

```
### 输入样例 #2

```cpp
6 4
3
3
3
4
4
2

```
### 输出样例 #2

```cpp
4
Nothing
3

```
