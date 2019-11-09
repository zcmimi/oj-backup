# Volleyball

## 题意翻译

给出一个图，双向边，边上有权值代表路的距离，然后每个点上有两个值，t,c，t代表能从这个点最远沿边走t，且不能在半路下来，花费是c

现在告诉你起点终点，问最少的花费

点个数1000，边个数1000，边权1e9

By @partychicken 

## 题目描述

Petya loves volleyball very much. One day he was running late for a volleyball match. Petya hasn't bought his own car yet, that's why he had to take a taxi. The city has $ n $ junctions, some of which are connected by two-way roads. The length of each road is defined by some positive integer number of meters; the roads can have different lengths.

Initially each junction has exactly one taxi standing there. The taxi driver from the $ i $ -th junction agrees to drive Petya (perhaps through several intermediate junctions) to some other junction if the travel distance is not more than $ t_{i} $ meters. Also, the cost of the ride doesn't depend on the distance and is equal to $ c_{i} $ bourles. Taxis can't stop in the middle of a road. Each taxi can be used no more than once. Petya can catch taxi only in the junction, where it stands initially.

At the moment Petya is located on the junction $ x $ and the volleyball stadium is on the junction $ y $ . Determine the minimum amount of money Petya will need to drive to the stadium.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 1<=n<=1000,0<=m<=1000) $ . They are the number of junctions and roads in the city correspondingly. The junctions are numbered from $ 1 $ to $ n $ , inclusive. The next line contains two integers $ x $ and $ y $ ( $ 1<=x,y<=n $ ). They are the numbers of the initial and final junctions correspondingly. Next $ m $ lines contain the roads' description. Each road is described by a group of three integers $ u_{i} $ , $ v_{i} $ , $ w_{i} $ ( $ 1<=u_{i},v_{i}<=n,1<=w_{i}<=10^{9} $ ) — they are the numbers of the junctions connected by the road and the length of the road, correspondingly. The next $ n $ lines contain $ n $ pairs of integers $ t_{i} $ and $ c_{i} $ ( $ 1<=t_{i},c_{i}<=10^{9} $ ), which describe the taxi driver that waits at the $ i $ -th junction — the maximum distance he can drive and the drive's cost. The road can't connect the junction with itself, but between a pair of junctions there can be more than one road. All consecutive numbers in each line are separated by exactly one space character.

### 输出格式

If taxis can't drive Petya to the destination point, print "-1" (without the quotes). Otherwise, print the drive's minimum cost.

Please do not use the %lld specificator to read or write 64-bit integers in С++. It is preferred to use cin, cout streams or the %I64d specificator.

## 输入输出样例

### 输入样例 #1

```cpp
4 4
1 3
1 2 3
1 4 1
2 4 1
2 3 5
2 7
7 2
1 2
7 7

```
### 输出样例 #1

```cpp
9

```
## 说明

An optimal way — ride from the junction 1 to 2 (via junction 4), then from 2 to 3. It costs 7+2=9 bourles.

