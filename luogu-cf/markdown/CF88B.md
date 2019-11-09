# Keyboard

## 题意翻译

你有一个长方形的键盘，共n行，每行n个键。每个键可以打出小写字母，在按下Shift键时也可以打出大写字母。键盘上每个键是一个边长为1的正方形，相邻的键之间没有空隙。 你想用一只手吃辣条，另一只手编程，所以你得尝试只用一只手打字。但是当打字时按得键离Shift键太远（欧几里得距离大于x）时，你就不得不用到另一只手。 请计算出使用另一只手的最小次数。

输入输出格式：

输入格式：

第一行包含一个整数n,m,x（1<=n,m<=30,1<=x<=50)。 接下来的n行包含键盘排列的描述，每行有m个字符，字符间没有空格，“S”代表Shift键。 接下来的一个整数代表文本长度q（1<=q<=5*10^5)。接下来有q个字符代表文本，文本中只有大写和小写字母，

输出格式：

如果你能打出这一篇文本，那么输出另一只手的最小使用次数。如果无法全部打出（比如文本中有大写字母但没有Shift键，或键盘上没有要打的键）时，则输出-1。

感谢@handahao 提供的翻译

## 题目描述

Vasya learns to type. He has an unusual keyboard at his disposal: it is rectangular and it has $ n $ rows of keys containing $ m $ keys in each row. Besides, the keys are of two types. Some of the keys have lowercase Latin letters on them and some of the keys work like the "Shift" key on standard keyboards, that is, they make lowercase letters uppercase.

Vasya can press one or two keys with one hand. However, he can only press two keys if the Euclidean distance between the centers of the keys does not exceed $ x $ . The keys are considered as squares with a side equal to 1. There are no empty spaces between neighbouring keys.

Vasya is a very lazy boy, that's why he tries to type with one hand as he eats chips with his other one. However, it is possible that some symbol can't be typed with one hand only, because the distance between it and the closest "Shift" key is strictly larger than $ x $ . In this case he will have to use his other hand. Having typed the symbol, Vasya returns other hand back to the chips.

You are given Vasya's keyboard and the text. Count the minimum number of times Vasya will have to use the other hand.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ m $ , $ x $ ( $ 1<=n,m<=30,1<=x<=50 $ ).

Next $ n $ lines contain descriptions of all the keyboard keys. Each line contains the descriptions of exactly $ m $ keys, without spaces. The letter keys are marked with the corresponding lowercase letters. The "Shift" keys are marked with the "S" symbol.

Then follow the length of the text $ q $ $ (1<=q<=5·10^{5}) $ . The last line contains the text $ T $ , which consists of $ q $ symbols, which are uppercase and lowercase Latin letters.

### 输出格式

If Vasya can type the text, then print the minimum number of times he will have to use his other hand. Otherwise, print "-1" (without the quotes).

## 输入输出样例

### 输入样例 #1

```cpp
2 2 1
ab
cd
1
A

```
### 输出样例 #1

```cpp
-1

```
### 输入样例 #2

```cpp
2 2 1
ab
cd
1
e

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
2 2 1
ab
cS
5
abcBA

```
### 输出样例 #3

```cpp
1

```
### 输入样例 #4

```cpp
3 9 4
qwertyuio
asdfghjkl
SzxcvbnmS
35
TheQuIcKbRoWnFOXjummsovertHeLazYDOG

```
### 输出样例 #4

```cpp
2

```
## 说明

In the first sample the symbol "A" is impossible to print as there's no "Shift" key on the keyboard.

In the second sample the symbol "e" is impossible to print as there's no such key on the keyboard.

In the fourth sample the symbols "T", "G" are impossible to print with one hand. The other letters that are on the keyboard can be printed. Those symbols come up in the text twice, thus, the answer is 2.

