# Presents

## 题意翻译

刺猬喜欢给朋友送礼物，但他不喜欢收到礼物。（有钱的刺猬）

所以，刺猬要求你给他写一个程序，计算他在接下来的几天里收到的礼物数。他收到的礼物遵循以下原则：

在每个假日日，刺猬一定会收到礼物

他每K天会收到至少一件礼物（即，如果他在第i天收到了一件礼物，那么他会在i+k天或之前再次收到一见礼物，但在一天里，无论他收到多少礼物，仅被视为收到一件礼物）。

给定的n和k，以及在接下来的n天中的假期列表，请计算刺猬的能获得礼物最少数量。今天的日期视作零，你应该把今天的礼物看作是已经存在的（也就是说，你不应该把它算在答案里）。

输入格式： 第一行包含整数n和K（1<=n<=360,1<=k<=n）。 第二行包含一个数字C，它代表假日的数量（0<=C<=n）。然后在同一行中还有C个数，表示刺猬的假期编号ai（即刺猬在第ai天放假）。数字以递增的顺序给出，没有重复编号。

输出格式： 一个数字，表示接下来的n天里刺猬收到的礼物的最小数量。

翻译贡献者UID：74874

## 题目描述

The Hedgehog likes to give presents to his friend, but no less he likes to receive them.

Having received another present today, the Hedgehog suddenly understood that he has no place to put it as there was no room left on the special shelf in the cupboard. He will have to choose another shelf, but which one should he choose, how large should it be?

In order to get to know this, the Hedgehog asks you to write him a program that will count the estimated number of presents that he will receive during the following $ N $ days. Besides, he is guided by the principle:

- on each holiday day the Hedgehog will necessarily receive a present,

- he receives presents at least every $ K $ days (i.e., if he received a present on the $ i $ -th day, he will receive the next present no later than on the $ i+K $ -th day).

For the given $ N $ and $ K $ , as well as the list of holidays among the following $ N $ days count the minimal number of presents that could be given to the Hedgehog. The number of today's day is zero, and you should regard today's present as already given (i.e., you shouldn't count it in the answer).

## 输入输出格式

### 输入格式

The first line contains integers $ N $ and $ K $ ( $ 1<=N<=365 $ , $ 1<=K<=N $ ).

The second line contains a number $ C $ which represents the number of holidays ( $ 0<=C<=N $ ). Then in the same line follow $ C $ numbers ranging from $ 1 $ to $ N $ which are the numbers of holiday days. The numbers are given in the increasing order, without repeating numbers among them.

### 输出格式

Print a single number — the minimal number of presents the Hedgehog will receive over the following $ N $ days.

## 输入输出样例

### 输入样例 #1

```cpp
5 2
1 3

```
### 输出样例 #1

```cpp
3
```


### 输入样例 #2

```cpp
10 1
3 6 7 8

```
### 输出样例 #2

```cpp
10
```


