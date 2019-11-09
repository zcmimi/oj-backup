# Trains

## 题意翻译

程序员Vasya有两个女友，一个叫Dasha，另一个叫Masha。她们分别住在Vasya所在地铁线路的两个始发站。

当Vasya有空闲时间时，他会去找他的一个女友。他在某个时间下降到火车站，等待第一班火车到来（地铁去哪，他就去哪个女友那里）。但两个方向的火车发车时间不同，向Dasha方向的火车a分钟一班，向Masha方向的火车b分钟一班。如果两列火车同时到达，Vasya会朝着发车时间较长的方向前进。在第0分钟，两班火车同时从Vasya所在站的前一个站和后一个站开出。（chinaxjh这个蒟蒻无法翻译的更好一点了）

问Vasya去哪个女友那里的概率大。（输出英文名即可，如果一样输出“Equal”，引号不用输出）

输入格式：

第一行包含两个整数a和b（a≠b,1<=a,b<=10 ^ {6}）。

输出格式：

一行，“Dasha”“Masha”或“Equal”

## 题目描述

Vasya the programmer lives in the middle of the Programming subway branch. He has two girlfriends: Dasha and Masha, who live at the different ends of the branch, each one is unaware of the other one's existence.

When Vasya has some free time, he goes to one of his girlfriends. He descends into the subway at some time, waits the first train to come and rides on it to the end of the branch to the corresponding girl. However, the trains run with different frequencies: a train goes to Dasha's direction every $ a $ minutes, but a train goes to Masha's direction every $ b $ minutes. If two trains approach at the same time, Vasya goes toward the direction with the lower frequency of going trains, that is, to the girl, to whose directions the trains go less frequently (see the note to the third sample).

We know that the trains begin to go simultaneously before Vasya appears. That is the train schedule is such that there exists a moment of time when the two trains arrive simultaneously.

Help Vasya count to which girlfriend he will go more often.

## 输入输出格式

### 输入格式

The first line contains two integers $ a $ and $ b $ ( $ a≠b,1<=a,b<=10^{6} $ ).

### 输出格式

Print "Dasha" if Vasya will go to Dasha more frequently, "Masha" if he will go to Masha more frequently, or "Equal" if he will go to both girlfriends with the same frequency.

## 输入输出样例

### 输入样例 #1

```cpp
3 7

```
### 输出样例 #1

```cpp
Dasha

```
### 输入样例 #2

```cpp
5 3

```
### 输出样例 #2

```cpp
Masha

```
### 输入样例 #3

```cpp
2 3

```
### 输出样例 #3

```cpp
Equal

```
## 说明

Let's take a look at the third sample. Let the trains start to go at the zero moment of time. It is clear that the moments of the trains' arrival will be periodic with period 6. That's why it is enough to show that if Vasya descends to the subway at a moment of time inside the interval $ (0,6] $ , he will go to both girls equally often.

If he descends to the subway at a moment of time from 0 to 2, he leaves for Dasha on the train that arrives by the second minute.

If he descends to the subway at a moment of time from 2 to 3, he leaves for Masha on the train that arrives by the third minute.

If he descends to the subway at a moment of time from 3 to 4, he leaves for Dasha on the train that arrives by the fourth minute.

If he descends to the subway at a moment of time from 4 to 6, he waits for both trains to arrive by the sixth minute and goes to Masha as trains go less often in Masha's direction.

In sum Masha and Dasha get equal time — three minutes for each one, thus, Vasya will go to both girlfriends equally often.

