# Room Leader

## 题意翻译

### 题目描述

比赛开始时，参赛者被分进几个不同的房间。每个房间恰好包含 $n$ 位参赛者。在比赛中，参与者被要求解决五个问题， $A$ 、 $B$ 、 $C$ 、 $D$ 和 $E$ 。

对于每个问题，参赛者会根据解决给定问题的时长以及是否彻底解决获得一些积分。此外，参赛者可以对其他参赛者进行攻击。每成功攻击一次，即可赢得 $100$ 分；攻击不成功一次，则会损失 $50$ 分。每个参赛者的得分由他从所有问题及攻击中获得的得分总和表示。

请确定给定的一个房间内得分最高的参与者。

### 输入格式

第一行包含一个整数 $n$ ，它是房间中参赛者的人数（ $1 \leqslant n \leqslant 50$ ）。

接下来的 $n$ 行包含给定房间的参与者信息。第 $i+1$ 行包含 $1$ 个字符串 $handle_i$ 及 $7$ 个整数$plus_i,minus_i,a_i,b_i,c_i,d_i,e_i$，分别表示参赛者的名称，成功的攻击次数，失败的攻击次数以及他从问题 $A$ 、 $B$ 、 $C$ 、 $D$ 、 $E$ 获得的分数。每个参与者的名称由拉丁字母、数字和下划线组成，长度不少于 $1$ 个字符且不超过 $20$ 个字符。

所有整数的范围如下：

$0 \leqslant plus_i,minus_i \leqslant 50$ ；

$150 \leqslant a_i \leqslant 500$ 或 $a_i=0$ （若问题 $A$ 没有解决）；

$300 \leqslant b_i \leqslant 1000$ 或 $b_i=0$ （若问题 $B$ 没有解决）；

$450 \leqslant c_i \leqslant 1500$ 或 $c_i=0$ （若问题 $C$ 没有解决）；

$600 \leqslant d_i \leqslant 2000$ 或 $d_i=0$ （若问题 $D$ 没有解决）；

$750 \leqslant e_i \leqslant 2500$ 或 $e_i=0$ （若问题 $E$ 没有解决）；

所有数字都是整数。所有参与者都有不同的名称。可以确保房间中不存在多个参与者分数均为最高。

### 输出格式

输出共一行，房间内得分最高的参与者的名称。

## 题目描述

Let us remind you part of the rules of Codeforces. The given rules slightly simplified, use the problem statement as a formal document.

In the beginning of the round the contestants are divided into rooms. Each room contains exactly $ n $ participants. During the contest the participants are suggested to solve five problems, $ A $ , $ B $ , $ C $ , $ D $ and $ E $ . For each of these problem, depending on when the given problem was solved and whether it was solved at all, the participants receive some points. Besides, a contestant can perform hacks on other contestants. For each successful hack a contestant earns $ 100 $ points, for each unsuccessful hack a contestant loses $ 50 $ points. The number of points for every contestant is represented by the sum of points he has received from all his problems, including hacks.

You are suggested to determine the leader for some room; the leader is a participant who has maximum points.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ , which is the number of contestants in the room ( $ 1<=n<=50 $ ). The next $ n $ lines contain the participants of a given room. The $ i $ -th line has the format of " $ handle_{i} $ $ plus_{i} $ $ minus_{i} $ $ a_{i} $ $ b_{i} $ $ c_{i} $ $ d_{i} $ $ e_{i} $ " — it is the handle of a contestant, the number of successful hacks, the number of unsuccessful hacks and the number of points he has received from problems $ A $ , $ B $ , $ C $ , $ D $ , $ E $ correspondingly. The handle of each participant consists of Latin letters, digits and underscores and has the length from $ 1 $ to $ 20 $ characters. There are the following limitations imposed upon the numbers:

- $ 0<=plus_{i},minus_{i}<=50 $ ;

- $ 150<=a_{i}<=500 $ or $ a_{i}=0 $ , if problem $ A $ is not solved;

- $ 300<=b_{i}<=1000 $ or $ b_{i}=0 $ , if problem $ B $ is not solved;

- $ 450<=c_{i}<=1500 $ or $ c_{i}=0 $ , if problem $ C $ is not solved;

- $ 600<=d_{i}<=2000 $ or $ d_{i}=0 $ , if problem $ D $ is not solved;

- $ 750<=e_{i}<=2500 $ or $ e_{i}=0 $ , if problem $ E $ is not solved.

All the numbers are integer. All the participants have different handles. It is guaranteed that there is exactly one leader in the room (i.e. there are no two participants with the maximal number of points).

### 输出格式

Print on the single line the handle of the room leader.

## 输入输出样例

### 输入样例 #1

```cpp
5
Petr 3 1 490 920 1000 1200 0
tourist 2 0 490 950 1100 1400 0
Egor 7 0 480 900 950 0 1000
c00lH4x0R 0 10 150 0 0 0 0
some_participant 2 1 450 720 900 0 0

```
### 输出样例 #1

```cpp
tourist
```


## 说明

The number of points that each participant from the example earns, are as follows:

- Petr — $ 3860 $

- tourist — $ 4140 $

- Egor — $ 4030 $

- c00lH4x0R — $ -350 $

- some\_participant — $ 2220 $

Thus, the leader of the room is tourist.

