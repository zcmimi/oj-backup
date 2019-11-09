# Points

## 题意翻译

在一个笛卡尔坐标系中，定义三种操作:

1.add x y :在坐标系上标记一个点（x，y）,保证（x，y）在添加前不在坐标系上.

2.remove x y :移除点（x，y）,保证（x，y）在移除前已在坐标系上.

3.find x y :找到所有已标记并在（x，y）右上方的点中,最左边的点，若点不唯一,选择最下面的一个点; 如果没有符合要求的点,给出"-1",否则给出x y.

现有n( n<=2*10^5 )个操作,对于每个find操作,输出结果.

## 题目描述

Pete and Bob invented a new interesting game. Bob takes a sheet of paper and locates a Cartesian coordinate system on it as follows: point $ (0,0) $ is located in the bottom-left corner, $ Ox $ axis is directed right, $ Oy $ axis is directed up. Pete gives Bob requests of three types:

- add x y — on the sheet of paper Bob marks a point with coordinates $ (x,y) $ . For each request of this type it's guaranteed that point $ (x,y) $ is not yet marked on Bob's sheet at the time of the request.

- remove x y — on the sheet of paper Bob erases the previously marked point with coordinates $ (x,y) $ . For each request of this type it's guaranteed that point $ (x,y) $ is already marked on Bob's sheet at the time of the request.

- find x y — on the sheet of paper Bob finds all the marked points, lying strictly above and strictly to the right of point $ (x,y) $ . Among these points Bob chooses the leftmost one, if it is not unique, he chooses the bottommost one, and gives its coordinates to Pete.

Bob managed to answer the requests, when they were 10, 100 or 1000, but when their amount grew up to $ 2·10^{5} $ , Bob failed to cope. Now he needs a program that will answer all Pete's requests. Help Bob, please!

## 输入输出格式

### 输入格式

The first input line contains number $ n $ ( $ 1<=n<=2·10^{5} $ ) — amount of requests. Then there follow $ n $ lines — descriptions of the requests. add x y describes the request to add a point, remove x y — the request to erase a point, find x y — the request to find the bottom-left point. All the coordinates in the input file are non-negative and don't exceed $ 10^{9} $ .

### 输出格式

For each request of type find x y output in a separate line the answer to it — coordinates of the bottommost among the leftmost marked points, lying strictly above and to the right of point $ (x,y) $ . If there are no points strictly above and to the right of point $ (x,y) $ , output -1.

## 输入输出样例

### 输入样例 #1

```cpp
7
add 1 1
add 3 4
find 0 0
remove 1 1
find 0 0
add 1 1
find 0 0

```
### 输出样例 #1

```cpp
1 1
3 4
1 1

```
### 输入样例 #2

```cpp
13
add 5 5
add 5 6
add 5 7
add 6 5
add 6 6
add 6 7
add 7 5
add 7 6
add 7 7
find 6 6
remove 7 7
find 6 6
find 4 4

```
### 输出样例 #2

```cpp
7 7
-1
5 5

```
