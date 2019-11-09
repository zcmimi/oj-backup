# Beaver

## 题目描述

After Fox Ciel got off a bus, she found that the bus she was on was a wrong bus and she lost her way in a strange town. However, she fortunately met her friend Beaver Taro and asked which way to go to her castle. Taro's response to her was a string $ s $ , and she tried to remember the string $ s $ correctly.

However, Ciel feels $ n $ strings $ b_{1},b_{2},...\ ,b_{n} $ are really boring, and unfortunately she dislikes to remember a string that contains a boring substring. To make the thing worse, what she can remember is only the contiguous substring of $ s $ .

Determine the longest contiguous substring of $ s $ that does not contain any boring string, so that she can remember the longest part of Taro's response.

## 输入输出格式

### 输入格式

In the first line there is a string $ s $ . The length of $ s $ will be between $ 1 $ and $ 10^{5} $ , inclusive.

In the second line there is a single integer $ n $ ( $ 1<=n<=10 $ ). Next $ n $ lines, there is a string $ b_{i} $ ( $ 1<=i<=n $ ). Each length of $ b_{i} $ will be between $ 1 $ and $ 10 $ , inclusive.

Each character of the given strings will be either a English alphabet (both lowercase and uppercase) or a underscore ('\_') or a digit. Assume that these strings are case-sensitive.

### 输出格式

Output in the first line two space-separated integers $ len $ and $ pos $ : the length of the longest contiguous substring of $ s $ that does not contain any $ b_{i} $ , and the first position of the substring (0-indexed). The position $ pos $ must be between $ 0 $ and $ |s|-len $ inclusive, where $ |s| $ is the length of string $ s $ .

If there are several solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
Go_straight_along_this_street
5
str
long
tree
biginteger
ellipse

```
### 输出样例 #1

```cpp
12 4

```
### 输入样例 #2

```cpp
IhaveNoIdea
9
I
h
a
v
e
N
o
I
d

```
### 输出样例 #2

```cpp
0 0

```
### 输入样例 #3

```cpp
unagioisii
2
ioi
unagi

```
### 输出样例 #3

```cpp
5 5

```
## 说明

In the first sample, the solution is traight\_alon.

In the second sample, the solution is an empty string, so the output can be «0 0», «0 1», «0 2», and so on.

In the third sample, the solution is either nagio or oisii.

