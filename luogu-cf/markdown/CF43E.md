# Race

## 题意翻译

【题目大意】 汽车赛有n辆车，共s千米。每辆车在不同时间段的速度不同，第i辆车在第j 段时间的速度为vij，并持续tij小时。所有车在同一时刻出发，现要求整场比赛中的总共超车次数，数据保证不会有两辆车在同一时间在同一位置且速度相同。

输入：

第一行2个正整数n 、s（2<=n<=100 , 1<=s<=1000000）（意义见题目描述）

接下来n行每行第一个正整数k（1<=k<=100），表示 第i 辆车一共有k 个时间段，接着2k个数vij 、 tij （vij , tij <=1000 )（意义见题目描述），保证每辆车最后恰好到达终点。

输出：

一个数，总共超车次数。

感谢@林则徐 提供的翻译

## 题目描述

Today $ s $ kilometer long auto race takes place in Berland. The track is represented by a straight line as long as $ s $ kilometers. There are $ n $ cars taking part in the race, all of them start simultaneously at the very beginning of the track. For every car is known its behavior — the system of segments on each of which the speed of the car is constant. The $ j $ -th segment of the $ i $ -th car is pair $ (v_{i,j},t_{i,j}) $ , where $ v_{i,j} $ is the car's speed on the whole segment in kilometers per hour and $ t_{i,j} $ is for how many hours the car had been driving at that speed. The segments are given in the order in which they are "being driven on" by the cars.

Your task is to find out how many times during the race some car managed to have a lead over another car. A lead is considered a situation when one car appears in front of another car. It is known, that all the leads happen instantly, i. e. there are no such time segment of positive length, during which some two cars drive "together". At one moment of time on one and the same point several leads may appear. In this case all of them should be taken individually. Meetings of cars at the start and finish are not considered to be counted as leads.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ s $ ( $ 2<=n<=100,1<=s<=10^{6} $ ) — the number of cars and the length of the track in kilometers. Then follow $ n $ lines — the description of the system of segments for each car. Every description starts with integer $ k $ ( $ 1<=k<=100 $ ) — the number of segments in the system. Then $ k $ space-separated pairs of integers are written. Each pair is the speed and time of the segment. These integers are positive and don't exceed 1000. It is guaranteed, that the sum of lengths of all segments (in kilometers) for each car equals to $ s $ ; and all the leads happen instantly.

### 输出格式

Print the single number — the number of times some car managed to take the lead over another car during the race.

## 输入输出样例

### 输入样例 #1

```cpp
2 33
2 5 1 2 14
1 3 11

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
2 33
2 1 3 10 3
1 11 3

```
### 输出样例 #2

```cpp
0

```
### 输入样例 #3

```cpp
5 33
2 1 3 3 10
1 11 3
2 5 3 3 6
2 3 1 10 3
2 6 3 3 5

```
### 输出样例 #3

```cpp
2

```
