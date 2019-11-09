# Football

## 题意翻译

# 题目描述

```

Petya爱死足球了（以至于他天天看）。有一天看比赛时，Petya是如此无聊以至于在纸上写下各个球员的当前位置。为了看起来好看，他把各个球员用“1”与“0”来表示，1与0表示不同球队的人。如果一个队至少有七个人是站在一起的（一个接在一个后面），那么就被认为很危险（所以Petya到底喜欢哪支球队？）

例如，00100110111111101被认为是危险的（因为有7个1连在一起），而11110111011101则不是。现在Petya给了你现在的球队情况，让你判断是否危险。（Petya不能自己判断吗......）

```

# 输入输出格式

### 输入格式

```

仅一行，为一个字符串。由“0”与“1”组成，表示球员。字符串的长度不超过100.每个队至少有一个队员（这不是废话吗）

```

### 输出格式

```

如果危险，输出"YES"(不包括引号)，否则输出"NO"

```

## 题目描述

Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least $ 7 $ players of some team standing one after another, then the situation is considered dangerous. For example, the situation $ 00100110111111101 $ is dangerous and $ 11110111011101 $ is not. You are given the current situation. Determine whether it is dangerous or not.

## 输入输出格式

### 输入格式

The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed $ 100 $ characters. There's at least one player from each team present on the field.

### 输出格式

Print "YES" if the situation is dangerous. Otherwise, print "NO".

## 输入输出样例

### 输入样例 #1

```cpp
001001

```
### 输出样例 #1

```cpp
NO

```
### 输入样例 #2

```cpp
1000000001

```
### 输出样例 #2

```cpp
YES

```
