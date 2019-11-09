# Ivan the Fool VS Gorynych the Dragon

## 题意翻译

曾几何时，在一个遥远的王国......好吧，让我们从傻瓜Ivan遇见龙Gorynych那一刻开始。Ivan掏出魔剑，战斗开始了。首先Gorynych有h个头和t个尾巴。随着剑的每次攻击，Ivan都可以砍掉几个头（1~n个，但不超过Gorynych现在有的），或几个尾巴（1~m个，但不超过Gorynych现在有的）。同时，可怕的是，Gorynych龙也可以长出新的头和尾巴。而且正在增长的头和尾巴的数量是由当前攻击削减的头或尾巴的数量决定的。当头和尾巴的总数超过R，Gorynych龙使出最后一击并且杀死了傻瓜Ivan。这就是为什么伊万想要尽快切断龙的头和尾巴，并赢得胜利。这些事件也可以以第三种方式发展：对手中的任何一方都不可能胜过对方，他们会一直持续战斗。

这个故事是这样的： 容易说，难做。你的任务是写一个决定战斗结果的程序。考虑Ivan连续攻击。在每次攻击之后，Gorynych根据切割的数量生长出许多新的头部和尾部。如果在打击之后他失去了所有的头和尾巴，并且不能长出新的，Gorynych龙就被打败了。Ivan以最佳方式打架（傻瓜是幸运的），即

如果伊万能赢，他要保证攻击数最少;

如果不可能击败Gorynych，但是可以在无限长的时间内抵抗他，那么这就是Ivan选择的战略。

如果Gorynych赢了，Ivan会尽可能长时间抵制他。

## 题目描述

Once upon a time in a kingdom far, far away… Okay, let’s start at the point where Ivan the Fool met Gorynych the Dragon. Ivan took out his magic sword and the battle began. First Gorynych had $ h $ heads and $ t $ tails. With each strike of the sword Ivan can either cut off several heads (from $ 1 $ to $ n $ , but not more than Gorynych has at the moment), or several tails (from $ 1 $ to $ m $ , but not more than Gorynych has at the moment). At the same time, horrible though it seems, Gorynych the Dragon can also grow new heads and tails. And the number of growing heads and tails is determined uniquely by the number of heads or tails cut by the current strike. When the total number of heads and tails exceeds $ R $ , Gorynych the Dragon strikes its final blow and destroys Ivan the Fool. That’s why Ivan aims to cut off all the dragon’s heads and tails as quickly as possible and win. The events can also develop in a third way: neither of the opponents can win over the other one and they will continue fighting forever.

The tale goes like this; easy to say, hard to do. Your task is to write a program that will determine the battle’s outcome. Consider that Ivan strikes consecutively. After each blow Gorynych grows a number of new heads and tails depending on the number of cut ones. Gorynych the Dragon is defeated if after the blow he loses all his heads and tails and can’t grow new ones. Ivan fights in the optimal way (fools are lucky), i.e.

- if Ivan can win, he wins having struck the least number of blows;

- if it is impossible to defeat Gorynych, but is possible to resist him for an infinitely long period of time, then that’s the strategy Ivan chooses;

- if Gorynych wins in any case, Ivan aims to resist him for as long as possible.

## 输入输出格式

### 输入格式

The first line contains three integers $ h $ , $ t $ and $ R $ ( $ 0<=h,t,R<=200 $ , $ 0<h+t<=R $ ) which represent the initial numbers of Gorynych’s heads and tails and the largest total number of heads and tails with which Gorynych the Dragon does not yet attack. The next line contains integer $ n $ ( $ 1<=n<=200 $ ). The next $ n $ contain pairs of non-negative numbers " $ h_{i} $ $ t_{i} $ " which represent the number of heads and the number of tails correspondingly, that will grow if Gorynych has $ i $ heads ( $ 1<=i<=n $ ) cut. The next line contains an integer $ m $ ( $ 1<=m<=200 $ ) and then — the description of Gorynych’s behavior when his tails are cut off in the format identical to the one described above. All the numbers in the input file do not exceed $ 200 $ .

### 输出格式

Print "Ivan" (without quotes) in the first line if Ivan wins, or "Zmey" (that means a dragon in Russian) if Gorynych the Dragon wins. In the second line print a single integer which represents the number of blows Ivan makes. If the battle will continue forever, print in the first line "Draw".

## 输入输出样例

### 输入样例 #1

```cpp
2 2 4
2
1 0
0 1
3
0 1
0 1
0 0

```
### 输出样例 #1

```cpp
Ivan
2

```
### 输入样例 #2

```cpp
2 2 4
1
0 1
1
1 0

```
### 输出样例 #2

```cpp
Draw

```
### 输入样例 #3

```cpp
2 2 5
1
1 1
1
3 0

```
### 输出样例 #3

```cpp
Zmey
2

```
