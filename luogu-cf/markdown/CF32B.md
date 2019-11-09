# Borze

## 题意翻译

三进制数字符号在Berland很受欢迎。如果用borze编码表示电报的三进制数。数字0,1,2分别被作为"."，"-."和"--"。你需要为borze编码解码。（把borze编码转换为三进制数）

输入：

第一行包含在Borze编码。字符串的长度介于1到200个字符之间。这是保证给定的字符串是一个有效的一些三元数borze编码（这个数可能有前导零）。

输出：

一个三进制数（如果有前导零要输出）

Translated by @____233____

## 题目描述

Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

## 输入输出格式

### 输入格式

The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

### 输出格式

Output the decoded ternary number. It can have leading zeroes.

## 输入输出样例

### 输入样例 #1

```cpp
.-.--

```
### 输出样例 #1

```cpp
012
```


### 输入样例 #2

```cpp
--.

```
### 输出样例 #2

```cpp
20
```


### 输入样例 #3

```cpp
-..-.--

```
### 输出样例 #3

```cpp
1012
```


