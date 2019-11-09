# Fire and Ice

## 题意翻译

题目描述

最近有一款特别火的游戏。

玩家操作冰川王子去抵御火族的攻击。

游戏具体流程是这样的：

火族的火苗骑士在冰族城墙外排成一排。冰川王子需要消灭所有的火苗骑士。

你可以把游戏界面看成一个3*n的矩阵。冰川王子在城墙上。

他共有三种操作：

1.向右走一个单位，前提是这里有冰块

2.向左走一个单位，前提他不在城墙上

3.释放魔法。如果他右侧没有冰块，则建一个冰块，如果有冰块，则把这个冰块打掉。

如果有冰块被打掉，则它右侧的所有冰块会下落。

每个操作都是1s。下落时间不计。

火苗骑士有不同的血量值，如果冰块下落砸到火苗骑士则它的生命值-1。如果火苗骑士生命值为0则消失。

现在你要求出用最少的时间消除所有火苗骑士的方案。

输入

第一行一个整数n，表示火苗骑士排了多长的队。

第二行n个整数，表示ai位置上的火苗骑士的生命值。如果为0说明该出没有火苗骑士。

输出

一行一个字符串，表示用最少时间消除所有火苗骑士的方案。

提示

注意火苗骑士和城墙是有一个单位的距离的。

## 题目描述

The Fire Lord attacked the Frost Kingdom. He has already got to the Ice Fortress, where the Snow Queen dwells. He arranged his army on a segment $ n $ in length not far from the city walls. And only the frost magician Solomon can save the Frost Kingdom.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF89E/55432292a936aea49d5c5885282505297fa5e79d.png)The $ n $ -long segment is located at a distance equal exactly to $ 1 $ from the castle walls. It can be imaginarily divided into unit segments. On some of the unit segments fire demons are located — no more than one demon per position. Each demon is characterised by his strength - by some positive integer. We can regard the fire demons being idle.

Initially Solomon is positioned on the fortress wall. He can perform the following actions several times in a row:

- "L" — Solomon shifts one unit to the left. This movement cannot be performed on the castle wall.

- "R" — Solomon shifts one unit to the left. This movement cannot be performed if there's no ice block to the right.

- "A" — If there's nothing to the right of Solomon, then Solomon creates an ice block that immediately freezes to the block that Solomon is currently standing on. If there already is an ice block, then Solomon destroys it. At that the ice blocks to the right of the destroyed one can remain but they are left unsupported. Those ice blocks fall down.

Solomon spends exactly a second on each of these actions.

As the result of Solomon's actions, ice blocks' segments fall down. When an ice block falls on a fire demon, the block evaporates and the demon's strength is reduced by $ 1 $ . When the demons' strength is equal to $ 0 $ , the fire demon vanishes. The picture below shows how it happens. The ice block that falls on the position with no demon, breaks into lots of tiny pieces and vanishes without hurting anybody.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF89E/1affd585a4baef63755d860b7d8694acfacd2540.png)Help Solomon destroy all the Fire Lord's army in minimum time.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=1000 $ ). The next line contains $ n $ numbers, the $ i $ -th of them represents the strength of the fire demon standing of the $ i $ -th position, an integer from $ 1 $ to $ 100 $ . If there's no demon on the $ i $ -th position, then the $ i $ -th number equals to $ 0 $ . It is guaranteed that the input data have at least one fire demon.

### 输出格式

Print a string of minimum length, containing characters "L", "R" and "A" — the succession of actions leading to the required result.

If there are several possible answers, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 0 1

```
### 输出样例 #1

```cpp
ARARARALLLA
```


### 输入样例 #2

```cpp
3
0 2 0

```
### 输出样例 #2

```cpp
ARARALAARALA
```


