# Follow Traffic Rules

## 题意翻译

有一个长度为l的道路，你的加速是a

从[0,d]的限速是w，[0,l]的限速是v，问你最少花费多少时间从起点到终点。

w的限速范围是[d,d]，即是说保证在交通标志处的速度不超过w即为合法。

## 题目描述

Everybody knows that the capital of Berland is connected to Bercouver (the Olympic capital) by a direct road. To improve the road's traffic capacity, there was placed just one traffic sign, limiting the maximum speed. Traffic signs in Berland are a bit peculiar, because they limit the speed only at that point on the road where they are placed. Right after passing the sign it is allowed to drive at any speed.

It is known that the car of an average Berland citizen has the acceleration (deceleration) speed of $ a $ km/h $ ^{2} $ , and has maximum speed of $ v $ km/h. The road has the length of $ l $ km, and the speed sign, limiting the speed to $ w $ km/h, is placed $ d $ km ( $ 1<=d<l $ ) away from the capital of Berland. The car has a zero speed at the beginning of the journey. Find the minimum time that an average Berland citizen will need to get from the capital to Bercouver, if he drives at the optimal speed. The car can enter Bercouver at any speed. 

## 输入输出格式

### 输入格式

The first line of the input file contains two integer numbers $ a $ and $ v $ ( $ 1<=a,v<=10000 $ ). The second line contains three integer numbers $ l $ , $ d $ and $ w $ ( $ 2<=l<=10000 $ ; $ 1<=d<l $ ; $ 1<=w<=10000 $ ).

### 输出格式

Print the answer with at least five digits after the decimal point.

## 输入输出样例

### 输入样例 #1

```cpp
1 1
2 1 3

```
### 输出样例 #1

```cpp
2.500000000000

```
### 输入样例 #2

```cpp
5 70
200 170 40

```
### 输出样例 #2

```cpp
8.965874696353

```
