# Calendar

## 题意翻译

给定一个偶数$n$ ，$n$ 个字符串，和一个分割字符$d$ 。$d$ 的ASCII值可能从32到126。

你要将所有$n$ 个字符串放在$\frac n2$ 行，每行两个字符串，之间用恰好一个分割字符$d$ 隔开。这$\frac n2$ 行的长度必须严格相等。

求所有合法方案中，字典序最小的一个。字典序是指将每行依次拼接得到的字符串的字典序。

Translated by @_rqy

## 题目描述

BerOilGasDiamondBank has branches in $ n $ cities, at that $ n $ is an even number. The bank management wants to publish a calendar with the names of all those cities written in two columns: the calendar should consist of exactly $ n/2 $ lines of strictly equal length, each of which contains exactly two names and exactly one separator character between them. The name of every city should be used in the calendar exactly once. For historical reasons the symbol $ d $ is used as the separator of words in the calendar.

The BerOilGasDiamondBank management wants to show that all its branches are equally important to it, that's why the order of their appearance in the calendar should be following: if we "glue"(concatinate) all the $ n/2 $ calendar lines (from top to bottom) to make a single line, then the lexicographically minimal line is obtained. No separator character will be used to separate calendar lines. For example, if the lines are "bertown!berville", "newberville!bera", then the resulting line is "bertown!bervillenewberville!bera". In some sense one has to find the lexicographically minimal calendar, where the comparison of calendars happens line by line.

Help BerOilGasDiamondBank and construct the required calendar.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=10^{4} $ , $ n $ is even) which is the number of branches. Then follow $ n $ lines which are the names of the cities. All the names consist of lowercase Latin letters; their lengths are no less than 1 and no more than 10 symbols. The next line contains a single symbol $ d $ ( $ d $ has an ASCII-code from 33 to 126 inclusively, excluding lowercase Latin letters) which is the separator between words in the calendar lines. It is guaranteed that the calendar is possible to be constructed and all the names are different.

### 输出格式

Print $ n/2 $ lines of similar length which are the required calendar. Every line should contain exactly two words and exactly one separator between them. If there are several solutions, print the lexicographically minimal one. The lexicographical comparison of lines is realized by the "<" operator in the modern programming languages.

## 输入输出样例

### 输入样例 #1

```cpp
4
b
aa
hg
c
.

```
### 输出样例 #1

```cpp
aa.b
c.hg

```
### 输入样例 #2

```cpp
2
aa
a
!

```
### 输出样例 #2

```cpp
a!aa

```
### 输入样例 #3

```cpp
2
aa
a
|

```
### 输出样例 #3

```cpp
aa|a

```
