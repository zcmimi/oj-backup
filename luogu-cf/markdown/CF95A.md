# Hockey

## 题意翻译

## 题目描述

$LSR$特别喜欢足球。有一天他做梦，梦到了自己变成某球队的教练。

现在$LSR$要给球队起名。球队已经有一个名字，是一个只含大小写字母的字符串$w$。$LSR$的队伍有$n$名球员，每个人都有一个名字，它们不希望自己的名字出现在球队名称中(和队名中某一段字符串一样)，所以$LSR$要用别的字母替换这些子串。

这里注意六点：

1.对于两个字符串一样，只需读音一样(即不区分大小写)，也就是说$'aBC'$和$'ABc'$是一样的。

2.对于队名中的某一个字符$i$，他替换的条件当且仅当存在$l$,$r$$(1≤l≤i≤r≤|w|)$，使得$[l,r]$包含在队员名字里。如果$i$不在任何一个与名字重复的子串里，则它不能被更改。

3.队员们特别喜欢一个字母，因为队员们喜欢，所以你要使这个字母出现次数最多。如果有多种解，输出字典序最小的。

4.替换时要注意保留原字符串格式，即大小写。

5.更改时要注意每个字符都要用其他字符去更改，所以如果某个需要修改的字符和队员们喜欢的字符一样，则它需要修改成别的字符。

6.对于每次修改后形成的新串，如果因为修改出现了新的与队员名字一样的子串，则这个子串是不需要修改的。

## 输入格式

第一行一个整数$n$

接下来$n$行每行一个字符串，为一个队员的名字。

接下来一行一个字符串，为原来的队名。

最后一行一个小写字母，为队员喜欢的字母。

## 输出格式

一行一个字符串表示替换后的新队名。

## 提示

对于注意点3,5,6，请结合样例三详细理解。

## 题目描述

Petya loves hockey very much. One day, as he was watching a hockey match, he fell asleep. Petya dreamt of being appointed to change a hockey team's name. Thus, Petya was given the original team name $ w $ and the collection of forbidden substrings $ s_{1},s_{2},...,s_{n} $ . All those strings consist of uppercase and lowercase Latin letters. String $ w $ has the length of $ |w| $ , its characters are numbered from $ 1 $ to $ |w| $ .

First Petya should find all the occurrences of forbidden substrings in the $ w $ string. During the search of substrings the case of letter shouldn't be taken into consideration. That is, strings "aBC" and "ABc" are considered equal.

After that Petya should perform the replacement of all letters covered by the occurrences. More formally: a letter in the position $ i $ should be replaced by any other one if for position $ i $ in string $ w $ there exist pair of indices $ l,r $ ( $ 1<=l<=i<=r<=|w| $ ) such that substring $ w[l ... r] $ is contained in the collection $ s_{1},s_{2},...,s_{n} $ , when using case insensitive comparison. During the replacement the letter's case should remain the same. Petya is not allowed to replace the letters that aren't covered by any forbidden substring.

Letter $ letter $ (uppercase or lowercase) is considered lucky for the hockey players. That's why Petya should perform the changes so that the $ letter $ occurred in the resulting string as many times as possible. Help Petya to find such resulting string. If there are several such strings, find the one that comes first lexicographically.

Note that the process of replacements is not repeated, it occurs only once. That is, if after Petya's replacements the string started to contain new occurrences of bad substrings, Petya pays no attention to them.

## 输入输出格式

### 输入格式

The first line contains the only integer $ n $ ( $ 1<=n<=100 $ ) — the number of forbidden substrings in the collection. Next $ n $ lines contain these substrings. The next line contains string $ w $ . All those $ n+1 $ lines are non-empty strings consisting of uppercase and lowercase Latin letters whose length does not exceed $ 100 $ . The last line contains a lowercase letter $ letter $ .

### 输出格式

Output the only line — Petya's resulting string with the maximum number of letters $ letter $ . If there are several answers then output the one that comes first lexicographically.

The lexicographical comparison is performed by the standard < operator in modern programming languages. The line $ a $ is lexicographically smaller than the line $ b $ , if $ a $ is a prefix of $ b $ , or there exists such an $ i $ ( $ 1<=i<=|a| $ ), that $ a_{i}&lt;b_{i} $ , and for any $ j $ ( $ 1<=j&lt;i $ ) $ a_{j}=b_{j} $ . $ |a| $ stands for the length of string $ a $ .

## 输入输出样例

### 输入样例 #1

```cpp
3
bers
ucky
elu
PetrLoveLuckyNumbers
t

```
### 输出样例 #1

```cpp
PetrLovtTttttNumtttt

```
### 输入样例 #2

```cpp
4
hello
party
abefglghjdhfgj
IVan
petrsmatchwin
a

```
### 输出样例 #2

```cpp
petrsmatchwin

```
### 输入样例 #3

```cpp
2
aCa
cba
abAcaba
c

```
### 输出样例 #3

```cpp
abCacba

```
