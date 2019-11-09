# Road Problem

## 题目描述

The Berland capital (as you very well know) contains $ n $ junctions, some pairs of which are connected by two-way roads. Unfortunately, the number of traffic jams in the capital has increased dramatically, that's why it was decided to build several new roads. Every road should connect two junctions.

The city administration noticed that in the cities of all the developed countries between any two roads one can drive along at least two paths so that the paths don't share any roads (but they may share the same junction). The administration decided to add the minimal number of roads so that this rules was fulfilled in the Berland capital as well. In the city road network should exist no more than one road between every pair of junctions before or after the reform.

## 输入输出格式

### 输入格式

The first input line contains a pair of integers $ n $ , $ m $ ( $ 2<=n<=900,1<=m<=100000 $ ), where $ n $ is the number of junctions and $ m $ is the number of roads. Each of the following $ m $ lines contains a description of a road that is given by the numbers of the connected junctions $ a_{i},b_{i} $ ( $ 1<=a_{i},b_{i}<=n,a_{i}≠b_{i} $ ). The junctions are numbered from 1 to $ n $ . It is possible to reach any junction of the city from any other one moving along roads.

### 输出格式

On the first line print $ t $ — the number of added roads. Then on $ t $ lines print the descriptions of the added roads in the format of the input data. You can use any order of printing the roads themselves as well as the junctions linked by every road. If there are several solutions to that problem, print any of them.

If the capital doesn't need the reform, print the single number 0.

If there's no solution, print the single number -1.

## 输入输出样例

### 输入样例 #1

```cpp
4 3
1 2
2 3
3 4

```
### 输出样例 #1

```cpp
1
1 4

```
### 输入样例 #2

```cpp
4 4
1 2
2 3
2 4
3 4

```
### 输出样例 #2

```cpp
1
1 3

```
