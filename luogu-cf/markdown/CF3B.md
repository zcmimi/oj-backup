# Lorry

## 题意翻译

题意翻译

有一辆载重量为 v 的货车， 准备运送两种物品。 物品 A 的重量为 1， 物体 B 的重量为 2， 每个物品都有一个价值。 求货车可以运送的物品的最大价值。

输入格式

第一个行包含两个整数 n 和 v,分别表示有 n 个物品， 货车的载重量为 v。 (1 ≤ n ≤ 10^5; 1 ≤ v ≤ 10^9)

接下来 n 行， 每行两个整数， 分别表示物品的重量 ti 和价值 pi。 , (1 ≤ ti ≤ 2; 1 ≤ pi ≤ 10000)

输出格式

第一行， 一个整数， 表示最大价值。

第二行 构成最大价值的物品的重量（如果答案不唯一 请输出其中任何一个）

## 题目描述

A group of tourists is going to kayak and catamaran tour. A rented lorry has arrived to the boat depot to take kayaks and catamarans to the point of departure. It's known that all kayaks are of the same size (and each of them occupies the space of 1 cubic metre), and all catamarans are of the same size, but two times bigger than kayaks (and occupy the space of 2 cubic metres).

Each waterborne vehicle has a particular carrying capacity, and it should be noted that waterborne vehicles that look the same can have different carrying capacities. Knowing the truck body volume and the list of waterborne vehicles in the boat depot (for each one its type and carrying capacity are known), find out such set of vehicles that can be taken in the lorry, and that has the maximum total carrying capacity. The truck body volume of the lorry can be used effectively, that is to say you can always put into the lorry a waterborne vehicle that occupies the space not exceeding the free space left in the truck body.

## 输入输出格式

### 输入格式

The first line contains a pair of integer numbers $ n $ and $ v $ ( $ 1<=n<=10^{5} $ ; $ 1<=v<=10^{9} $ ), where $ n $ is the number of waterborne vehicles in the boat depot, and $ v $ is the truck body volume of the lorry in cubic metres. The following $ n $ lines contain the information about the waterborne vehicles, that is a pair of numbers $ t_{i} $ , $ p_{i} $ ( $ 1<=t_{i}<=2 $ ; $ 1<=p_{i}<=10^{4} $ ), where $ t_{i} $ is the vehicle type ( $ 1 $ – a kayak, $ 2 $ – a catamaran), and $ p_{i} $ is its carrying capacity. The waterborne vehicles are enumerated in order of their appearance in the input file.

### 输出格式

In the first line print the maximum possible carrying capacity of the set. In the second line print a string consisting of the numbers of the vehicles that make the optimal set. If the answer is not unique, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
3 2
1 2
2 7
1 3

```
### 输出样例 #1

```cpp
7
2

```
