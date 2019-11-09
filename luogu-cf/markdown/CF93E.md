# Lostborn

## 题目描述

Igor K. very much likes a multiplayer role playing game WineAge II. Who knows, perhaps, that might be the reason for his poor performance at the university. As any person who plays the game, he is interested in equipping his hero with as good weapon and outfit as possible.

One day, as he was reading the game's forum yet again, he discovered a very interesting fact. As it turns out, each weapon in the game is characterised with $ k $ different numbers: $ a_{1},...,a_{k} $ . They are called hit indicators and according to the game developers' plan they are pairwise coprime.

The damage that is inflicted during a hit depends not only on the weapon's characteristics, but also on the hero's strength parameter. Thus, if the hero's strength equals $ n $ , than the inflicted damage will be calculated as the number of numbers on the segment ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF93E/7c9ede55f73532a1d6ca7574887c95534e61c3ff.png), that aren't divisible by any hit indicator $ a_{i} $ .

Recently, having fulfilled another quest, Igor K. found a new Lostborn sword. He wants to know how much damage he will inflict upon his enemies if he uses it.

## 输入输出格式

### 输入格式

The first line contains two integers: $ n $ and $ k $ ( $ 1<=n<=10^{13} $ , $ 1<=k<=100 $ ). They are the indicator of Igor K's hero's strength and the number of hit indicators.

The next line contains space-separated $ k $ integers $ a_{i} $ ( $ 1<=a_{i}<=1000 $ ). They are Lostborn sword's hit indicators. The given $ k $ numbers are pairwise coprime.

### 输出格式

Print the single number — the damage that will be inflicted by Igor K.'s hero when he uses his new weapon.

Please, do not use the %lld specificator to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specificator.

## 输入输出样例

### 输入样例 #1

```cpp
20 3
2 3 5

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
50 2
15 8

```
### 输出样例 #2

```cpp
41

```
