# Grocer&#039;s Problem

## 题意翻译

题目描述

有一个长度为$N$的排列，你有一个机器，每一次它可以帮助你将数列中$5$个或更少的数重新排列成你想要的顺序，这些数在排列中不一定要是连续的。试给出一种方案，满足：①通过这种方案重新排列后原排列变为递增排列；②满足①条件的情况下使用机器的次数最少。

输入数据

第一行一个正整数$N(1 \leq N \leq 10^5)$表示排列长度，接下来一行$N$个数描述初始排列，两个数之间用一个空格隔开。

输出数据

第一行一个非负整数$T$表示你给出的方案使用机器的次数，接下来每三行描述一次操作。对于每一次操作，第一行一个正整数$k$表示这一次操作中重新排列的数的数量，第二行$k$个正整数$b_i$，第三行$k$个正整数$c_i$，表示这一次操作中将位于$b_i$的元素放在$c_i$位置上。描述$b_i$与$c_i$时，两个数之间用一个空格隔开。

## 题目描述

Yesterday was a fair in a supermarket's grocery section. There were $ n $ jars with spices on the fair. Before the event the jars were numbered from $ 1 $ to $ n $ from the left to the right. After the event the jars were moved and the grocer had to sort them by the increasing of the numbers.

The grocer has a special machine at his disposal. The machine can take any $ 5 $ or less jars and rearrange them in the way the grocer wants. Note that the jars do not have to stand consecutively. For example, from the permutation $ 2 $ , $ 6 $ , $ 5 $ , $ 4 $ , $ 3 $ , $ 1 $ one can get permutation $ 1 $ , $ 2 $ , $ 3 $ , $ 4 $ , $ 5 $ , $ 6 $ , if pick the jars on the positions $ 1 $ , $ 2 $ , $ 3 $ , $ 5 $ and $ 6 $ .

Which minimum number of such operations is needed to arrange all the jars in the order of their numbers' increasing?

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=10^{5} $ ). The second line contains $ n $ space-separated integers $ a_{i} $ ( $ 1<=a_{i}<=n $ ) — the $ i $ -th number represents the number of a jar that occupies the $ i $ -th position. It is guaranteed that all the numbers are distinct.

### 输出格式

Print on the first line the least number of operations needed to rearrange all the jars in the order of the numbers' increasing. Then print the description of all actions in the following format.

On the first line of the description of one action indicate the number of jars that need to be taken ( $ k $ ), on the second line indicate from which positions the jars need to be taken ( $ b_{1},b_{2},...,b_{k} $ ), on the third line indicate the jar's new order ( $ c_{1},c_{2},...,c_{k} $ ). After the operation is fulfilled the jar from position $ b_{i} $ will occupy the position $ c_{i} $ . The set ( $ c_{1},c_{2},...,c_{k} $ ) should be the rearrangement of the set ( $ b_{1},b_{2},...,b_{k} $ ).

If there are multiple solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
6
3 5 6 1 2 4

```
### 输出样例 #1

```cpp
2
4
1 3 6 4 
3 6 4 1 
2
2 5 
5 2 

```
### 输入样例 #2

```cpp
14
9 13 11 3 10 7 12 14 1 5 4 6 8 2

```
### 输出样例 #2

```cpp
3
4
2 13 8 14 
13 8 14 2 
5
6 7 12 5 10 
7 12 6 10 5 
5
3 11 4 1 9 
11 4 3 9 1 

```
## 说明

Let's consider the first sample. The jars can be sorted within two actions.

During the first action we take the jars from positions $ 1 $ , $ 3 $ , $ 6 $ and $ 4 $ and put them so that the jar that used to occupy the position $ 1 $ will occupy the position $ 3 $ after the operation is completed. The jar from position $ 3 $ will end up in position $ 6 $ , the jar from position $ 6 $ will end up in position $ 4 $ and the jar from position $ 4 $ will end up in position $ 1 $ .

After the first action the order will look like that: $ 1 $ , $ 5 $ , $ 3 $ , $ 4 $ , $ 2 $ , $ 6 $ .

During the second operation the jars in positions $ 2 $ and $ 5 $ will change places.

