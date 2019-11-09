# Flag

## 题意翻译

题目描述

根据一项新的ISO标准，每一个国家的国旗应该是一个n×m的格子场，其中每个格子最多有10种不同的颜色。并且国旗应该有条纹：旗帜的每一行应包含相同颜色的方块，相邻的行的颜色应该是不同的。Berland政府要求你找出他们的国旗是否符合新的ISO标准。

输入格式：

输入的第一行包含数n和m（ ( 1<=n,m<=100 ），其中n为行数，m为列数。接下来

是对旗的描述：以下N行中的每一行包含m个字符。每个字符是0到9之间的数字，代表相应正方形的颜色。

输出格式：

如果国旗符合标准就输出YES，否则输出NO。

## 题目描述

According to a new ISO standard, a flag of every country should have a chequered field $ n×m $ , each square should be of one of 10 colours, and the flag should be «striped»: each horizontal row of the flag should contain squares of the same colour, and the colours of adjacent horizontal rows should be different. Berland's government asked you to find out whether their flag meets the new ISO standard.

## 输入输出格式

### 输入格式

The first line of the input contains numbers $ n $ and $ m $ ( $ 1<=n,m<=100 $ ), $ n $ — the amount of rows, $ m $ — the amount of columns on the flag of Berland. Then there follows the description of the flag: each of the following $ n $ lines contain $ m $ characters. Each character is a digit between 0 and 9, and stands for the colour of the corresponding square.

### 输出格式

Output YES, if the flag meets the new ISO standard, and NO otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
000
111
222

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
3 3
000
000
111

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
3 3
000
111
002

```
### 输出样例 #3

```cpp
NO

```
