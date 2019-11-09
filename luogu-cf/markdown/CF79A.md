# Bus Game

## 题意翻译

在狐狸Ciel赢得一场编程现场赛之后，她乘坐公共汽车返回她的城堡。 公共汽车的车费是220日元。 她在巴士上遇到了兔子Hanako。 因为他们在公车上感到无聊，所以她们决定玩下面这个游戏。 起初，有一堆硬币，里面包含了x枚100日元硬币和y枚10日元硬币。 他们轮流从中取硬币。 Ciel先手拿。 在每个回合里，她们每次必须从堆中拿出刚好220日元。 在轮到Ciel时，如果她有多种方式可以从中取出220日元，她会选择包含最大数量的100日元硬币的方式。 轮到Hanako时，如果有多种方式可以取出220日元，她会选择包含最多10日元硬币的方式。如果轮到了Ciel或Hanako不能从堆中拿出220日元，那么她就会失败。 请确定这场游戏的胜利者。

输入格式： 第一行包括两个用空格分隔开的整数

输出格式： 如果Ciel能赢，那就输出Ciel，否则输出Hanako

说明： 第一回合（Ciel取），她会选择2个100日元硬币和2个10日元硬币。 在第二回合（Hanako取），她会选择1个100日元硬币和12个10日元硬币。 在第三回合（Ciel取），她不能取得220日元，所以Ciel会输。

Translated by @good_vegetable

## 题目描述

After Fox Ciel won an onsite round of a programming contest, she took a bus to return to her castle. The fee of the bus was 220 yen. She met Rabbit Hanako in the bus. They decided to play the following game because they got bored in the bus.

- Initially, there is a pile that contains $ x $ 100-yen coins and $ y $ 10-yen coins.

- They take turns alternatively. Ciel takes the first turn.

- In each turn, they must take exactly 220 yen from the pile. In Ciel's turn, if there are multiple ways to take 220 yen, she will choose the way that contains the maximal number of 100-yen coins. In Hanako's turn, if there are multiple ways to take 220 yen, she will choose the way that contains the maximal number of 10-yen coins.

- If Ciel or Hanako can't take exactly 220 yen from the pile, she loses.

Determine the winner of the game.

## 输入输出格式

### 输入格式

The first line contains two integers $ x $ ( $ 0<=x<=10^{6} $ ) and $ y $ ( $ 0<=y<=10^{6} $ ), separated by a single space.

### 输出格式

If Ciel wins, print "Ciel". Otherwise, print "Hanako".

## 输入输出样例

### 输入样例 #1

```cpp
2 2

```
### 输出样例 #1

```cpp
Ciel

```
### 输入样例 #2

```cpp
3 22

```
### 输出样例 #2

```cpp
Hanako

```
## 说明

In the first turn (Ciel's turn), she will choose 2 100-yen coins and 2 10-yen coins. In the second turn (Hanako's turn), she will choose 1 100-yen coin and 12 10-yen coins. In the third turn (Ciel's turn), she can't pay exactly 220 yen, so Ciel will lose.

