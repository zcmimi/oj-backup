# Three Base Stations

## 题意翻译

一句话题意：给定一条直线上n个点（可能重合），现在你有3个基地，你可以选择在三个地方放置这三个基地，每个基地有一个属性值d，假设将一个基地放在t的位置，那么他可以辐射到[t-d,t+d]范围内的所有的点，现在要你求出最小的d，以及这三个基地放置的位置，保留6位小数

## 题目描述

The New Vasjuki village is stretched along the motorway and that's why every house on it is characterized by its shift relative to some fixed point — the $ x_{i} $ coordinate. The village consists of $ n $ houses, the $ i $ -th house is located in the point with coordinates of $ x_{i} $ .

TELE3, a cellular communication provider planned to locate three base stations so as to provide every house in the village with cellular communication. The base station having power $ d $ located in the point $ t $ provides with communication all the houses on the segment $ [t-d,t+d] $ (including boundaries).

To simplify the integration (and simply not to mix anything up) all the three stations are planned to possess the equal power of $ d $ . Which minimal value of $ d $ is enough to provide all the houses in the village with cellular communication.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=2·10^{5} $ ) which represents the number of houses in the village. The second line contains the coordinates of houses — the sequence $ x_{1},x_{2},...,x_{n} $ of integer numbers ( $ 1<=x_{i}<=10^{9} $ ). It is possible that two or more houses are located on one point. The coordinates are given in a arbitrary order.

### 输出格式

Print the required minimal power $ d $ . In the second line print three numbers — the possible coordinates of the base stations' location. Print the coordinates with 6 digits after the decimal point. The positions of the stations can be any from $ 0 $ to $ 2·10^{9} $ inclusively. It is accepted for the base stations to have matching coordinates. If there are many solutions, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
4
1 2 3 4

```
### 输出样例 #1

```cpp
0.500000
1.500000 2.500000 3.500000

```
### 输入样例 #2

```cpp
3
10 20 30

```
### 输出样例 #2

```cpp
0
10.000000 20.000000 30.000000

```
### 输入样例 #3

```cpp
5
10003 10004 10001 10002 1

```
### 输出样例 #3

```cpp
0.500000
1.000000 10001.500000 10003.500000

```
