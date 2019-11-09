# Restoring Password

## 题意翻译

# 题目大意

给定一个长80的字符串，由8个连续的小字符串组成。这些个小字符串分别代表一个一位数密码。现在给你0~9分别代表的字符串，问将源字符串中可替换的全部替换后的字符串是什么？

## 输入

第一行，输入一个长80的字符串。

接下来10行分别输入代表数0~9的字符串。

## 输出

输出替换后的字符串。

### 注意事项

保证源字符串可替换成一个8位数的字符串。（即可全部替换）

## 题目描述

Igor K. always used to trust his favorite Kashpirovsky Antivirus. That is why he didn't hesitate to download the link one of his groupmates sent him via QIP Infinium. The link was said to contain "some real funny stuff about swine influenza". The antivirus had no objections and Igor K. run the flash application he had downloaded. Immediately his QIP Infinium said: "invalid login/password".

Igor K. entered the ISQ from his additional account and looked at the info of his main one. His name and surname changed to "H1N1" and "Infected" correspondingly, and the "Additional Information" field contained a strange-looking binary code $ 80 $ characters in length, consisting of zeroes and ones. "I've been hacked" — thought Igor K. and run the Internet Exploiter browser to quickly type his favourite search engine's address.

Soon he learned that it really was a virus that changed ISQ users' passwords. Fortunately, he soon found out that the binary code was actually the encrypted password where each group of $ 10 $ characters stood for one decimal digit. Accordingly, the original password consisted of $ 8 $ decimal digits.

Help Igor K. restore his ISQ account by the encrypted password and encryption specification.

## 输入输出格式

### 输入格式

The input data contains $ 11 $ lines. The first line represents the binary code $ 80 $ characters in length. That is the code written in Igor K.'s ISQ account's info. Next $ 10 $ lines contain pairwise distinct binary codes $ 10 $ characters in length, corresponding to numbers 0, 1, ..., 9.

### 输出格式

Print one line containing $ 8 $ characters — The password to Igor K.'s ISQ account. It is guaranteed that the solution exists.

## 输入输出样例

### 输入样例 #1

```cpp
01001100100101100000010110001001011001000101100110010110100001011010100101101100
0100110000
0100110010
0101100000
0101100010
0101100100
0101100110
0101101000
0101101010
0101101100
0101101110

```
### 输出样例 #1

```cpp
12345678

```
### 输入样例 #2

```cpp
10101101111001000010100100011010101101110010110111011000100011011110010110001000
1001000010
1101111001
1001000110
1010110111
0010110111
1101001101
1011000001
1110010101
1011011000
0110001000

```
### 输出样例 #2

```cpp
30234919

```
