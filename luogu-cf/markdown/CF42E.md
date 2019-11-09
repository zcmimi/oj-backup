# Baldman and the military

## 题意翻译

# 题目描述

鲍德曼拥有独特的能力 - 创造虫洞！考虑到太空中的两个位置，Baldman可以制造一个虫洞，可以在两个方向之间移动它们。不幸的是，对于Baldman来说，这样的操作并不是免费的：每个创建的虫洞都会让他失去大量的头发。

由于这种非凡的能力，鲍德曼引起了军方的注意。他被指控承担了一项特殊任务。

军事基地由几个地下物体组成，其中一些与双向隧道相连。在每对物体之间必然存在通过隧道系统的路径。另外，恰好两个物体与表面连接。为了安全起见，巡逻队每天都会检查隧道系统：他进入与地面相连的一个物体，通过每个隧道至少走一次基地，然后穿过与地面相连的一个物体。他可以通过同一个物体或通过不同的物体进入和离开。军事管理部门注意到巡逻队多次访问一些隧道，并决定优化这一过程。现在他们遇到了一个问题：需要制作虫洞系统以允许巡逻，该巡逻恰好通过每个隧道一次。同时允许巡逻任意次数通过每个虫洞。

这就是鲍德曼开始运作的地方：他是计划和建立虫洞系统的人。不幸的是，由于严格保密，军方无法告诉他隧道的安排。相反，他们坚持认为他的门户系统解决了任何满足给定条件的隧道布置的问题。尽管如此，鲍德曼还是有一些信息：他知道他可以连接哪些物体，以及花费多少（头发）。而且，明天他将被告知哪些物体（正好两个）与表面相连。当然，我们的英雄决定不浪费任何时间并计算完成一些物体对的最低成本（他发现可能是与表面相关的物体）。帮助鲍德曼！

## 题目描述

Baldman is a warp master. He possesses a unique ability — creating wormholes! Given two positions in space, Baldman can make a wormhole which makes it possible to move between them in both directions. Unfortunately, such operation isn't free for Baldman: each created wormhole makes him lose plenty of hair from his head.

Because of such extraordinary abilities, Baldman has caught the military's attention. He has been charged with a special task. But first things first.

The military base consists of several underground objects, some of which are connected with bidirectional tunnels. There necessarily exists a path through the tunnel system between each pair of objects. Additionally, exactly two objects are connected with surface. For the purposes of security, a patrol inspects the tunnel system every day: he enters one of the objects which are connected with surface, walks the base passing each tunnel at least once and leaves through one of the objects connected with surface. He can enter and leave either through the same object, or through different objects. The military management noticed that the patrol visits some of the tunnels multiple times and decided to optimize the process. Now they are faced with a problem: a system of wormholes needs to be made to allow of a patrolling which passes each tunnel exactly once. At the same time a patrol is allowed to pass each wormhole any number of times.

This is where Baldman comes to operation: he is the one to plan and build the system of the wormholes. Unfortunately for him, because of strict confidentiality the military can't tell him the arrangement of tunnels. Instead, they insist that his system of portals solves the problem for any arrangement of tunnels which satisfies the given condition. Nevertheless, Baldman has some information: he knows which pairs of objects he can potentially connect and how much it would cost him (in hair). Moreover, tomorrow he will be told which objects (exactly two) are connected with surface. Of course, our hero decided not to waste any time and calculate the minimal cost of getting the job done for some pairs of objects (which he finds likely to be the ones connected with surface). Help Baldman!

## 输入输出格式

### 输入格式

First line of the input contains a single natural number $ n $ ( $ 2<=n<=100000 $ ) — the number of objects on the military base. The second line — one number $ m $ ( $ 1<=m<=200000 $ ) — the number of the wormholes Baldman can make. The following $ m $ lines describe the wormholes: each line contains three integer numbers $ a,b,c $ ( $ 1<=a,b<=n,1<=c<=100000 $ ) — the numbers of objects which can be connected and the number of hair Baldman has to spend to make this wormhole.

The next line contains one natural number $ q $ ( $ 1<=q<=100000 $ ) — the number of queries. Finally, the last $ q $ lines contain a description of one query each — a pair of numbers of different objects $ a_{i},b_{i} $ ( $ 1<=a_{i},b_{i}<=n $ , $ a_{i}≠b_{i} $ ). There could be more than one wormhole between a pair of objects.

### 输出格式

Your program should output $ q $ lines, one for each query. The $ i $ -th line should contain a single integer number — the answer for $ i $ -th query: the minimum cost (in hair) of a system of wormholes allowing the optimal patrol for any system of tunnels (satisfying the given conditions) if $ a_{i} $ and $ b_{i} $ are the two objects connected with surface, or "-1" if such system of wormholes cannot be made.

## 输入输出样例

### 输入样例 #1

```cpp
2
1
1 2 3
1
1 2

```
### 输出样例 #1

```cpp
0

```
### 输入样例 #2

```cpp
3
1
1 2 3
2
1 2
1 3

```
### 输出样例 #2

```cpp
-1
3

```
