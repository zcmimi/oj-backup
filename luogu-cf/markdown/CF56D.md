# Changing a String

## 题意翻译

## 题目描述

这里有一个由大写字母构成的字符串$s$，我们把他的长度表示为$|s|$。在一次操作中，我们可以做这几种事情：

- 插入一个字符——我们可以在$pos$位置上插入一个大写字母$ch$$(1<=pos<=|s|+1,A<=ch<=Z)$，此时字符串的$pos$位置变成$ch$字符，并且，其余字符将依次后移，字符串长度也要增加1

- 删除一个字符——将$pos$位置上的字符删除，同样，其余字符移动，并且字符串长度减少1

- 替换一个字符——将$pos$位置上的字符替换为$ch$$(1<=pos<=|s|,A<=ch<=Z)$，字符串长度不改变

你的任务就是计算$s$字符串通过上面的操作变到$t$字符串最少花的步数，并且输出操作过程。

## 输入格式

第一行是$s$字符串，第二行是$t$字符串，两个字符串都只有大写字母，并且长度都是1~1000这个范围内的整数。

## 输出格式

第一行为最少移动次数$k$，接下来$k$行，按"操作名称 $pos$ $ch$"的格式输出。

## 题目描述

There is a string $ s $ , consisting of capital Latin letters. Let's denote its current length as $ |s| $ . During one move it is allowed to apply one of the following operations to it:

- INSERT $ pos $ $ ch $ — insert a letter $ ch $ in the string $ s $ in the position $ pos $ ( $ 1<=pos<=|s|+1,A<=ch<=Z $ ). The letter $ ch $ becomes the $ pos $ -th symbol of the string $ s $ , at that the letters shift aside and the length of the string increases by 1.

- DELETE $ pos $ — delete a character number $ pos $ ( $ 1<=pos<=|s| $ ) from the string $ s $ . At that the letters shift together and the length of the string decreases by 1.

- REPLACE $ pos $ $ ch $ — the letter in the position $ pos $ of the line $ s $ is replaced by $ ch $ ( $ 1<=pos<=|s|,A<=ch<=Z $ ). At that the length of the string does not change.

Your task is to find in which minimal number of moves one can get a $ t $ string from an $ s $ string. You should also find the sequence of actions leading to the required results.

## 输入输出格式

### 输入格式

The first line contains $ s $ , the second line contains $ t $ . The lines consist only of capital Latin letters, their lengths are positive numbers from $ 1 $ to $ 1000 $ .

### 输出格式

In the first line print the number of moves $ k $ in the given sequence of operations. The number should be the minimal possible one. Then print $ k $ lines containing one operation each. Print the operations in the format, described above. If there are several solutions, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
ABA
ABBBA

```
### 输出样例 #1

```cpp
2
INSERT 3 B
INSERT 4 B

```
### 输入样例 #2

```cpp
ACCEPTED
WRONGANSWER

```
### 输出样例 #2

```cpp
10
REPLACE 1 W
REPLACE 2 R
REPLACE 3 O
REPLACE 4 N
REPLACE 5 G
REPLACE 6 A
INSERT 7 N
INSERT 8 S
INSERT 9 W
REPLACE 11 R

```
