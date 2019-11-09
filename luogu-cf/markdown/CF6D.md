# Lizards and Basements 2

## 题意翻译

题意

有一队人，你可以用火球点某个人，会对当前人造成a点伤害，对旁边的人造成b点伤害。

不能打1号和n号，求最少多少发点死所有人。

## 题目描述

This is simplified version of the problem used on the original contest. The original problem seems to have too difiicult solution. The constraints for input data have been reduced.

Polycarp likes to play computer role-playing game «Lizards and Basements». At the moment he is playing it as a magician. At one of the last levels he has to fight the line of archers. The only spell with which he can damage them is a fire ball. If Polycarp hits the $ i $ -th archer with his fire ball (they are numbered from left to right), the archer loses $ a $ health points. At the same time the spell damages the archers adjacent to the $ i $ -th (if any) — they lose $ b $ ( $ 1<=b<a<=10 $ ) health points each. As the extreme archers (i.e. archers numbered 1 and $ n $ ) are very far, the fire ball cannot reach them. Polycarp can hit any other archer with his fire ball. The amount of health points for each archer is known. An archer will be killed when this amount is less than 0. What is the minimum amount of spells Polycarp can use to kill all the enemies? Polycarp can throw his fire ball into an archer if the latter is already killed.

## 输入输出格式

### 输入格式

The first line of the input contains three integers $ n,a,b $ ( $ 3<=n<=10 $ ; $ 1<=b<a<=10 $ ). The second line contains a sequence of $ n $ integers — $ h_{1},h_{2},...,h_{n} $ ( $ 1<=h_{i}<=15 $ ), where $ h_{i} $ is the amount of health points the $ i $ -th archer has.

### 输出格式

In the first line print $ t $ — the required minimum amount of fire balls.

In the second line print $ t $ numbers — indexes of the archers that Polycarp should hit to kill all the archers in $ t $ shots. All these numbers should be between 2 and $ n-1 $ . Separate numbers with spaces. If there are several solutions, output any of them. Print numbers in any order.

## 输入输出样例

### 输入样例 #1

```cpp
3 2 1
2 2 2

```
### 输出样例 #1

```cpp
3
2 2 2 
```


### 输入样例 #2

```cpp
4 3 1
1 4 1 1

```
### 输出样例 #2

```cpp
4
2 2 3 3 
```


