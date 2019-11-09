# Help Chef Gerasim

## 题目描述

In a far away kingdom young pages help to set the table for the King. As they are terribly mischievous, one needs to keep an eye on the control whether they have set everything correctly. This time the royal chef Gerasim had the impression that the pages have played a prank again: they had poured the juice from one cup to another. Now Gerasim wants to check his hypothesis. The good thing is that chef Gerasim always pour the same number of milliliters of juice to all cups in the royal kitchen. Having thoroughly measured the juice in each cup, Gerasim asked you to write a program that will determine from which cup juice was poured to which one; otherwise, the program should determine that this time the pages set the table diligently.

To simplify your task we shall consider the cups to be bottomless so that the juice never overfills a cup and pours out, however much it can be. Besides, by some strange reason in a far away kingdom one can only pour to a cup or from one cup to another an integer number of milliliters of juice.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ — the number of cups on the royal table ( $ 1<=n<=1000 $ ). Next $ n $ lines contain volumes of juice in each cup — non-negative integers, not exceeding $ 10^{4} $ .

### 输出格式

If the pages didn't pour the juice, print "Exemplary pages." (without the quotes). If you can determine the volume of juice poured during exactly one juice pouring, print " $ v $ ml. from cup # $ a $ to cup # $ b $ ." (without the quotes), where $ v $ represents the volume of poured juice, $ a $ represents the number of the cup from which the juice was poured (the cups are numbered with consecutive positive integers starting from one in the order in which the cups are described in the input data), $ b $ represents the number of the cup into which the juice was poured. Finally, if the given juice's volumes cannot be obtained using no more than one pouring (for example, the pages poured the juice from one cup to another more than once or the royal kitchen maids poured the juice into the cups incorrectly), print "Unrecoverable configuration." (without the quotes).

## 输入输出样例

### 输入样例 #1

```cpp
5
270
250
250
230
250

```
### 输出样例 #1

```cpp
20 ml. from cup #4 to cup #1.

```
### 输入样例 #2

```cpp
5
250
250
250
250
250

```
### 输出样例 #2

```cpp
Exemplary pages.

```
### 输入样例 #3

```cpp
5
270
250
249
230
250

```
### 输出样例 #3

```cpp
Unrecoverable configuration.

```
