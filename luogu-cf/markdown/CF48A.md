# Rock-paper-scissors

## 题意翻译

 ## 题目大意

三个人玩石头剪刀布，问谁赢了。

输入三行，每行一个字符串（rock(石头)，scissors(剪刀)，paper(布)），分别表示这三个人出的手势。

石头打破剪刀，剪刀剪纸，纸裹在石头上。

当有一个人同时赢过其他两人时，他获胜，否则胜负不分。

如果第一个人赢了输出"F"（没有引号），第二个人赢了输出"M"，第三个人赢了输出"S"，胜负不分输出"?"。

Translated by Khassar

## 题目描述

Uncle Fyodor, Matroskin the Cat and Sharic the Dog live their simple but happy lives in Prostokvashino. Sometimes they receive parcels from Uncle Fyodor’s parents and sometimes from anonymous benefactors, in which case it is hard to determine to which one of them the package has been sent. A photographic rifle is obviously for Sharic who loves hunting and fish is for Matroskin, but for whom was a new video game console meant? Every one of the three friends claimed that the present is for him and nearly quarreled. Uncle Fyodor had an idea how to solve the problem justly: they should suppose that the console was sent to all three of them and play it in turns. Everybody got relieved but then yet another burning problem popped up — who will play first? This time Matroskin came up with a brilliant solution, suggesting the most fair way to find it out: play rock-paper-scissors together. The rules of the game are very simple. On the count of three every player shows a combination with his hand (or paw). The combination corresponds to one of three things: a rock, scissors or paper. Some of the gestures win over some other ones according to well-known rules: the rock breaks the scissors, the scissors cut the paper, and the paper gets wrapped over the stone. Usually there are two players. Yet there are three friends, that’s why they decided to choose the winner like that: If someone shows the gesture that wins over the other two players, then that player wins. Otherwise, another game round is required. Write a program that will determine the winner by the gestures they have shown.

## 输入输出格式

### 输入格式

The first input line contains the name of the gesture that Uncle Fyodor showed, the second line shows which gesture Matroskin showed and the third line shows Sharic’s gesture.

### 输出格式

Print "F" (without quotes) if Uncle Fyodor wins. Print "M" if Matroskin wins and "S" if Sharic wins. If it is impossible to find the winner, print "?".

## 输入输出样例

### 输入样例 #1

```cpp
rock
rock
rock

```
### 输出样例 #1

```cpp
?

```
### 输入样例 #2

```cpp
paper
rock
rock

```
### 输出样例 #2

```cpp
F

```
### 输入样例 #3

```cpp
scissors
rock
rock

```
### 输出样例 #3

```cpp
?

```
### 输入样例 #4

```cpp
scissors
paper
rock

```
### 输出样例 #4

```cpp
?

```
