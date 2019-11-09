# Camels

## 题意翻译

### 题意简述

一行有n个空位，每个空位可以填$[1,4]$的整数，相邻两个数不相同，要求：

- 1.有$t$个位置满足 $a_{i-1}$ $a_{i+1} $并且($1$<$i$<$n$)

- 2.有$t$−$1$个位置满足$a_{i-1}$>$a_i$<$a_{i+1}$

#### 输入

第一行: $n$ 和 $t$

#### 输出

第一行：即一共有多少种可能。

#### 数据范围

1≤n≤20,

1≤t≤10

## 题目描述

Bob likes to draw camels: with a single hump, two humps, three humps, etc. He draws a camel by connecting points on a coordinate plane. Now he's drawing camels with $ t $ humps, representing them as polylines in the plane. Each polyline consists of $ n $ vertices with coordinates $ (x_{1},y_{1}) $ , $ (x_{2},y_{2}) $ , ..., $ (x_{n},y_{n}) $ . The first vertex has a coordinate $ x_{1}=1 $ , the second — $ x_{2}=2 $ , etc. Coordinates $ y_{i} $ might be any, but should satisfy the following conditions:

- there should be $ t $ humps precisely, i.e. such indexes $ j $ ( $ 2<=j<=n-1 $ ), so that $ y_{j-1}&lt;y_{j}&gt;y_{j+1} $ ,

- there should be precisely $ t-1 $ such indexes $ j $ ( $ 2<=j<=n-1 $ ), so that $ y_{j-1}&gt;y_{j}&lt;y_{j+1} $ ,

- no segment of a polyline should be parallel to the $ Ox $ -axis,

- all $ y_{i} $ are integers between 1 and 4.

For a series of his drawings of camels with $ t $ humps Bob wants to buy a notebook, but he doesn't know how many pages he will need. Output the amount of different polylines that can be drawn to represent camels with $ t $ humps for a given number $ n $ .

## 输入输出格式

### 输入格式

The first line contains a pair of integers $ n $ and $ t $ ( $ 3<=n<=20 $ , $ 1<=t<=10 $ ).

### 输出格式

Output the required amount of camels with $ t $ humps.

## 输入输出样例

### 输入样例 #1

```cpp
6 1

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
4 2

```
### 输出样例 #2

```cpp
0

```
## 说明

In the first sample test sequences of $ y $ -coordinates for six camels are: 123421, 123431, 123432, 124321, 134321 и 234321 (each digit corresponds to one value of $ y_{i} $ ).

