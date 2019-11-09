# Ball Game

## 题意翻译

原题意

幼儿园老师纳塔利娅帕夫洛夫娜发明了一种新的球类游戏。这场比赛不仅培养了孩子们的体格，还教会了他们如何计数。

游戏如下。孩子们围成一圈。将孩子顺时针编号为1至n的数字，并且孩子1持球

之后有n-1次投球 第i次投球将会把球从持球孩子手中传至持球孩子右边第i个孩子

比如有8个孩子 依次接到球的孩子编号是 2 4 7 3 8 ...

简洁版题意

有数列 $f$ ， $f_0 = 1$ ， $f_i=((f_{i-1}+i-1)\;mod\;n)+1$ 。输出 $f_1$ ~ $f_{n-1}$ 。

输入

n

2<=n<=100

输出

n-1个数

每次投球接到球孩子的编号

Translate by @Diex

## 题目描述

A kindergarten teacher Natalia Pavlovna has invented a new ball game. This game not only develops the children's physique, but also teaches them how to count.

The game goes as follows. Kids stand in circle. Let's agree to think of the children as numbered with numbers from $ 1 $ to $ n $ clockwise and the child number $ 1 $ is holding the ball. First the first child throws the ball to the next one clockwise, i.e. to the child number $ 2 $ . Then the child number $ 2 $ throws the ball to the next but one child, i.e. to the child number $ 4 $ , then the fourth child throws the ball to the child that stands two children away from him, i.e. to the child number $ 7 $ , then the ball is thrown to the child who stands $ 3 $ children away from the child number $ 7 $ , then the ball is thrown to the child who stands $ 4 $ children away from the last one, and so on. It should be mentioned that when a ball is thrown it may pass the beginning of the circle. For example, if $ n=5 $ , then after the third throw the child number $ 2 $ has the ball again. Overall, $ n-1 $ throws are made, and the game ends.

The problem is that not all the children get the ball during the game. If a child doesn't get the ball, he gets very upset and cries until Natalia Pavlovna gives him a candy. That's why Natalia Pavlovna asks you to help her to identify the numbers of the children who will get the ball after each throw.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 2<=n<=100 $ ) which indicates the number of kids in the circle.

### 输出格式

In the single line print $ n-1 $ numbers which are the numbers of children who will get the ball after each throw. Separate the numbers by spaces.

## 输入输出样例

### 输入样例 #1

```cpp
10

```
### 输出样例 #1

```cpp
2 4 7 1 6 2 9 7 6

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
2 1

```
