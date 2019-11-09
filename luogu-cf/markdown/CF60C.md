# Mushroom Strife

## 题意翻译

### 题目描述

$Pasha$ 和 $Akim$ 正在制作一张森林地图：草坪是地图的顶点，连接草坪的道路是地图的边。

他们决定通过以下方式对每个草坪上蘑菇的数量进行编码：在两个草坪之间的边上，写下两个数字，即两个草坪蘑菇数量的最大公约数和最小公倍数。

但是有一天， $Pasha$ 和 $Akim$ 争吵了起来，并撕毁了地图。

$Pasha$ 只剩下其中的一部分，共有 $m$ 条路。请帮助 $Pasha$ 使用他已知的部分地图来恢复每个草坪上的蘑菇数量。

结果不一定是唯一的，请帮助 $Pasha$ 恢复任意一张合法的地图或者判断不存在任何一种合法的地图。

保证初始地图上道路上的数字不小于 $1$ 并且不超过 $10^6$ 。

### 输入格式

第一行包含两个整数 $n,m(1 \leqslant n \leqslant 100,0 \leqslant m \leqslant \frac{n \times (n-1)}{2})$ ，表示已知的草坪和道路的数量。

接下来 $m$ 行，每行包含四个整数，分别是道路连接的两块草坪的编号，这些草坪上蘑菇数的 $gcd$ （最大公约数）和 $lcm$ （最小公倍数） $(1 \leqslant gcd,lcm \leqslant 10^6)$ 。

保证没有一条道路两端连接着同一块草坪，也没有两块草坪间有超过一条道路。

### 输出格式

第一行输出“YES”或“NO”，表示是否存在一张合法的地图。

如果答案为“YES”，则继续输出 $n$ 个用空格隔开的数字，表示相应草坪上的蘑菇数量。

## 题目描述

Pasha and Akim were making a forest map — the lawns were the graph's vertexes and the roads joining the lawns were its edges. They decided to encode the number of laughy mushrooms on every lawn in the following way: on every edge between two lawns they wrote two numbers, the greatest common divisor (GCD) and the least common multiple (LCM) of the number of mushrooms on these lawns. But one day Pasha and Akim had an argument about the laughy mushrooms and tore the map. Pasha was left with just some part of it, containing only $ m $ roads. Your task is to help Pasha — use the map he has to restore the number of mushrooms on every lawn. As the result is not necessarily unique, help Pasha to restore any one or report that such arrangement of mushrooms does not exist. It is guaranteed that the numbers on the roads on the initial map were no less that $ 1 $ and did not exceed $ 10^{6} $ .

## 输入输出格式

### 输入格式

The first line contains two numbers $ n $ and $ m $ (![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF60C/e65658a6f91ef1e5435dc30489f00ee6a2321766.png)) which are the numbers of lawns and roads we know about. Each of the following $ m $ lines contains four numbers which are the numbers of lawns the road connects, the GCD and the LCM of the numbers of mushrooms on these lawns ( $ 1<=GCD,LCM<=10^{6} $ ).

It is guaranteed, that no road connects lawn to itself, and no two lawns are connected by more than one road.

### 输出格式

The answer should contain "YES" or "NO" on the first line, saying whether it is possible or not to perform the arrangement. If the answer is "YES", print on the following line $ n $ numbers which are the numbers of mushrooms on the corresponding lawns.

## 输入输出样例

### 输入样例 #1

```cpp
1 0

```
### 输出样例 #1

```cpp
YES
1 
```


### 输入样例 #2

```cpp
2 1
1 2 1 3

```
### 输出样例 #2

```cpp
YES
1 3 
```


### 输入样例 #3

```cpp
3 2
3 2 1 2
3 1 1 10

```
### 输出样例 #3

```cpp
YES
5 1 2 
```


### 输入样例 #4

```cpp
2 1
1 2 3 7

```
### 输出样例 #4

```cpp
NO

```
