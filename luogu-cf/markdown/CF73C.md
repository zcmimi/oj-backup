# LionAge II

## 题意翻译

珂朵莉给了你一个字符串$S$。她希望你改变其中的$k$个字符，使得整个字符串的**默契值**最高。

一个字符串的默契值定义为，对所有相邻的字符对$(x,y)$，在总和中加上$c(x,y)$后得到的值。$c(x,y)$会在输入里给出。

你只需要求出最高可能得到的**默契值**。

## 题目描述

Vasya plays the LionAge II. He was bored of playing with a stupid computer, so he installed this popular MMORPG, to fight with his friends. Vasya came up with the name of his character — non-empty string $ s $ , consisting of a lowercase Latin letters. However, in order not to put up a front of friends, Vasya has decided to change no more than $ k $ letters of the character name so that the new name sounded as good as possible. Euphony of the line is defined as follows: for each pair of adjacent letters $ x $ and $ y $ ( $ x $ immediately precedes $ y $ ) the bonus $ c(x,y) $ is added to the result. Your task is to determine what the greatest Euphony can be obtained by changing at most $ k $ letters in the name of the Vasya's character.

## 输入输出格式

### 输入格式

The first line contains character's name $ s $ and an integer number $ k $ ( $ 0<=k<=100 $ ). The length of the nonempty string $ s $ does not exceed $ 100 $ . The second line contains an integer number $ n $ ( $ 0<=n<=676 $ ) — amount of pairs of letters, giving bonus to the euphony. The next $ n $ lines contain description of these pairs « $ x $ $ y $ $ c $ », which means that sequence $ xy $ gives bonus $ c $ ( $ x,y $ — lowercase Latin letters, $ -1000<=c<=1000) $ . It is guaranteed that no pair $ x $ $ y $ mentioned twice in the input data.

### 输出格式

Output the only number — maximum possible euphony оf the new character's name.

## 输入输出样例

### 输入样例 #1

```cpp
winner 4
4
s e 7
o s 8
l o 13
o o 8

```
### 输出样例 #1

```cpp
36
```


### 输入样例 #2

```cpp
abcdef 1
5
a b -10
b c 5
c d 5
d e 5
e f 5

```
### 输出样例 #2

```cpp
20
```


## 说明

In the first example the most euphony name will be $ looser $ . It is easy to calculate that its euphony is 36.

