# Blinds

## 题意翻译

有n条长度为a[i]宽度为1的横条，用这n个横条做一个百叶窗，百叶窗每行的横条长度均要相同且不小于l，横条可以切断但不能拼接，且百叶窗每行的横条长度为正整数，输出百叶窗的最大面积

## 题目描述

The blinds are known to consist of opaque horizontal stripes that can be rotated thus regulating the amount of light flowing in the room. There are $ n $ blind stripes with the width of 1 in the factory warehouse for blind production. The problem is that all of them are spare details from different orders, that is, they may not have the same length (it is even possible for them to have different lengths)

Every stripe can be cut into two or more parts. The cuttings are made perpendicularly to the side along which the length is measured. Thus the cuttings do not change the width of a stripe but each of the resulting pieces has a lesser length (the sum of which is equal to the length of the initial stripe)

After all the cuttings the blinds are constructed through consecutive joining of several parts, similar in length, along sides, along which length is measured. Also, apart from the resulting pieces an initial stripe can be used as a blind if it hasn't been cut. It is forbidden to construct blinds in any other way.

Thus, if the blinds consist of $ k $ pieces each $ d $ in length, then they are of form of a rectangle of $ k×d $ bourlemeters.

Your task is to find for what window possessing the largest possible area the blinds can be made from the given stripes if on technical grounds it is forbidden to use pieces shorter than $ l $ bourlemeter. The window is of form of a rectangle with side lengths as positive integers.

## 输入输出格式

### 输入格式

The first output line contains two space-separated integers $ n $ and $ l $ ( $ 1<=n,l<=100 $ ). They are the number of stripes in the warehouse and the minimal acceptable length of a blind stripe in bourlemeters. The second line contains space-separated $ n $ integers $ a_{i} $ . They are the lengths of initial stripes in bourlemeters ( $ 1<=a_{i}<=100 $ ).

### 输出格式

Print the single number — the maximal area of the window in square bourlemeters that can be completely covered. If no window with a positive area that can be covered completely without breaking any of the given rules exist, then print the single number $ 0 $ .

## 输入输出样例

### 输入样例 #1

```cpp
4 2
1 2 3 4

```
### 输出样例 #1

```cpp
8

```
### 输入样例 #2

```cpp
5 3
5 5 7 3 1

```
### 输出样例 #2

```cpp
15

```
### 输入样例 #3

```cpp
2 3
1 2

```
### 输出样例 #3

```cpp
0

```
## 说明

In the first sample test the required window is $ 2×4 $ in size and the blinds for it consist of 4 parts, each 2 bourlemeters long. One of the parts is the initial stripe with the length of 2, the other one is a part of a cut stripe with the length of 3 and the two remaining stripes are parts of a stripe with the length of 4 cut in halves.

