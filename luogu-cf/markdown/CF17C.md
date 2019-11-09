# Balance

## 题意翻译

 【题目描述】 一个仅由a,b,c三种字符组成的字符串，可以对其进行如下两种操作：

1. 选择两个相邻字符，将第一个字符替换成第二个。

2. 选择两个相邻字符，将第二个字符替换成第一个。 这样，通过任意多次的操作，可以得到许多不同的串，为了追求字符的平衡， 我们要求a,b,c三种字符在字符串中出现的次数两两之差都不能大于1。

你的任 务是，统计给定字符串通过任意多次的操作，能够得到的不同的平衡串的个数。

【输入格式】

输入文件包含2行。 第一行包含1个正整数n，表示字符串长度。 第二行包含1个长度为n的字符串。

【输出格式】

输出共1行，包含1个正整数，表示能够得到的平衡串的数量。由于答案可 能很大，因此输出时要对51123987取模。

## 题目描述

Nick likes strings very much, he likes to rotate them, sort them, rearrange characters within a string... Once he wrote a random string of characters a, b, c on a piece of paper and began to perform the following operations:

- to take two adjacent characters and replace the second character with the first one,

- to take two adjacent characters and replace the first character with the second one

To understand these actions better, let's take a look at a string «abc». All of the following strings can be obtained by performing one of the described operations on «abc»: «bbc», «abb», «acc». Let's denote the frequency of a character for each of the characters a, b and c as the number of occurrences of this character in the string. For example, for string «abc»: | $ a $ | = 1, | $ b $ | = 1, | $ c $ | = 1, and for string «bbc»: | $ a $ | = 0, | $ b $ | = 2, | $ c $ | = 1.

While performing the described operations, Nick sometimes got balanced strings. Let's say that a string is balanced, if the frequencies of each character differ by at most 1. That is $ -1<=|a|-|b|<=1 $ , $ -1<=|a|-|c|<=1 $ и $ -1<=|b|-|c|<=1 $ .

Would you help Nick find the number of different balanced strings that can be obtained by performing the operations described above, perhaps multiple times, on the given string $ s $ . This number should be calculated modulo $ 51123987 $ .

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=150 $ ) — the length of the given string $ s $ . Next line contains the given string $ s $ . The initial string can be balanced as well, in this case it should be counted too. The given string $ s $ consists only of characters a, b and c.

### 输出格式

Output the only number — the number of different balanced strings that can be obtained by performing the described operations, perhaps multiple times, on the given string $ s $ , modulo $ 51123987 $ .

## 输入输出样例

### 输入样例 #1

```cpp
4
abca

```
### 输出样例 #1

```cpp
7

```
### 输入样例 #2

```cpp
4
abbc

```
### 输出样例 #2

```cpp
3

```
### 输入样例 #3

```cpp
2
ab

```
### 输出样例 #3

```cpp
1

```
## 说明

In the first sample it is possible to get $ 51 $ different strings through the described operations, but only $ 7 $ of them are balanced: «abca», «bbca», «bcca», «bcaa», «abcc», «abbc», «aabc». In the second sample: «abbc», «aabc», «abcc». In the third sample there is only one balanced string — «ab» itself.

