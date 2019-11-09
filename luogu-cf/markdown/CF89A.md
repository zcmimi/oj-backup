# Robbery

## 题意翻译

## 题目大意

有n个连续的房间，每个房间里放了a[i]个钻石。一共有k分钟，每分钟能做m次操作。可以的操作有：：把一颗钻石从某一堆移到另一堆 or 把一颗钻石从某一堆中装进口袋 or把一颗钻石从口袋取出放入某一堆钻石 。

要求：每分钟后，相邻两堆的钻石数量不变。问k分钟后最多可以带走多少钻石。

## 题目描述

It is nighttime and Joe the Elusive got into the country's main bank's safe. The safe has $ n $ cells positioned in a row, each of them contains some amount of diamonds. Let's make the problem more comfortable to work with and mark the cells with positive numbers from $ 1 $ to $ n $ from the left to the right.

Unfortunately, Joe didn't switch the last security system off. On the plus side, he knows the way it works.

Every minute the security system calculates the total amount of diamonds for each two adjacent cells (for the cells between whose numbers difference equals $ 1 $ ). As a result of this check we get an $ n-1 $ sums. If at least one of the sums differs from the corresponding sum received during the previous check, then the security system is triggered.

Joe can move the diamonds from one cell to another between the security system's checks. He manages to move them no more than $ m $ times between two checks. One of the three following operations is regarded as moving a diamond: moving a diamond from any cell to any other one, moving a diamond from any cell to Joe's pocket, moving a diamond from Joe's pocket to any cell. Initially Joe's pocket is empty, and it can carry an unlimited amount of diamonds. It is considered that before all Joe's actions the system performs at least one check.

In the morning the bank employees will come, which is why Joe has to leave the bank before that moment. Joe has only $ k $ minutes left before morning, and on each of these $ k $ minutes he can perform no more than $ m $ operations. All that remains in Joe's pocket, is considered his loot.

Calculate the largest amount of diamonds Joe can carry with him. Don't forget that the security system shouldn't be triggered (even after Joe leaves the bank) and Joe should leave before morning.

## 输入输出格式

### 输入格式

The first line contains integers $ n $ , $ m $ and $ k $ ( $ 1<=n<=10^{4} $ , $ 1<=m,k<=10^{9} $ ). The next line contains $ n $ numbers. The $ i $ -th number is equal to the amount of diamonds in the $ i $ -th cell — it is an integer from $ 0 $ to $ 10^{5} $ .

### 输出格式

Print a single number — the maximum number of diamonds Joe can steal.

## 输入输出样例

### 输入样例 #1

```cpp
2 3 1
2 3

```
### 输出样例 #1

```cpp
0
```


### 输入样例 #2

```cpp
3 2 2
4 1 3

```
### 输出样例 #2

```cpp
2
```


## 说明

In the second sample Joe can act like this:

The diamonds' initial positions are $ 4 $ $ 1 $ $ 3 $ .

During the first period of time Joe moves a diamond from the $ 1 $ -th cell to the $ 2 $ -th one and a diamond from the $ 3 $ -th cell to his pocket.

By the end of the first period the diamonds' positions are $ 3 $ $ 2 $ $ 2 $ . The check finds no difference and the security system doesn't go off.

During the second period Joe moves a diamond from the $ 3 $ -rd cell to the $ 2 $ -nd one and puts a diamond from the $ 1 $ -st cell to his pocket.

By the end of the second period the diamonds' positions are $ 2 $ $ 3 $ $ 1 $ . The check finds no difference again and the security system doesn't go off.

Now Joe leaves with $ 2 $ diamonds in his pocket.

