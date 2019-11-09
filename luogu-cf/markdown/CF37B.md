# Computer Game

## 题意翻译

题目描述

你正在玩你最喜欢的一款游戏，现在你闯到了最后一关，要和大$Boss$一决高下。

$Boss$有两个属性：生命值$max$和每秒钟回复的生命值$reg$。

你手上有$N$个卷轴，每个卷轴也有两个属性：卷轴使用时$Boss$的最大血量**百分比**$pow_i$（如果$Boss$的血量**百分比**大于$pow_i$，则无法使用这个卷轴）和卷轴每秒钟造成的伤害$dmg_i$。卷轴是一次性的，但是它的效果会持续到游戏结束。

每一秒钟战斗的顺序是：$Boss$先受到所有卷轴造成的伤害，然后回复$reg$点生命值（当然，$Boss$的血量不能超过$max$），然后你使用可以使用的**一个**卷轴。

当某一秒$Boss$受到伤害**并回复血量之后**血量小于等于$0$时，你就赢了。

现在请你回答：你是否能够赢这一局游戏？如果可以，求出最短用时、每一个卷轴是否被使用和使用过的卷轴被使用的时间。

注意：在获胜的那一秒不能使用卷轴

输入格式

第一行三个正整数$N,max,reg(1 \leq N,max,reg \leq 1000)$

接下来$N$行每行两个正整数$pow_i,dmg_i(1 \leq pow_i \leq 100 , 1 \leq dmg_i \leq 2000)$

输出格式

如果这一局游戏无法获胜，输出一行$NO$，否则第一行输出$YES$，第二行输出两个整数表示最短用时$T$和在最短用时下使用的卷轴数量$K$，接下来$K$行每行两个整数$t_i,a_i$表示在第$t_i$秒使用了第$a_i$个卷轴。

卷轴标号从$1$到$N$。我们认为第一个使用的卷轴在第$0$秒被使用。输出按照$t$升序输出。

## 题目描述

Vasya’s elder brother Petya loves playing computer games. In one of his favourite computer games Petya reached the final level where a fight with the boss take place.

While playing the game Petya found spell scrolls and now he is about to use them. Let’s describe the way fighting goes on this level:

1\) The boss has two parameters: $ max $ — the initial amount of health and $ reg $ — regeneration rate per second.

2\) Every scroll also has two parameters: $ pow_{i} $ — spell power measured in percents — the maximal amount of health counted off the initial one, which allows to use the scroll (i.e. if the boss has more than $ pow_{i} $ percent of health the scroll cannot be used); and $ dmg_{i} $ the damage per second inflicted upon the boss if the scroll is used. As soon as a scroll is used it disappears and another spell is cast upon the boss that inflicts $ dmg_{i} $ of damage per second upon him until the end of the game.

During the battle the actions per second are performed in the following order: first the boss gets the damage from all the spells cast upon him, then he regenerates $ reg $ of health (at the same time he can’t have more than $ max $ of health), then the player may use another scroll (no more than one per second).

The boss is considered to be defeated if at the end of a second he has nonpositive ( $ <=0 $ ) amount of health.

Help Petya to determine whether he can win with the set of scrolls available to him and if he can, determine the minimal number of seconds he needs to do it.

## 输入输出格式

### 输入格式

The first line contains three integers $ N $ , $ max $ and $ reg $ ( $ 1<=N,max,reg<=1000 $ ) –– the amount of scrolls and the parameters of the boss. The next $ N $ lines contain two integers $ pow_{i} $ and $ dmg_{i} $ each — the parameters of the $ i $ -th scroll ( $ 0<=pow_{i}<=100 $ , $ 1<=dmg_{i}<=2000 $ ).

### 输出格式

In case Petya can’t complete this level, output in the single line NO.

Otherwise, output on the first line YES. On the second line output the minimal time after which the boss can be defeated and the number of used scrolls. In the next lines for each used scroll output space-separated number of seconds passed from the start of the battle to the moment the scroll was used and the number of the scroll. Scrolls are numbered starting from 1 in the input order. The first scroll is considered to be available to be used after $ 0 $ seconds.

Output scrolls in the order they were used. It is not allowed to use scrolls after the boss is defeated.

## 输入输出样例

### 输入样例 #1

```cpp
2 10 3
100 3
99 1

```
### 输出样例 #1

```cpp
NO

```
### 输入样例 #2

```cpp
2 100 10
100 11
90 9

```
### 输出样例 #2

```cpp
YES
19 2
0 1
10 2

```
