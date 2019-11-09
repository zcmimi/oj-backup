# Goats and Wolves

## 题目描述

Once Vasya needed to transport $ m $ goats and $ m $ wolves from riverbank to the other as quickly as possible. The boat can hold $ n $ animals and Vasya, in addition, he is permitted to put less than $ n $ animals in the boat. If in one place (on one of the banks or in the boat) the wolves happen to strictly outnumber the goats, then the wolves eat the goats and Vasya gets upset. When Vasya swims on the boat from one shore to the other, he must take at least one animal to accompany him, otherwise he will get bored and he will, yet again, feel upset. When the boat reaches the bank, first all the animals get off simultaneously, and then the animals chosen by Vasya simultaneously get on the boat. That means that at the moment when the animals that have just arrived have already got off and the animals that are going to leave haven't yet got on, somebody might eat someone. Vasya needs to transport all the animals from one river bank to the other so that nobody eats anyone and Vasya doesn't get upset. What is the minimal number of times he will have to cross the river?

## 输入输出格式

### 输入格式

The first line contains two space-separated numbers $ m $ and $ n $ ( $ 1<=m,n<=10^{5} $ ) — the number of animals and the boat's capacity.

### 输出格式

If it is impossible to transport all the animals so that no one got upset, and all the goats survived, print -1. Otherwise print the single number — how many times Vasya will have to cross the river.

## 输入输出样例

### 输入样例 #1

```cpp
3 2

```
### 输出样例 #1

```cpp
11

```
### 输入样例 #2

```cpp
33 3

```
### 输出样例 #2

```cpp
-1

```
## 说明

The first sample match to well-known problem for children.

