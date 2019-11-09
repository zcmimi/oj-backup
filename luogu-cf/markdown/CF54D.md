# Writing a Song

## 题意翻译

**题目大意**

求一个字符串s，满足该串长度为n，只出现字母表中前k个字母，并且在指定位置必须出现指定字符串p

**输入格式**

第一行 n，k。(n为所需字符串的长度 n<=100，k为相应的字母大小 2<=k<=26)

第二行 p。（一个长度小于n，只包含字母表中前k个字母的字符串）

第三行 01串。（在第i个位置的数字1表示p的出现应该从s的第i个位置开始，而0表示从这里开始没有出现。）

**输出格式**

输出任意一个符合题意的字符串s

若无，输出“No solution”

## 题目描述

One of the Hedgehog and his friend's favorite entertainments is to take some sentence or a song and replace half of the words (sometimes even all of them) with each other's names.

The friend's birthday is approaching and the Hedgehog decided to make a special present to his friend: a very long song, where his name will be repeated many times. But try as he might, he can't write a decent song!

The problem is that the Hedgehog has already decided how long the resulting sentence should be (i.e. how many letters it should contain) and in which positions in the sentence the friend's name should occur, and it must not occur in any other position in the sentence. Besides, the Hedgehog decided to limit himself to using only the first $ K $ letters of an English alphabet in this sentence (so it will be not even a sentence, but one long word).

The resulting problem is indeed quite complicated, that's why the Hedgehog asks you to help him and write a program that will make the desired word by the given name $ P $ , the length $ N $ of the required word, the given positions of the occurrences of the name $ P $ in the desired word and the alphabet's size $ K $ . Note that the occurrences of the name can overlap with each other.

## 输入输出格式

### 输入格式

The first line contains numbers $ N $ and $ K $ which are the length of the required string and the alphabet size accordingly. The limitations are: $ 1<=N<=100 $ , $ 2<=K<=26 $ .

The second line contains the name $ P $ which is a non-empty string whose length does not exceed $ N $ characters. The string consists only of the first $ K $ lowercase symbols of an English alphabet.

The third line contains the string of length $ N-length(P)+1 $ , consisting only of numbers zero and one. A number one in the $ i $ -th position means that an occurrence of the name $ P $ should start from $ i $ -th position of the desired word, while a zero means that there is no occurrence starting here.

### 输出格式

Print the desired word $ S $ . If there are several answers, print any of them.

If there is no solution, then print "No solution".

## 输入输出样例

### 输入样例 #1

```cpp
5 2
aba
101

```
### 输出样例 #1

```cpp
ababa
```


### 输入样例 #2

```cpp
5 2
a
10001

```
### 输出样例 #2

```cpp
abbba
```


### 输入样例 #3

```cpp
6 2
abba
101

```
### 输出样例 #3

```cpp
No solution
```


