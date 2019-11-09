# Don&#039;t fear, DravDe is kind

## 题意翻译

别怕，DravDe很善良

【题目描述】

一个有N辆卡车的车队从城市Z驶向城市3，来到了一条叫做“恐惧隧道”的隧道。在卡车司机中，有传言说怪物DravDe在那条隧道里搜寻司机。有些司机害怕先走，而其他人则害怕后走。但让我们考虑一般情况，每辆卡车用四个数字描述：

###### •v，卡车的价值，包括乘客和货物

###### •c，乘客数量，包括司机本人

###### •l，当前辆卡车之前应该进入的隧道的总人数，这样，当前司机就可以克服他的恐惧（如果怪物出现在那辆车前面，它会先吃掉他们）

###### •r，当前辆卡车之后应该进入的隧道的总人数，这样，当前司机就可以克服他的恐惧（如果怪物出现在那辆车后面，它会先吃掉他们）

由于路面很窄，如果

DravDe

一旦出现，就不可能逃离。此外，车队不能重新安排。卡

车的顺序是不能改变的，但是有卡车会停留在隧道附近无限期。你，作为车队的头儿，应该

把一些卡车移走（是的，忽略这些卡车的价值），这样车队的其余部分可以通过隧道。求移

走一些卡车后，剩余卡车的总价值最大是多少。

感谢@Hamakaze 提供的翻译

## 题目描述

A motorcade of $ n $ trucks, driving from city «Z» to city «З», has approached a tunnel, known as Tunnel of Horror. Among truck drivers there were rumours about monster DravDe, who hunts for drivers in that tunnel. Some drivers fear to go first, others - to be the last, but let's consider the general case. Each truck is described with four numbers:

- $ v $ — value of the truck, of its passangers and cargo

- $ c $ — amount of passanger on the truck, the driver included

- $ l $ — total amount of people that should go into the tunnel before this truck, so that the driver can overcome his fear («if the monster appears in front of the motorcade, he'll eat them first»)

- $ r $ — total amount of people that should follow this truck, so that the driver can overcome his fear («if the monster appears behind the motorcade, he'll eat them first»).

Since the road is narrow, it's impossible to escape DravDe, if he appears from one side. Moreover, the motorcade can't be rearranged. The order of the trucks can't be changed, but it's possible to take any truck out of the motorcade, and leave it near the tunnel for an indefinite period. You, as the head of the motorcade, should remove some of the trucks so, that the rest of the motorcade can move into the tunnel and the total amount of the left trucks' values is maximal.

## 输入输出格式

### 输入格式

The first input line contains integer number $ n $ ( $ 1<=n<=10^{5} $ ) — amount of trucks in the motorcade. The following $ n $ lines contain four integers each. Numbers in the $ i $ -th line: $ v_{i},c_{i},l_{i},r_{i} $ ( $ 1<=v_{i}<=10^{4},1<=c_{i}<=10^{5},0<=l_{i},r_{i}<=10^{5} $ ) — describe the $ i $ -th truck. The trucks are numbered from 1, counting from the front of the motorcade.

### 输出格式

In the first line output number $ k $ — amount of trucks that will drive into the tunnel. In the second line output $ k $ numbers — indexes of these trucks in ascending order. Don't forget please that you are not allowed to change the order of trucks. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
5
1 1 0 3
1 1 1 2
1 1 2 1
1 1 3 0
2 1 3 0

```
### 输出样例 #1

```cpp
4
1 2 3 5 

```
### 输入样例 #2

```cpp
5
1 1 0 3
10 1 2 1
2 2 1 1
10 1 1 2
3 1 3 0

```
### 输出样例 #2

```cpp
3
1 3 5 

```
