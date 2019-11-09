# Eternal Victory

## 题意翻译

## 题目描述

经历了一场激烈的战斗之后，Valerian被Shapur抓住了。这个胜利是如此的伟大，以至于Shapur决定把Valerian的失败（也就是他的胜利）的场景雕刻在山上。所以他必须找到最好的地方使他的胜利永远被保存。

他决定到波斯的n个城市去寻找可以使用的最好的山，但是战斗后他太累了，所以不想走太多的路。因此，他希望以最短的路径走遍所有的n个城市。某些城市以双向道路相连。你可以通过这些道路从一个城市到另一个城市。在两个城市间最多只有一条双向道路。所有城市被从1到n编号。

Shapur目前在城市1，他想以最短的路径访问所有其他城市。他可以在任何城市结束他的旅行。

帮助Shapur算出他最少要走多远的路。

## 输入输出格式

### 输入格式

第一行为一个数字n，表示城市的数量。

接下来的n-1行，每行有三个数字x[i],y[i],w[i],表示一条连接两个城市的双向道路。其中x[i]和y[i]分别表示路所连接的两个城市，w[i]表示这条路的长度。

### 输出格式

输出只有一个数字，为Shapur遍历n个城市所需走过的最短距离。

注意：C++语言请不要使用%I64d来输出64位整数。请优先考虑使用cout（也可以使用%lld）来输出。

感谢@Simpson561 提供的翻译

## 题目描述

Valerian was captured by Shapur. The victory was such a great one that Shapur decided to carve a scene of Valerian's defeat on a mountain. So he had to find the best place to make his victory eternal!

He decided to visit all $ n $ cities of Persia to find the best available mountain, but after the recent war he was too tired and didn't want to traverse a lot. So he wanted to visit each of these $ n $ cities at least once with smallest possible traverse. Persian cities are connected with bidirectional roads. You can go from any city to any other one using these roads and there is a unique path between each two cities.

All cities are numbered $ 1 $ to $ n $ . Shapur is currently in the city $ 1 $ and he wants to visit all other cities with minimum possible traverse. He can finish his travels in any city.

Help Shapur find how much He should travel.

## 输入输出格式

### 输入格式

First line contains a single natural number $ n $ ( $ 1<=n<=10^{5} $ ) — the amount of cities.

Next $ n-1 $ lines contain $ 3 $ integer numbers each $ x_{i} $ , $ y_{i} $ and $ w_{i} $ ( $ 1<=x_{i},y_{i}<=n,0<=w_{i}<=2×10^{4} $ ). $ x_{i} $ and $ y_{i} $ are two ends of a road and $ w_{i} $ is the length of that road.

### 输出格式

A single integer number, the minimal length of Shapur's travel.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2 3
2 3 4

```
### 输出样例 #1

```cpp
7

```
### 输入样例 #2

```cpp
3
1 2 3
1 3 3

```
### 输出样例 #2

```cpp
9

```
