# Capture Valerian

## 题意翻译

输入n,m,一个n进制的数,将它转换成m进制后输出

特殊进制：罗马数字

>I= 1;

V= 5;

X= 10;

L= 50;

C= 100;

D= 500;

M= 1000

## 题目描述

It's now $ 260 $ AD. Shapur, being extremely smart, became the King of Persia. He is now called Shapur, His majesty King of kings of Iran and Aniran.

Recently the Romans declared war on Persia. They dreamed to occupy Armenia. In the recent war, the Romans were badly defeated. Now their senior army general, Philip is captured by Shapur and Shapur is now going to capture Valerian, the Roman emperor.

Being defeated, the cowardly Valerian hid in a room at the top of one of his castles. To capture him, Shapur has to open many doors. Fortunately Valerian was too scared to make impenetrable locks for the doors.

Each door has $ 4 $ parts. The first part is an integer number $ a $ . The second part is either an integer number $ b $ or some really odd sign which looks like R. The third one is an integer $ c $ and the fourth part is empty! As if it was laid for writing something. Being extremely gifted, after opening the first few doors, Shapur found out the secret behind the locks.

$ c $ is an integer written in base $ a $ , to open the door we should write it in base $ b $ . The only bad news is that this R is some sort of special numbering system that is used only in Roman empire, so opening the doors is not just a piece of cake!

Here's an explanation of this really weird number system that even doesn't have zero:

Roman numerals are based on seven symbols: a stroke (identified with the letter I) for a unit, a chevron (identified with the letter V) for a five, a cross-stroke (identified with the letter X) for a ten, a C (identified as an abbreviation of Centum) for a hundred, etc.:

- I= $ 1 $

- V= $ 5 $

- X= $ 10 $

- L= $ 50 $

- C= $ 100 $

- D= $ 500 $

- M= $ 1000 $

Symbols are iterated to produce multiples of the decimal ( $ 1 $ , $ 10 $ , $ 100 $ , $ 1,000 $ ) values, with V, L, D substituted for a multiple of five, and the iteration continuing: I $ 1 $ , II $ 2 $ , III $ 3 $ , V $ 5 $ , VI $ 6 $ , VII $ 7 $ , etc., and the same for other bases: X $ 10 $ , XX $ 20 $ , XXX $ 30 $ , L $ 50 $ , LXXX $ 80 $ ; CC $ 200 $ , DCC $ 700 $ , etc. At the fourth and ninth iteration, a subtractive principle must be employed, with the base placed before the higher base: IV $ 4 $ , IX $ 9 $ , XL $ 40 $ , XC $ 90 $ , CD $ 400 $ , CM $ 900 $ .

Also in bases greater than $ 10 $ we use A for $ 10 $ , B for $ 11 $ , etc.

Help Shapur capture Valerian and bring peace back to Persia, especially Armenia.

## 输入输出格式

### 输入格式

The first line contains two integers $ a $ and $ b $ ( $ 2<=a,b<=25 $ ). Only $ b $ may be replaced by an R which indicates Roman numbering system.

The next line contains a single non-negative integer $ c $ in base $ a $ which may contain leading zeros but its length doesn't exceed $ 10^{3} $ .

It is guaranteed that if we have Roman numerals included the number would be less than or equal to $ 3000_{10} $ and it won't be $ 0 $ . In any other case the number won't be greater than $ 10^{15}_{10} $ .

### 输出格式

Write a single line that contains integer $ c $ in base $ b $ . You must omit leading zeros.

## 输入输出样例

### 输入样例 #1

```cpp
10 2
1

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
16 R
5

```
### 输出样例 #2

```cpp
V

```
### 输入样例 #3

```cpp
5 R
4

```
### 输出样例 #3

```cpp
IV

```
### 输入样例 #4

```cpp
2 2
1111001

```
### 输出样例 #4

```cpp
1111001

```
### 输入样例 #5

```cpp
12 13
A

```
### 输出样例 #5

```cpp
A

```
## 说明

You can find more information about roman numerals here: http://en.wikipedia.org/wiki/Roman\_numerals

