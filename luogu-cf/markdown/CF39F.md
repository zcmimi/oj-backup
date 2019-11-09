# Pacifist frogs

## 题意翻译

拇指姑娘出了事故。她发现自己在沼泽地中央的一个小岛上，非常想去海边。

只有沿着一条连接小岛和海岸的路线，才能到达海岸。让我们假设这些山丘是从1到n，n等于它与岛屿之间的距离(以米为单位)。这座山和海岸也是1米。

拇指姑娘太小了，不能跳。幸运的是，一家生活在沼泽里的青蛙建议帮助她。每只青蛙都同意让拇指姑娘搭便车，但是拇指姑娘应该只选择一只青蛙。每只青蛙都有一定的跳跃长度。如果拇指姑娘同意接受一只青蛙的帮助，它的跳跃长度是d，青蛙会从山上的岛上跳到山丘d上，然后在山丘2d，然后3d等等，直到他们到达岸边(也就是在山那边发现自己)。

然而，还有一个问题：蚊子也生活在沼泽里。此刻，他们正在一些山丘上小睡。如果青蛙跳到有蚊子的山上，青蛙就会把蚊子击碎。拇指姑娘遇到的青蛙都是和平主义者，所以他们会发现每一只蚊子的死亡都是非常可悲的。帮助拇指姑娘选择一只能带她上岸的青蛙，并尽可能少地击碎蚊子。

输入

第一行包含三个整数。n, m和k (1≤n≤10^9, 1≤m, k≤100)-山丘、青蛙和蚊子的数量。第二行包含m整数d[i] (1≤d[i]≤10^9)——青蛙跳跃的长度。第三行包含k个整数——每只蚊子睡觉的山丘（位置）。每座山丘上只能有一只蚊子睡觉。行中的数字由单个空格分隔。

输出量

在第一行输出的青蛙击碎了最少的蚊子的数量，在第二行输出击碎的数量（不包括第一行），以增加的次序，有隔开的空格。

## 题目描述

Thumbelina has had an accident. She has found herself on a little island in the middle of a swamp and wants to get to the shore very much.

One can get to the shore only by hills that are situated along a straight line that connects the little island with the shore. Let us assume that the hills are numbered from $ 1 $ to $ n $ and the number of a hill is equal to the distance in meters between it and the island. The distance between the $ n $ -th hill and the shore is also $ 1 $ meter.

Thumbelina is too small to make such jumps. Fortunately, a family of frogs living in the swamp suggests to help her. Each frog agrees to give Thumbelina a ride but Thumbelina should choose only one frog. Each frog has a certain jump length. If Thumbelina agrees to accept help from a frog whose jump length is $ d $ , the frog will jump from the island on the hill $ d $ , then — on the hill $ 2d $ , then $ 3d $ and so on until they get to the shore (i.e. find itself beyond the hill $ n $ ).

However, there is one more problem: mosquitoes also live in the swamp. At the moment they have a siesta, and they are having a nap on some hills. If the frog jumps on a hill with a mosquito the frog will smash it. The frogs Thumbelina has met are pacifists, so they will find the death of each mosquito very much sad. Help Thumbelina choose a frog that will bring her to the shore and smash as small number of mosquitoes as possible.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ and $ k $ ( $ 1<=n<=10^{9} $ , $ 1<=m,k<=100 $ ) — the number of hills, frogs and mosquitoes respectively. The second line contains $ m $ integers $ d_{i} $ ( $ 1<=d_{i}<=10^{9} $ ) — the lengths of the frogs’ jumps. The third line contains $ k $ integers — the numbers of the hills on which each mosquito is sleeping. No more than one mosquito can sleep on each hill. The numbers in the lines are separated by single spaces.

### 输出格式

In the first line output the number of frogs that smash the minimal number of mosquitoes, in the second line — their numbers in increasing order separated by spaces. The frogs are numbered from $ 1 $ to $ m $ in the order of the jump length given in the input data.

## 输入输出样例

### 输入样例 #1

```cpp
5 3 5
2 3 4
1 2 3 4 5

```
### 输出样例 #1

```cpp
2
2 3

```
### 输入样例 #2

```cpp
1000000000 2 3
2 5
999999995 999999998 999999996

```
### 输出样例 #2

```cpp
1
2

```
