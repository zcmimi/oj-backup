# Looking for Order

## 题意翻译

## 题目描述

Lena喜欢秩序井然的生活。一天，她要去上大学了。突然，她发现整个房间乱糟糟的——她的手提包里的物品都散落在了地上。她想把所有的物品都放回她的手提包。但是，这里有一点问题：她一次最多只能拿两个物品，她也不能移动她的手提包。并且，因为她爱整洁的习惯，如果她拿起了一个物品，她也不能将它放在其他地方，除非放回她的手提包。

Lena把她的房间划分为了一个平面直角坐标系。现在Lena给你她的手提包和每个散落的物品的坐标（当然，一开始的时候她就和手提包站在一个地方）。她从坐标 $(x1,y1)$ 走到坐标 $(x2,y2)$ 需要用 $(x1-x2)^2+(y1-y2)^2$ 单位的时间。现在，Lena将告诉你她的房间的情况，请你为Lena找到一个拾起每个物品的顺序，使她拾起所有物品所需的总时间最小。当然，Lena最后需要返回她的手提包。

## 输入输出格式

### 输入格式

输入文件的第一行为Lena的手提包的坐标 $x_s$ , $y_s$ 。第二行为一个正整数 $n$ ，表示总的需要拾起的物品数。接下来的 $n$ 行每行包括两个整数，表示每个物品的坐标。

### 输出格式

输出的第一行为一个正整数，表示Lena拾起所有物品所需的最小时间。

输出的第二行为Lena拾起每个物品的顺序。（每一个物品由它的编号代表，0表示手提包）她应该从手提包(0)出发，在手提包(0)结束。

如,0 1 2 0 3 0

表示她从手提包出发，先拾起1号物品，再拾起2号物品，然后返回手提包（并放下1和2），再拾起3号物品，最后返回手提包。

如果有多条允许的路径，输出任一条。

## 输入输出样例

略

感谢@星烁晶熠辉 提供的翻译

## 题目描述

Girl Lena likes it when everything is in order, and looks for order everywhere. Once she was getting ready for the University and noticed that the room was in a mess — all the objects from her handbag were thrown about the room. Of course, she wanted to put them back into her handbag. The problem is that the girl cannot carry more than two objects at a time, and cannot move the handbag. Also, if he has taken an object, she cannot put it anywhere except her handbag — her inherent sense of order does not let her do so.

You are given the coordinates of the handbag and the coordinates of the objects in some Сartesian coordinate system. It is known that the girl covers the distance between any two objects in the time equal to the squared length of the segment between the points of the objects. It is also known that initially the coordinates of the girl and the handbag are the same. You are asked to find such an order of actions, that the girl can put all the objects back into her handbag in a minimum time period.

## 输入输出格式

### 输入格式

The first line of the input file contains the handbag's coordinates $ x_{s},y_{s} $ . The second line contains number $ n $ ( $ 1<=n<=24 $ ) — the amount of objects the girl has. The following $ n $ lines contain the objects' coordinates. All the coordinates do not exceed 100 in absolute value. All the given positions are different. All the numbers are integer.

### 输出格式

In the first line output the only number — the minimum time the girl needs to put the objects into her handbag.

In the second line output the possible optimum way for Lena. Each object in the input is described by its index number (from 1 to $ n $ ), the handbag's point is described by number 0. The path should start and end in the handbag's point. If there are several optimal paths, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
0 0
2
1 1
-1 1

```
### 输出样例 #1

```cpp
8
0 1 2 0 

```
### 输入样例 #2

```cpp
1 1
3
4 3
3 4
0 0

```
### 输出样例 #2

```cpp
32
0 1 2 0 3 0 

```
