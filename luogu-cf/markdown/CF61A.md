# Ultra-Fast Mathematician

## 题意翻译

给你两个字符串，每个字符串都代表一个二进制下的数。求这两个数异或起来后的值的二进制是多少。

保证给的两个字符串一样长，也就是说可能有字符串会有前导0，同时请保证输出的这个二进制数一样长，也就是说不要去掉前导0。

字符串长度小于$100$

感谢@Khassar 提供的翻译

## 题目描述

Shapur was an extremely gifted student. He was great at everything including Combinatorics, Algebra, Number Theory, Geometry, Calculus, etc. He was not only smart but extraordinarily fast! He could manage to sum $ 10^{18} $ numbers in a single second.

One day in 230 AD Shapur was trying to find out if any one can possibly do calculations faster than him. As a result he made a very great contest and asked every one to come and take part.

In his contest he gave the contestants many different pairs of numbers. Each number is made from digits $ 0 $ or $ 1 $ . The contestants should write a new number corresponding to the given pair of numbers. The rule is simple: The $ i $ -th digit of the answer is $ 1 $ if and only if the $ i $ -th digit of the two given numbers differ. In the other case the $ i $ -th digit of the answer is $ 0 $ .

Shapur made many numbers and first tried his own speed. He saw that he can perform these operations on numbers of length $ ∞ $ (length of a number is number of digits in it) in a glance! He always gives correct answers so he expects the contestants to give correct answers, too. He is a good fellow so he won't give anyone very big numbers and he always gives one person numbers of same length.

Now you are going to take part in Shapur's contest. See if you are faster and more accurate.

## 输入输出格式

### 输入格式

There are two lines in each input. Each of them contains a single number. It is guaranteed that the numbers are made from $ 0 $ and $ 1 $ only and that their length is same. The numbers may start with $ 0 $ . The length of each number doesn't exceed 100.

### 输出格式

Write one line — the corresponding answer. Do not omit the leading $ 0 $ s.

## 输入输出样例

### 输入样例 #1

```cpp
1010100
0100101

```
### 输出样例 #1

```cpp
1110001

```
### 输入样例 #2

```cpp
000
111

```
### 输出样例 #2

```cpp
111

```
### 输入样例 #3

```cpp
1110
1010

```
### 输出样例 #3

```cpp
0100

```
### 输入样例 #4

```cpp
01110
01100

```
### 输出样例 #4

```cpp
00010

```
