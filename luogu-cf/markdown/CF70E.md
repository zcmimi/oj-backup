# Information Reform

## 题意翻译

题目描述：

尽管现在已经是21世纪了，但是大众传播媒介在$Walrusland$依然没有普及开来。这里的城市通过能够在城市间的道路来往的信使来互相传递消息。在$Walrusland$，城市间的道路保证信使可以从一座城市到任意另一座城市，而且这些道路是等长的。

北极政府决定实施一项信息改革。几座城市被选中成为区域信息中心。维护一座区域信息中心每年需要花费$k$个$fishlar$（这是当地的货币）。假设每座区域信息中心总是能即时获得最新的消息。

每一座不是区域信息中心的城市，都会被安排通过一座区域信息中心来保持信息通达。这样，每年维护费用将会等于$d_{len} \ $个$fishlar$，其中$len$表示这座城市到它的区域信息中心的距离，即一个人从这座城市到它的区域信息中心需要走过的道路条数。

你的任务是求出实行这项改革的最小开销。

输入格式：

第一行包含两个给定的整数$n$和$k$（$1<=n<=180$，$1<=k<=10^{5}$）；

第二行包含$n-1$个整数$d_i$，下标从$1$开始。（$d_{i}<=d_{i+1},0<=d_{i}<=10^{5}$）

接下来的$n-1$行包含被一条道路连接的城市对。

输出格式：

第一行，输出每年维护信息联系的最小花销。（单位：$fishlar$）；

第二行，输出$n$个整数，第$i$个整数代表第$i$座城市所由编号为$a_i$的区域信息中心的负责；如果第$i$座城市是一座区域信息中心，你只需输出数字$i$。

如果此题有多解，只需输出任意一组。

翻译 By @若如初见

## 题目描述

Thought it is already the XXI century, the Mass Media isn't very popular in Walrusland. The cities get news from messengers who can only travel along roads. The network of roads in Walrusland is built so that it is possible to get to any city from any other one in exactly one way, and the roads' lengths are equal.

The North Pole governor decided to carry out an information reform. Several cities were decided to be chosen and made regional centers. Maintaining a region center takes $ k $ fishlars (which is a local currency) per year. It is assumed that a regional center always has information on the latest news.

For every city which is not a regional center, it was decided to appoint a regional center which will be responsible for keeping this city informed. In that case the maintenance costs will be equal to $ d_{len} $ fishlars per year, where $ len $ is the distance from a city to the corresponding regional center, measured in the number of roads along which one needs to go.

Your task is to minimize the costs to carry out the reform.

## 输入输出格式

### 输入格式

The first line contains two given numbers $ n $ and $ k $ ( $ 1<=n<=180,1<=k<=10^{5} $ ).

The second line contains $ n-1 $ integers $ d_{i} $ , numbered starting with 1 ( $ d_{i}<=d_{i+1},0<=d_{i}<=10^{5} $ ).

Next $ n-1 $ lines contain the pairs of cities connected by a road.

### 输出格式

On the first line print the minimum number of fishlars needed for a year's maintenance. On the second line print $ n $ numbers, where the $ i $ -th number will represent the number of the regional center, appointed to the $ i $ -th city. If the $ i $ -th city is a regional center itself, then you should print number $ i $ .

If there are several solutions to that problem, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
8 10
2 5 9 11 15 19 20
1 4
1 3
1 7
4 6
2 8
2 3
3 5

```
### 输出样例 #1

```cpp
38
3 3 3 4 3 4 3 3 
```


