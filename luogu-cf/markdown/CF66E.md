# Petya and Post

## 题意翻译

有n个邮局，在每个邮局都有一个加油站。（邮局编号从1开始）

对于第i个邮局，a[i]表示位于这个邮局加油站最多能加多少油，b[i]表示它到第i+1个邮局会耗费多少油。特殊的，对于第n个邮局，b[n]表示它到第1个邮局会耗费多少

油。

现在可以任意选择一个邮局出发，开始的油量为0。可以选择顺时针或者逆时针走动，一旦决定方向就不可以回头。

要求路途上任一时刻油量>=0。

求有哪些个邮局出发可以走过所有邮局后回到起点。

输入：

第一行一个正整数n (<=$10^5$)

第二行n个正整数表示a ($\sum_{i=1}^na[i] $ 不超过$10^9$)

第三行n个正整数表示b ($\sum_{i=1}^nb[i] $ 不超过$10^9$)

输出：

第一行一个正整数res 表示有多少个邮局出发可以回到自己

第二行res个正整数，从小到大的输出这些可以回到自己的邮局的编号

由 @北辰北辰北 提供翻译

## 题目描述

Little Vasya's uncle is a postman. The post offices are located on one circular road. Besides, each post office has its own gas station located next to it. Petya's uncle works as follows: in the morning he should leave the house and go to some post office. In the office he receives a portion of letters and a car. Then he must drive in the given car exactly one round along the circular road and return to the starting post office (the uncle can drive along the circle in any direction, counterclockwise or clockwise). Besides, since the car belongs to the city post, it should also be fuelled with gasoline only at the Post Office stations.

The total number of stations equals to $ n $ . One can fuel the car at the $ i $ -th station with no more than $ a_{i} $ liters of gasoline. Besides, one can fuel the car no more than once at each station. Also, the distance between the $ 1 $ -st and the $ 2 $ -nd station is $ b_{1} $ kilometers, the distance between the $ 2 $ -nd and the $ 3 $ -rd one is $ b_{2} $ kilometers, ..., between the $ (n-1) $ -th and the $ n $ -th ones the distance is $ b_{n-1} $ kilometers and between the $ n $ -th and the $ 1 $ -st one the distance is $ b_{n} $ kilometers. Petya's uncle's high-tech car uses only one liter of gasoline per kilometer. It is known that the stations are located so that the sum of all $ a_{i} $ is equal to the sum of all $ b_{i} $ . The $ i $ -th gas station and $ i $ -th post office are very close, so the distance between them is $ 0 $ kilometers.

Thus, it becomes clear that if we start from some post offices, then it is not always possible to drive one round along a circular road. The uncle faces the following problem: to what stations can he go in the morning to be able to ride exactly one circle along the circular road and visit all the post offices that are on it?

Petya, who used to attend programming classes, has volunteered to help his uncle, but his knowledge turned out to be not enough, so he asks you to help him write the program that will solve the posed problem.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=10^{5} $ ). The second line contains $ n $ integers $ a_{i} $ — amount of gasoline on the $ i $ -th station. The third line contains $ n $ integers $ b_{1},b_{2},...,b_{n} $ . They are the distances between the $ 1 $ -st and the $ 2 $ -nd gas stations, between the $ 2 $ -nd and the $ 3 $ -rd ones, ..., between the $ n $ -th and the $ 1 $ -st ones, respectively. The sum of all $ b_{i} $ equals to the sum of all $ a_{i} $ and is no more than $ 10^{9} $ . Each of the numbers $ a_{i} $ , $ b_{i} $ is no less than $ 1 $ and no more than $ 10^{9} $ .

### 输出格式

Print on the first line the number $ k $ — the number of possible post offices, from which the car can drive one circle along a circular road. Print on the second line $ k $ numbers in the ascending order — the numbers of offices, from which the car can start.

## 输入输出样例

### 输入样例 #1

```cpp
4
1 7 2 3
8 1 1 3

```
### 输出样例 #1

```cpp
2
2 4

```
### 输入样例 #2

```cpp
8
1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1

```
### 输出样例 #2

```cpp
8
1 2 3 4 5 6 7 8

```
