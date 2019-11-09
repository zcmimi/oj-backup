# Hercule Poirot Problem

## 题意翻译

有$n$个房间和$m$扇门，每扇门有且仅有一把钥匙

有$k$个人度过了两天，在第一天开始的时候所有的门都是关闭的，在第二天结束的时候，所有的门也都是关闭的

在这两天内，每个人可以执行如下操作若干次：

1. 关上一扇门（前提：他有这扇门的钥匙，且这扇门与当前房间相连）

2. 打开一扇门（前提：他有这扇门的钥匙，且这扇门与当前房间相连）

3. 将自己手上的一些钥匙给与他同处于一间房里的其他人

4. 走向一个与当前房间相连、且门是打开的房间

给出第一天开始前和第二天结束后每个人的位置及拥有的钥匙

判断是否可行

## 题目描述

Today you are to solve the problem even the famous Hercule Poirot can't cope with! That's why this crime has not yet been solved and this story was never included in Agatha Christie's detective story books.

You are not informed on what crime was committed, when and where the corpse was found and other details. We only know that the crime was committed in a house that has $ n $ rooms and $ m $ doors between the pairs of rooms. The house residents are very suspicious, that's why all the doors can be locked with keys and all the keys are different. According to the provided evidence on Thursday night all the doors in the house were locked, and it is known in what rooms were the residents, and what kind of keys had any one of them. The same is known for the Friday night, when all the doors were also locked. On Friday it was raining heavily, that's why nobody left the house and nobody entered it. During the day the house residents could

- open and close doors to the neighboring rooms using the keys at their disposal (every door can be opened and closed from each side);

- move freely from a room to a room if a corresponding door is open;

- give keys to one another, being in one room.

"Little grey matter" of Hercule Poirot are not capable of coping with such amount of information. Find out if the positions of people and keys on the Thursday night could result in the positions on Friday night, otherwise somebody among the witnesses is surely lying.

## 输入输出格式

### 输入格式

The first line contains three preset integers $ n $ , $ m $ и $ k $ ( $ 1<=n,m,k<=1000 $ ) — the number of rooms, the number of doors and the number of house residents respectively. The next $ m $ lines contain pairs of room numbers which join the doors. The rooms are numbered with integers from $ 1 $ to $ n $ . There cannot be more that one door between the pair of rooms. No door connects a room with itself. The next $ k $ lines describe the residents' position on the first night. Every line contains a resident's name (a non-empty line consisting of no more than $ 10 $ Latin letters), then after a space follows the room number, then, after a space — the number of keys the resident has. Then follow written space-separated numbers of the doors that can be unlocked by these keys. The doors are numbered with integers from $ 1 $ to $ m $ in the order in which they are described in the input data. All the residents have different names, uppercase and lowercase letters considered to be different. Every $ m $ keys occurs exactly once in the description. Multiple people may be present in one room, some rooms may be empty. The next $ k $ lines describe the position of the residents on the second night in the very same format. It is guaranteed that in the second night's description the residents' names remain the same and every $ m $ keys occurs exactly once.

### 输出格式

Print "YES" (without quotes) if the second arrangement can result from the first one, otherwise, print "NO".

## 输入输出样例

### 输入样例 #1

```cpp
2 1 2
1 2
Dmitry 1 1 1
Natalia 2 0
Natalia 1 1 1
Dmitry 2 0

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
4 4 3
1 3
1 2
2 3
3 4
Artem 1 1 4
Dmitry 1 1 2
Edvard 4 2 1 3
Artem 2 0
Dmitry 1 0
Edvard 4 4 1 2 3 4

```
### 输出样例 #2

```cpp
NO

```
