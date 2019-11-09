# Double Cola

## 题意翻译

## 题目描述

肖尔顿，莱奥纳多，佩妮，拉杰什和霍华德正在在卖“分裂可乐”的自动贩卖机那里排队。

队里第一个人（肖尔顿）会买一瓶分裂可乐，喝完以后他就会分裂成两个人并站到队尾。

下一个人（莱奥纳多）也会买一瓶分裂可乐，喝完后也会和刚才的肖尔顿一样分裂成两个人并站到队尾。

这个过程可以一直持续下去。~~（永动机）~~

举个例子，当佩妮喝下可乐（他之前的人也喝完了）后队列会变成这样：拉杰什，霍华德，肖尔顿，肖尔顿，莱奥纳多，莱奥纳多，佩妮，佩妮。

请您编写一个程序来输出喝下第$ n $罐分裂可乐的人。

__注意：__一开始的队列总会是这样的：肖尔顿，莱奥纳多，佩妮，拉杰什，霍华德。第一个去买可乐的人总会是肖尔顿。

## 输入输出格式

### 输入格式：

输入包含一个整数 $ n (1 <= n <= 10^9) $

### 输出格式：

输出一行，一个字符串，代表喝下第$ n $瓶分裂可乐的人的名字，只可能包含五种答案：分别是 "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"。

## 题目描述

Sheldon, Leonard, Penny, Rajesh and Howard are in the queue for a "Double Cola" drink vending machine; there are no other people in the queue. The first one in the queue (Sheldon) buys a can, drinks it and doubles! The resulting two Sheldons go to the end of the queue. Then the next in the queue (Leonard) buys a can, drinks it and gets to the end of the queue as two Leonards, and so on. This process continues ad infinitum.

For example, Penny drinks the third can of cola and the queue will look like this: Rajesh, Howard, Sheldon, Sheldon, Leonard, Leonard, Penny, Penny.

Write a program that will print the name of a man who will drink the $ n $ -th can.

Note that in the very beginning the queue looks like that: Sheldon, Leonard, Penny, Rajesh, Howard. The first person is Sheldon.

## 输入输出格式

### 输入格式

The input data consist of a single integer $ n $ ( $ 1<=n<=10^{9} $ ).

It is guaranteed that the pretests check the spelling of all the five names, that is, that they contain all the five possible answers.

### 输出格式

Print the single line — the name of the person who drinks the $ n $ -th can of cola. The cans are numbered starting from 1. Please note that you should spell the names like this: "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" (without the quotes). In that order precisely the friends are in the queue initially.

## 输入输出样例

### 输入样例 #1

```cpp
1

```
### 输出样例 #1

```cpp
Sheldon

```
### 输入样例 #2

```cpp
6

```
### 输出样例 #2

```cpp
Sheldon

```
### 输入样例 #3

```cpp
1802

```
### 输出样例 #3

```cpp
Penny

```
