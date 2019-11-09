# Heroes

## 题目描述

The year of 2012 is coming...

According to an ancient choradrican legend in this very year, in 2012, Diablo and his brothers Mephisto and Baal will escape from hell, and innumerable hordes of demons will enslave the human world. But seven brave heroes have already gathered on the top of a mountain Arreat to protect us mere mortals from the effect of this terrible evil.

The seven great heroes are: amazon Anka, barbarian Chapay, sorceress Cleo, druid Troll, necromancer Dracul, paladin Snowy and a professional hit girl Hexadecimal. Heroes already know how much experience will be given for each of the three megabosses: $ a $ for Mephisto, $ b $ for Diablo and $ c $ for Baal.

Here's the problem: heroes are as much as seven and megabosses are only three! Then our heroes decided to split into three teams, where each team will go to destroy their own megaboss. Each team member will receive a ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF77A/4ac5ad94fb5392cd96ac09e5b84eb06e8c8a0edb.png) of experience, rounded down, where $ x $ will be the amount of experience for the killed megaboss and $ y $ — the number of people in the team.

Heroes do not want to hurt each other's feelings, so they want to split into teams so that the difference between the hero who received the maximum number of experience and the hero who received the minimum number of experience were minimal. Since there can be several divisions into teams, then you need to find the one in which the total amount of liking in teams were maximum.

It is known that some heroes like others. But if hero $ p $ likes hero $ q $ , this does not mean that the hero $ q $ likes hero $ p $ . No hero likes himself.

The total amount of liking in teams is the amount of ordered pairs $ (p,q) $ , such that heroes $ p $ and $ q $ are in the same group, and hero $ p $ likes hero $ q $ (but it is not important if hero $ q $ likes hero $ p $ ). In case of heroes $ p $ and $ q $ likes each other and they are in the same group, this pair should be counted twice, as $ (p,q) $ and $ (q,p) $ .

A team can consist even of a single hero, but it is important that every megaboss was destroyed. All heroes must be involved in the campaign against evil. None of the heroes can be in more than one team.

It is guaranteed that every hero is able to destroy any megaboss alone.

## 输入输出格式

### 输入格式

The first line contains a single non-negative integer $ n $ ( $ 0<=n<=42 $ ) — amount of liking between the heroes. Next $ n $ lines describe liking in the form "p likes q", meaning that the hero p likes the hero q (p $ ≠ $ q). Every liking is described in the input exactly once, no hero likes himself.

In the last line are given three integers $ a $ , $ b $ and $ c $ ( $ 1<=a,b,c<=2·10^{9} $ ), separated by spaces: the experience for Mephisto, the experience for Diablo and experience for Baal.

In all the pretests, except for examples from the statement, the following condition is satisfied: $ a=b=c $ .

### 输出格式

Print two integers — the minimal difference in the experience between two heroes who will receive the maximum and minimum number of experience points, and the maximal total amount of liking in teams (the number of friendships between heroes that end up in one team).

When calculating the second answer, the team division should satisfy the difference-minimizing contraint. I.e. primary you should minimize the difference in the experience and secondary you should maximize the total amount of liking.

## 输入输出样例

### 输入样例 #1

```cpp
3
Troll likes Dracul
Dracul likes Anka
Snowy likes Hexadecimal
210 200 180

```
### 输出样例 #1

```cpp
30 3

```
### 输入样例 #2

```cpp
2
Anka likes Chapay
Chapay likes Anka
10000 50 50

```
### 输出样例 #2

```cpp
1950 2

```
## 说明

A note to first example: it the first team should be Dracul, Troll and Anka, in the second one Hexadecimal and Snowy, and in the third Cleo и Chapay.

