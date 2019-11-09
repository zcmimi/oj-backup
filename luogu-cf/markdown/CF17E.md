# Palisection

## 题意翻译

给定一个长度为n的小写字母串。问你有多少对相交的回文子 串（包含也算相交） 。

输入格式

第一行是字符串长度n(1<=n<=2*10^6)，第二行字符串

输出格式

相交的回文子串个数%51123987

Translated by liyifeng

## 题目描述

In an English class Nick had nothing to do at all, and remembered about wonderful strings called palindromes. We should remind you that a string is called a palindrome if it can be read the same way both from left to right and from right to left. Here are examples of such strings: «eye», «pop», «level», «aba», «deed», «racecar», «rotor», «madam».

Nick started to look carefully for all palindromes in the text that they were reading in the class. For each occurrence of each palindrome in the text he wrote a pair — the position of the beginning and the position of the ending of this occurrence in the text. Nick called each occurrence of each palindrome he found in the text subpalindrome. When he found all the subpalindromes, he decided to find out how many different pairs among these subpalindromes cross. Two subpalindromes cross if they cover common positions in the text. No palindrome can cross itself.

Let's look at the actions, performed by Nick, by the example of text «babb». At first he wrote out all subpalindromes:

• «b» — $ 1..1 $ • «bab» — $ 1..3 $ • «a» — $ 2..2 $ • «b» — $ 3..3 $ • «bb» — $ 3..4 $ • «b» — $ 4..4 $ Then Nick counted the amount of different pairs among these subpalindromes that cross. These pairs were six:

1. $ 1..1 $ cross with $ 1..3 $ 2. $ 1..3 $ cross with $ 2..2 $ 3. $ 1..3 $ cross with $ 3..3 $ 4. $ 1..3 $ cross with $ 3..4 $ 5. $ 3..3 $ cross with $ 3..4 $ 6. $ 3..4 $ cross with $ 4..4 $ Since it's very exhausting to perform all the described actions manually, Nick asked you to help him and write a program that can find out the amount of different subpalindrome pairs that cross. Two subpalindrome pairs are regarded as different if one of the pairs contains a subpalindrome that the other does not.

## 输入输出格式

### 输入格式

The first input line contains integer $ n $ ( $ 1<=n<=2·10^{6} $ ) — length of the text. The following line contains $ n $ lower-case Latin letters (from a to z).

### 输出格式

In the only line output the amount of different pairs of two subpalindromes that cross each other. Output the answer modulo $ 51123987 $ .

## 输入输出样例

### 输入样例 #1

```cpp
4
babb

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
2
aa

```
### 输出样例 #2

```cpp
2

```
