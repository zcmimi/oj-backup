# Sum

## 题意翻译

题目描述：

Vasya终于学会了进位制，但他经常忘记写算式的基数。有一次，他看到他的笔记本上写着a+b=？，但是没有写明基数。现在Vasya认为算式的基数为p。他知道算式在不同的基数下，会有不同的结果，甚至在有些基数下是没有意义的。算式78+87的值在十六进制下为FF，在十五进制下为110，十进制下为165，九进制下为176，更小的基数下就没有意义了。现在，Vasya想要知道算式结果的最大长度。

我们定义数字的长度为数字的字符个数，在不同的进制下，同一个数字有不同的数字长度。

输入输出格式

输入格式：

共一行，包含两个数a，b。

输出格式：

共一行，输出算式的最大长度。

Translated by @handahao 

## 题目描述

Vasya studies positional numeral systems. Unfortunately, he often forgets to write the base of notation in which the expression is written. Once he saw a note in his notebook saying $ a+b=? $ , and that the base of the positional notation wasn’t written anywhere. Now Vasya has to choose a base $ p $ and regard the expression as written in the base $ p $ positional notation. Vasya understood that he can get different results with different bases, and some bases are even invalid. For example, expression $ 78+87 $ in the base 16 positional notation is equal to $ FF_{16} $ , in the base 15 positional notation it is equal to $ 110_{15} $ , in the base 10 one — to $ 165_{10} $ , in the base 9 one — to $ 176_{9} $ , and in the base 8 or lesser-based positional notations the expression is invalid as all the numbers should be strictly less than the positional notation base. Vasya got interested in what is the length of the longest possible expression value. Help him to find this length.

The length of a number should be understood as the number of numeric characters in it. For example, the length of the longest answer for $ 78+87=? $ is 3. It is calculated like that in the base 15 ( $ 110_{15} $ ), base 10 ( $ 165_{10} $ ), base 9 ( $ 176_{9} $ ) positional notations, for example, and in some other ones.

## 输入输出格式

### 输入格式

The first letter contains two space-separated numbers $ a $ and $ b $ ( $ 1<=a,b<=1000 $ ) which represent the given summands.

### 输出格式

Print a single number — the length of the longest answer.

## 输入输出样例

### 输入样例 #1

```cpp
78 87

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
1 1

```
### 输出样例 #2

```cpp
2

```
