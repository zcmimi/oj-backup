# Energy exchange

## 题意翻译

#### 题面

有n个电池，每个初始电量为$a_{i}$，现在需要通过能量传递让所有电池电量相等。能量传递的方法是：选择两个电池，一个失去x电量（x可以不是整数），另一个得到$ x-\dfrac{xk}{100}$点电量。也就是说，传递过程中会损失k%的电量。

现给出$a_{i}$，求通过能量传递能获得的最大单个电量（所有电池电量要求相等）

#### 输入

第一行两个整数n k

第二行n个整数，$a_{i}$

#### 输出

一行一个实数，最大单个电池电量

误差应该小于$10^{-6}$

#### 样例

见题

#### 范围

$1<=n<=100000,

0<=k<=99,

0<=a_{i}<=1000$

## 题目描述

It is well known that the planet suffers from the energy crisis. Little Petya doesn't like that and wants to save the world. For this purpose he needs every accumulator to contain the same amount of energy. Initially every accumulator has some amount of energy: the $ i $ -th accumulator has $ a_{i} $ units of energy. Energy can be transferred from one accumulator to the other. Every time $ x $ units of energy are transferred ( $ x $ is not necessarily an integer) $ k $ percent of it is lost. That is, if $ x $ units were transferred from one accumulator to the other, amount of energy in the first one decreased by $ x $ units and in other increased by ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF68B/b2812228d37ba851de724c292afa8e13e0ea3f33.png) units.

Your task is to help Petya find what maximum equal amount of energy can be stored in each accumulator after the transfers.

## 输入输出格式

### 输入格式

First line of the input contains two integers $ n $ and $ k $ ( $ 1<=n<=10000,0<=k<=99 $ ) — number of accumulators and the percent of energy that is lost during transfers.

Next line contains $ n $ integers $ a_{1},a_{2},...\ ,a_{n} $ — amounts of energy in the first, second, .., $ n $ -th accumulator respectively ( $ 0<=a_{i}<=1000,1<=i<=n $ ).

### 输出格式

Output maximum possible amount of energy that can remain in each of accumulators after the transfers of energy.

The absolute or relative error in the answer should not exceed $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
3 50
4 2 1

```
### 输出样例 #1

```cpp
2.000000000

```
### 输入样例 #2

```cpp
2 90
1 11

```
### 输出样例 #2

```cpp
1.909090909

```
