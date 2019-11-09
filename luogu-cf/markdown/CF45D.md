# Event Dates

## 题意翻译

在历史课上，老师问Vasya n个著名事件发生的日期，而Vasya不记得具体日期，只知道第i个事件所在的时间在l[i]到r[i]之间，且一天最多发生一件。请你帮助Vasya找出每个事件发生的日期，数据保证有解。

输入n (1<=n<=100)，表示著名事件的个数，接下来n行，每行是l[i]和r[i] ，表示第i个事件最早可能发生的日期与最晚可能发生的日期。

输出n个数，每个数为每一个事件可能发生的日期，可能有不止一种的解，输出字典序最小的。

感谢@陆麟瑞666 提供的翻译

## 题目描述

On a history lesson the teacher asked Vasya to name the dates when $ n $ famous events took place. He doesn't remembers the exact dates but he remembers a segment of days $ [l_{i},r_{i}] $ (inclusive) on which the event could have taken place. However Vasya also remembers that there was at most one event in one day. Help him choose such $ n $ dates of famous events that will fulfill both conditions. It is guaranteed that it is possible.

## 输入输出格式

### 输入格式

The first line contains one integer $ n $ ( $ 1<=n<=100 $ ) — the number of known events. Then follow $ n $ lines containing two integers $ l_{i} $ and $ r_{i} $ each ( $ 1<=l_{i}<=r_{i}<=10^{7} $ ) — the earliest acceptable date and the latest acceptable date of the $ i $ -th event.

### 输出格式

Print $ n $ numbers — the dates on which the events took place. If there are several solutions, print any of them. It is guaranteed that a solution exists.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2
2 3
3 4

```
### 输出样例 #1

```cpp
1 2 3 

```
### 输入样例 #2

```cpp
2
1 3
1 3

```
### 输出样例 #2

```cpp
1 2 

```
