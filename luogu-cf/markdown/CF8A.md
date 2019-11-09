# Train and Peter

## 题意翻译

题目描述

Peter很喜欢坐火车去旅行。他实在是太喜欢坐火车了，以至于在火车上睡着了（雾）。

在一个夏天，Peter正在一个从A城开往B城的列车上。像往常一样，他睡着了。突然，他醒了过来（?），开始看窗外的景物。他发现每一个火车站都有一面彩旗（旗上只有一种颜色）。

Peter开始记忆他看到的彩旗的顺序。但是很快地，他又睡着了。不幸地，他没睡多久又醒来了，并且他开始继续记他看到的彩旗。一段时间以后，他又睡着了，这次直到旅途结束都没醒来。

到站以后，他告诉了他的父母他在旅途中看到的彩旗的顺序——在他中途睡着之前和中途睡着之后分别看到的两个颜色序列。

他的父母知道Peter特别喜欢幻想，所以他们把Peter说的序列给了你，并请你判断他的乘车方向。

他的父母用不同的小写字母表示不同的颜色。相同字母表示相同颜色，不同字母表示不同颜色。

输入输出格式

输入格式

输入共有三行。第一行包括一个连续的，不为空且只有小写字母的字符串s0，表示从A到B依次每个站的彩旗的颜色（A站和B站没有彩旗）。列车从B到A也会经过同样的车站——以相反的顺序而已。

第二行和第三行分别为Peter两次看到的序列s1和s2。两个序列都包括连续的小写字母且不为空。

输出格式

一行，输出以下四种单词之一（不包括引号）：

"forward" 如果Peter只可能在从A到B的旅途中看到这样的序列。

"backward" 如果Peter只可能在从B到A的旅途中看到这样的序列。

"both" 如果Peter既可能在从A到B的旅途中看到，也可能在从B到A的旅途中看到这样的序列。

"fantasy" 如果Peter不可能看到这样的序列。

输入输出样例

略

补充说明

列车一直都在移动，所以一面同样的旗子不可能被看到两次。

## 题目描述

Peter likes to travel by train. He likes it so much that on the train he falls asleep.

Once in summer Peter was going by train from city A to city B, and as usual, was sleeping. Then he woke up, started to look through the window and noticed that every railway station has a flag of a particular colour.

The boy started to memorize the order of the flags' colours that he had seen. But soon he fell asleep again. Unfortunately, he didn't sleep long, he woke up and went on memorizing the colours. Then he fell asleep again, and that time he slept till the end of the journey.

At the station he told his parents about what he was doing, and wrote two sequences of the colours that he had seen before and after his sleep, respectively.

Peter's parents know that their son likes to fantasize. They give you the list of the flags' colours at the stations that the train passes sequentially on the way from A to B, and ask you to find out if Peter could see those sequences on the way from A to B, or from B to A. Remember, please, that Peter had two periods of wakefulness.

Peter's parents put lowercase Latin letters for colours. The same letter stands for the same colour, different letters — for different colours.

## 输入输出格式

### 输入格式

The input data contains three lines. The first line contains a non-empty string, whose length does not exceed $ 10^{5} $ , the string consists of lowercase Latin letters — the flags' colours at the stations on the way from A to B. On the way from B to A the train passes the same stations, but in reverse order.

The second line contains the sequence, written by Peter during the first period of wakefulness. The third line contains the sequence, written during the second period of wakefulness. Both sequences are non-empty, consist of lowercase Latin letters, and the length of each does not exceed 100 letters. Each of the sequences is written in chronological order.

### 输出格式

Output one of the four words without inverted commas:

- «forward» — if Peter could see such sequences only on the way from A to B;

- «backward» — if Peter could see such sequences on the way from B to A;

- «both» — if Peter could see such sequences both on the way from A to B, and on the way from B to A;

- «fantasy» — if Peter could not see such sequences.

## 输入输出样例

### 输入样例 #1

```cpp
atob
a
b

```
### 输出样例 #1

```cpp
forward

```
### 输入样例 #2

```cpp
aaacaaa
aca
aa

```
### 输出样例 #2

```cpp
both

```
## 说明

It is assumed that the train moves all the time, so one flag cannot be seen twice. There are no flags at stations A and B.

