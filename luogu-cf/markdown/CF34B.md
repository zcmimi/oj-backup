# Sale

## 题意翻译

Bob要去参加一次旧电视卖场，一共有n台电视出售，编号为i的电视的价格为$a_i$。有些电视的价格是个负数，Bob最多会买m台电视，问Bob最多能赚到多少钱。

### 输入：

第一行两个整数$n,m(1\leq m\leq n\leq 100)$,为待出售的电视机的数目和Bob打算买的电视机的数目。第二行有n个整数，整数之间用空格分开，第i个整数$a_i(-1000\leq a_i\leq 1000)$为第i台电视机的价格.

### 输出：

输出只有一个数字，即Bob最多能赚到的钱。

Translated by @sounkix

## 题目描述

Once Bob got to a sale of old TV sets. There were $ n $ TV sets at that sale. TV set with index $ i $ costs $ a_{i} $ bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most $ m $ TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.

## 输入输出格式

### 输入格式

The first line contains two space-separated integers $ n $ and $ m $ ( $ 1<=m<=n<=100 $ ) — amount of TV sets at the sale, and amount of TV sets that Bob can carry. The following line contains $ n $ space-separated integers $ a_{i} $ ( $ -1000<=a_{i}<=1000 $ ) — prices of the TV sets.

### 输出格式

Output the only number — the maximum sum of money that Bob can earn, given that he can carry at most $ m $ TV sets.

## 输入输出样例

### 输入样例 #1

```cpp
5 3
-6 0 35 -2 4

```
### 输出样例 #1

```cpp
8

```
### 输入样例 #2

```cpp
4 2
7 0 0 -7

```
### 输出样例 #2

```cpp
7

```
