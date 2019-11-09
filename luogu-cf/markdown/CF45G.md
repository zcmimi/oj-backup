# Prime Problem

## 题意翻译

将1到n分成若干组数，要求每组数的和均为质数，若存在一种分配方式，输出每个数所在的组的编号，有多组解输出任意一组解，若不存在，输出-1

感谢@he_____he 提供的翻译

## 题目描述

In Berland prime numbers are fashionable — the respectable citizens dwell only on the floors with numbers that are prime numbers. The numismatists value particularly high the coins with prime nominal values. All the prime days are announced holidays!

Yet even this is not enough to make the Berland people happy. On the main street of the capital stand $ n $ houses, numbered from 1 to $ n $ . The government decided to paint every house a color so that the sum of the numbers of the houses painted every color is a prime number.

However it turned out that not all the citizens approve of this decision — many of them protest because they don't want many colored houses on the capital's main street. That's why it is decided to use the minimal possible number of colors. The houses don't have to be painted consecutively, but every one of $ n $ houses should be painted some color. The one-colored houses should not stand consecutively, any way of painting is acceptable.

There are no more than 5 hours left before the start of painting, help the government find the way when the sum of house numbers for every color is a prime number and the number of used colors is minimal.

## 输入输出格式

### 输入格式

The single input line contains an integer $ n $ ( $ 2<=n<=6000 $ ) — the number of houses on the main streets of the capital.

### 输出格式

Print the sequence of $ n $ numbers, where the $ i $ -th number stands for the number of color for house number $ i $ . Number the colors consecutively starting from 1. Any painting order is allowed. If there are several solutions to that problem, print any of them. If there's no such way of painting print the single number -1.

## 输入输出样例

### 输入样例 #1

```cpp
8
```


### 输出样例 #1

```cpp
1 2 2 1 1 1 1 2
```


