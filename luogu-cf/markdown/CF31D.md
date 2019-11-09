# Chocolate

## 题意翻译

## Description

给你一个$W~\times~H$的巧克力。将它对应到笛卡尔坐标系下，则左下角对应点$(0,0)$，右上角对应点$(W,H)$。现在将这块巧克力用$n$刀切割，保证每刀都平行于坐标轴。$n$刀过后这块巧克力被分成了几部分，请求出这几部分的面积分别是几。保证切完以后不存在只被切了一部分的巧克力。即对于任意一部分巧克力内部不存在刀口。

## Input

第一行是三个整数$W,H,n$。下面$n$行，每行四个整数为每一刀的起始坐标和终止坐标。保证这两个坐标要么$x$相同要么$y$相同。保证数据合法。

## Output

直接按照不降序输出每一块的面积

## HInt

$0~\leq~n~,~W~,~H~\leq~100$

## 题目描述

Bob has a rectangular chocolate bar of the size $ W×H $ . He introduced a cartesian coordinate system so that the point $ (0,0) $ corresponds to the lower-left corner of the bar, and the point $ (W,H) $ corresponds to the upper-right corner. Bob decided to split the bar into pieces by breaking it. Each break is a segment parallel to one of the coordinate axes, which connects the edges of the bar. More formally, each break goes along the line $ x=x_{c} $ or $ y=y_{c} $ , where $ x_{c} $ and $ y_{c} $ are integers. It should divide one part of the bar into two non-empty parts. After Bob breaks some part into two parts, he breaks the resulting parts separately and independently from each other. Also he doesn't move the parts of the bar. Bob made $ n $ breaks and wrote them down in his notebook in arbitrary order. At the end he got $ n+1 $ parts. Now he wants to calculate their areas. Bob is lazy, so he asks you to do this task.

## 输入输出格式

### 输入格式

The first line contains 3 integers $ W $ , $ H $ and $ n $ ( $ 1<=W,H,n<=100 $ ) — width of the bar, height of the bar and amount of breaks. Each of the following $ n $ lines contains four integers $ x_{i,1},y_{i,1},x_{i,2},y_{i,2} $ — coordinates of the endpoints of the $ i $ -th break ( $ 0<=x_{i,1}<=x_{i,2}<=W,0<=y_{i,1}<=y_{i,2}<=H $ , or $ x_{i,1}=x_{i,2} $ , or $ y_{i,1}=y_{i,2} $ ). Breaks are given in arbitrary order.

It is guaranteed that the set of breaks is correct, i.e. there is some order of the given breaks that each next break divides exactly one part of the bar into two non-empty parts.

### 输出格式

Output $ n+1 $ numbers — areas of the resulting parts in the increasing order.

## 输入输出样例

### 输入样例 #1

```cpp
2 2 2
1 0 1 2
0 1 1 1

```
### 输出样例 #1

```cpp
1 1 2 
```


### 输入样例 #2

```cpp
2 2 3
1 0 1 2
0 1 1 1
1 1 2 1

```
### 输出样例 #2

```cpp
1 1 1 1 
```


### 输入样例 #3

```cpp
2 4 2
0 1 2 1
0 3 2 3

```
### 输出样例 #3

```cpp
2 2 4 
```


