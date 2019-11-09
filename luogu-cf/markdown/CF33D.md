# Knights

## 题意翻译

伯兰国不得不又一次面对黑♂暗势力的降临。邪恶领主~~Van♂De♂Mart~~范·德·马特正在计划征服整个王国。王国成立了由伯兰国王瓦莱丽领导的理事会。理事会由$n$个骑士组成。经过一番激烈的讨论，他们把整个国家分成了$n$个战略目标点，（如果黑暗势力控制了至少一个战略目标点，战争就失败了）

伯兰国可以被认为是由$m+1$个区域和$m$个栅栏组成的。同时，从一个区域到达另一个区域的唯一方法就是翻过栅栏。每个栅栏都是同一个平面上的圆，并且任意两个栅栏之间都没有交叉点，同时保证所有战略目标点都`不在`栅栏上。我们会给你$k$对整数$ai, bi$，对于每对整数，你都要解决：如果一个骑士想从战略控制点$ai$赶到$bi$，（为了防止范·德·马特突袭控制点bi），而每个骑士都骑着一匹马（把马从栅栏上扔过去太难了），那么，他最少爬过多少栅栏？

## 输入格式

第一行是两个正整数$n,m$（$1 ≤ n,m ≤ 1000$， $0 ≤ k ≤ 10000$）接下来$n$行， 两个数，$Kx_i, Ky_i$，（$-1 * 10^9 ≤ Kx_i, Ky_i ≤ 1 * 10^9$）描述第$i$个控制点的坐标。

接下来$m$行，每行描述一个栅栏，一个栅栏有三个参数，$r_i, Cx_i, Cy_i$分别表示这个栅栏的直径和坐标。（$-1 * 10^9 ≤ Cx_i, Cy_i ≤ 1 * 10^9$， $1 ≤ r_i ≤ 1 * 10^9$）

在接下来$k$行，每行两个整数，第$n+m+j$行表示$a_i$，$b_i$，（意义前面已经说了）

## 输出格式

正好k行，每行一个整数，对这$k$次询问的答案

_翻译 By 的卢_

## 题目描述

Berland is facing dark times again. The army of evil lord Van de Mart is going to conquer the whole kingdom. To the council of war called by the Berland's king Valery the Severe came $ n $ knights. After long discussions it became clear that the kingdom has exactly $ n $ control points (if the enemy conquers at least one of these points, the war is lost) and each knight will occupy one of these points.

Berland is divided into $ m+1 $ regions with $ m $ fences, and the only way to get from one region to another is to climb over the fence. Each fence is a circle on a plane, no two fences have common points, and no control point is on the fence. You are given $ k $ pairs of numbers $ a_{i} $ , $ b_{i} $ . For each pair you have to find out: how many fences a knight from control point with index $ a_{i} $ has to climb over to reach control point $ b_{i} $ (in case when Van de Mart attacks control point $ b_{i} $ first). As each knight rides a horse (it is very difficult to throw a horse over a fence), you are to find out for each pair the minimum amount of fences to climb over.

## 输入输出格式

### 输入格式

The first input line contains three integers $ n $ , $ m $ , $ k $ ( $ 1<=n,m<=1000 $ , $ 0<=k<=100000 $ ). Then follow $ n $ lines, each containing two integers $ Kx_{i} $ , $ Ky_{i} $ ( $ -10^{9}<=Kx_{i},Ky_{i}<=10^{9} $ ) — coordinates of control point with index $ i $ . Control points can coincide.

Each of the following $ m $ lines describes fence with index $ i $ with three integers $ r_{i} $ , $ Cx_{i} $ , $ Cy_{i} $ ( $ 1<=r_{i}<=10^{9} $ , $ -10^{9}<=Cx_{i},Cy_{i}<=10^{9} $ ) — radius and center of the circle where the corresponding fence is situated.

Then follow $ k $ pairs of integers $ a_{i} $ , $ b_{i} $ ( $ 1<=a_{i},b_{i}<=n $ ), each in a separate line — requests that you have to answer. $ a_{i} $ and $ b_{i} $ can coincide.

### 输出格式

Output exactly $ k $ lines, each containing one integer — the answer to the corresponding request.

## 输入输出样例

### 输入样例 #1

```cpp
2 1 1
0 0
3 3
2 0 0
1 2

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
2 3 1
0 0
4 4
1 0 0
2 0 0
3 0 0
1 2

```
### 输出样例 #2

```cpp
3

```
