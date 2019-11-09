# T-shirts from Sponsor

## 题意翻译

## 题目描述

某著名比赛的知名赞助商决定给比赛的每个参赛者一件T恤作为礼物。

现在出现了一个问题：一方面，目前尚不清楚应该订购什么尺码的T恤，另一方面，他不想订购太多的T恤。经过大量的脑力训练和一些预估，赞助商订购了一定数量的尺寸为S，M，L，XL和XXL的T恤。T恤最终带来了好运，在比赛那天有一排参与者都想得到一件。

每个参赛者都以Ta期望的T恤尺码为特征（尺寸S，M，L，XL和XXL之一）。参与者一个接一个地拿到T恤。

如果还有适合的尺寸的T恤，那么Ta就会拿走它。否则，参赛者会选择尺寸尽可能接近最佳尺寸的T恤（相邻尺码之间的距离等于1）。如果有多种可供选择，参赛者将选择更大尺寸的T恤。例如，对于最佳大小为L的人，首选项列表如下所示：L，XL，M，XXL，S。

## 输入输出格式

### 输入格式

第一行是5个不超过1000的非负数$N_S,N_M,N_L,N_{XL},N_{XXL}$

为买入数

第二行是K，代表参赛人数

第三行是每人的尺码

$N_{S}+N_{M}+N_{L}+N_{XL}+N_{XXL}>=K$

### 输出格式：

一行，每个参赛者获得的衣服的尺码数

## 题目描述

One day a well-known sponsor of a well-known contest decided to give every participant of the contest a T-shirt as a present. A natural problem occurred: on the one hand, it is not clear how many T-shirts of what sizes should be ordered, and on the other hand, one doesn't want to order too many T-shirts (and we do not exactly paper the walls with the oversupply). After considerable brain racking and some pre-estimating, the sponsor representatives ordered a certain number of T-shirts of sizes S, M, L, XL and XXL. The T-shirts turned out to bring good luck, that's why on the contest day there built up a line of $ K $ participants willing to get one. Every contestant is characterized by his/her desired T-shirt size (so it happens that for all the participants it is also one of the sizes S, M, L, XL and XXL). The participants come up to get a T-shirt one by one and try to choose the most suitable one, choosing it like this. If there is still a T-shirt of the optimal size left, that he/she takes it without further ado. Otherwise the contestant would prefer to choose a T-shirt with the size as close to the optimal one as possible (the distance between neighboring sizes is considered equal to one). If the variant of choice is not unique, the contestant will take a T-shirt of a bigger size (in case he/she grows more). For example, for a person whose optimal size is L the preference list looks like this: L, XL, M, XXL, S. Using the data on how many T-shirts of every size had been ordered by the organizers, on the size of contestants in the line determine who got a T-shirt of what size.

## 输入输出格式

### 输入格式

The first line contains five non-negative integers $ N_{S},N_{M},N_{L},N_{XL},N_{XXL} $ not exceeding 1000 which represent the number of T-shirts of the corresponding sizes. The second line contains an integer $ K $ ( $ 1<=K=K $ .

### 输出格式

For each contestant, print a line containing the size of the T-shirt he/she got.

## 输入输出样例

### 输入样例 #1

```cpp
1 0 2 0 1
3
XL
XXL
M

```
### 输出样例 #1

```cpp
XXL
L
L

```
