# Bindian Signalizing

## 题意翻译

大家都知道，很久以前在今境内Bindian部落居住在贝尔兰。他们的首都四面环绕着N座小山，形成了一个圈。每座山上都有一个守夜人，日夜守护着这个街区。

万一有危险，守夜人就可以在山上点火。一个看守人可以看到另一个看守人的信号，如果在两个山头上连着一个圆弧，就没有比这两个山头高的山了。对于任何两个山丘，有两个不同的圆弧连接它们，如果在至少一个弧上满足上述条件，信号就会被看到。例如，任何两个相邻的人真是一个会被其他看到的信号。

这只表系统的一个重要特点是守望者能够看到对方的信号对量。你要在山的高度找到这个数量。

## 题目描述

Everyone knows that long ago on the territory of present-day Berland there lived Bindian tribes. Their capital was surrounded by $ n $ hills, forming a circle. On each hill there was a watchman, who watched the neighbourhood day and night.

In case of any danger the watchman could make a fire on the hill. One watchman could see the signal of another watchman, if on the circle arc connecting the two hills there was no hill higher than any of the two. As for any two hills there are two different circle arcs connecting them, the signal was seen if the above mentioned condition was satisfied on at least one of the arcs. For example, for any two neighbouring watchmen it is true that the signal of one will be seen by the other.

An important characteristics of this watch system was the amount of pairs of watchmen able to see each other's signals. You are to find this amount by the given heights of the hills.

## 输入输出格式

### 输入格式

The first line of the input data contains an integer number $ n $ ( $ 3<=n<=10^{6} $ ), $ n $ — the amount of hills around the capital. The second line contains $ n $ numbers — heights of the hills in clockwise order. All height numbers are integer and lie between 1 and $ 10^{9} $ .

### 输出格式

Print the required amount of pairs.

## 输入输出样例

### 输入样例 #1

```cpp
5
1 2 4 5 3

```
### 输出样例 #1

```cpp
7

```
