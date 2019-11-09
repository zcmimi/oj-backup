# Ring road

## 题意翻译

###### 题目

目前，世界各地都引入单向交通（单行道），以提高行车安全，减少交通堵塞。政府决定跟上新趋势。假设该地有n座城市，每座城市都有一个编号，分别为1,2,3,...,n。以前所有的城市都是由n条双向道路连接起来的，即每个城市都直接连接到另外两个城市，而且每个城市都有可以到达其他任何城市。现在政府在所有公路上都引入单向交通，但很快就清楚地表明，从一些城市到其他城市是不可能的。于是政府需要重新规划一些道路的交通方向以解决该问题。现在已知，每条道路的交通方向是什么方向，也知道对该条路进行重新定向的成本。那么政府最少需要花多少钱来重新定向道路，这样以使从每个城市你可以到达其他任何城市吗？

###### 输入格式

第一行，一个整数n(3<=n<=100)

第2~n+1行，每行三个整数，分别表示该条道路的起点城市编号，终点城市编号，以及对该条道路进行重新定向的成本。

###### 输出格式

一个整数，表示最少的钱。

Translated by FCBM71

## 题目描述

Nowadays the one-way traffic is introduced all over the world in order to improve driving safety and reduce traffic jams. The government of Berland decided to keep up with new trends. Formerly all $ n $ cities of Berland were connected by $ n $ two-way roads in the ring, i. e. each city was connected directly to exactly two other cities, and from each city it was possible to get to any other city. Government of Berland introduced one-way traffic on all $ n $ roads, but it soon became clear that it's impossible to get from some of the cities to some others. Now for each road is known in which direction the traffic is directed at it, and the cost of redirecting the traffic. What is the smallest amount of money the government should spend on the redirecting of roads so that from every city you can get to any other?

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 3<=n<=100 $ ) — amount of cities (and roads) in Berland. Next $ n $ lines contain description of roads. Each road is described by three integers $ a_{i} $ , $ b_{i} $ , $ c_{i} $ ( $ 1<=a_{i},b_{i}<=n,a_{i}≠b_{i},1<=c_{i}<=100 $ ) — road is directed from city $ a_{i} $ to city $ b_{i} $ , redirecting the traffic costs $ c_{i} $ .

### 输出格式

Output single integer — the smallest amount of money the government should spend on the redirecting of roads so that from every city you can get to any other.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 3 1
1 2 1
3 2 1

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
3
1 3 1
1 2 5
3 2 1

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
6
1 5 4
5 3 8
2 4 15
1 6 16
2 3 23
4 6 42

```
### 输出样例 #3

```cpp
39

```
### 输入样例 #4

```cpp
4
1 2 9
2 3 8
3 4 7
4 1 5

```
### 输出样例 #4

```cpp
0

```
