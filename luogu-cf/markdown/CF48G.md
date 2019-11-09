# Galaxy Union

## 题意翻译

在遥远的银河中，有n个被居住的行星，编号从1到n。一天，这n个行星上的总统各自产生了联盟的想法。但他们不知道彼此都产生了这个想法。于是他们想和其他人商讨这件事，所以每个总统都忙于准备和别的总统进行交谈。

一些行星之间的交谈有着双向通信通道，每个通道都有“拨号持续时间”ti，通常耗时数小时。整个银河都有N个通讯通道，它们把所有行星连接起来。这意味着有可能从任何行星u直接向任何行星v打电话，也许，使用一些过渡行星v1，v2…，Vm通过u 和v1和v2，…，vm和vm和v之间的现有通道。那么从u到v的拨号持续时间等于所使用通信通道的拨号持续时间之和。

每一位总统必须一个一个与其余n-1颗行星的总统交谈。交谈是严格的进行着的，直到与一方的交谈结束时，另一方的拨号才开始。因为时间紧迫，得以最快的方式与每一个星球进行联络。只需要很少的时间来保证另一位总统对星系联盟的重要性，那么每个行星的谈判持续时间就视作这些行星的拨号持续时间。但是以为总统对彼此的想法一无所知，他们无法考虑全面，例如，要进行交谈的某个总统可能已经从其他渠道知道了这件事。

所以，所有n个行星的政府要求你来帮他们制定计划。你的任务是要找出每一位总统要用多少时间进行交谈。

Translated by @Well_whz 

## 题目描述

In a far away galaxy there are $ n $ inhabited planets numbered with numbers from $ 1 $ to $ n $ . One day the presidents of all the $ n $ planets independently from each other came up with an idea of creating the Galaxy Union. Now they need to share this wonderful idea with their galaxymates, that’s why each president is busy working out a project of negotiating with the other presidents.

For negotiations between some pairs of the planets there are bidirectional communication channels, each of which is characterized with "dial duration" $ t_{i} $ which, as a rule, takes several hours and exceeds the call duration greatly. Overall the galaxy has $ n $ communication channels and they unite all the planets into a uniform network. That means that it is possible to phone to any planet $ v $ from any planet $ u $ , perhaps, using some transitional planets $ v_{1} $ , $ v_{2} $ , ..., $ v_{m} $ via the existing channels between $ u $ and $ v_{1} $ , $ v_{1} $ and $ v_{2} $ , ..., $ v_{m-1} $ and $ v_{m} $ , $ v_{m} $ and $ v $ . At that the dial duration from $ u $ to $ v $ will be equal to the sum of dial durations of the used channels.

So, every president has to talk one by one to the presidents of all the rest $ n-1 $ planets. At that the negotiations take place strictly consecutively, and until the negotiations with a planet stop, the dial to another one does not begin. As the matter is urgent, from the different ways to call the needed planet every time the quickest one is chosen. Little time is needed to assure another president on the importance of the Galaxy Union, that’s why the duration of the negotiations with each planet can be considered equal to the dial duration time for those planets. As the presidents know nothing about each other’s plans, they do not take into consideration the possibility that, for example, the sought president may call himself or already know about the founding of the Galaxy Union from other sources.

The governments of all the $ n $ planets asked you to work out the negotiation plans. First you are to find out for every president how much time his supposed negotiations will take.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 3<=n<=200000 $ ) which represents the number of planets in the Galaxy and the number of communication channels equal to it. The next $ n $ lines contain three integers each $ a_{i} $ , $ b_{i} $ and $ t_{i} $ ( $ 1<=a_{i},b_{i}<=n,a_{i}≠b_{i},1<=t_{i}<=10^{3} $ ) that represent the numbers of planet joined by a communication channel and its "dial duration". There can be no more than one communication channel between a pair of planets.

### 输出格式

In the first line output $ n $ integers — the durations of the supposed negotiations for each president. Separate the numbers by spaces.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2 3
2 3 2
1 3 1

```
### 输出样例 #1

```cpp
4 5 3

```
### 输入样例 #2

```cpp
3
1 2 3
2 3 2
1 3 5

```
### 输出样例 #2

```cpp
8 5 7

```
### 输入样例 #3

```cpp
4
1 2 3
2 3 2
3 4 1
4 1 4

```
### 输出样例 #3

```cpp
12 8 8 8

```
