# Crossword

## 题意翻译

现在有6个字符串，让你把他们摆成一个‘8’字形，使得交叉处相等。输出摆放后的位置。

## 题目描述

Vasya trains to compose crossword puzzles. He can only compose crosswords of a very simplе type so far. All of them consist of exactly six words; the words can be read only from top to bottom vertically and from the left to the right horizontally. The words are arranged in the form of a rectangular "eight" or infinity sign, not necessarily symmetrical.

The top-left corner of the crossword coincides with the top-left corner of the rectangle. The same thing is correct for the right-bottom corners. The crossword can't degrade, i.e. it always has exactly four blank areas, two of which are surrounded by letters. Look into the output for the samples for clarification.

Help Vasya — compose a crossword of the described type using the given six words. It is allowed to use the words in any order.

## 输入输出格式

### 输入格式

Six lines contain the given words. Every word consists of no more than 30 and no less than 3 uppercase Latin letters.

### 输出格式

If it is impossible to solve the problem, print Impossible. Otherwise, print the sought crossword. All the empty squares should be marked as dots.

If there can be several solutions to that problem, print the lexicographically minimum one. I.e. the solution where the first line is less than the first line of other solutions should be printed. If the two lines are equal, compare the second lines and so on. The lexicographical comparison of lines is realized by the < operator in the modern programming languages.

## 输入输出样例

### 输入样例 #1

```cpp
NOD
BAA
YARD
AIRWAY
NEWTON
BURN

```
### 输出样例 #1

```cpp
BAA...
U.I...
R.R...
NEWTON
..A..O
..YARD

```
### 输入样例 #2

```cpp
AAA
AAA
AAAAA
AAA
AAA
AAAAA

```
### 输出样例 #2

```cpp
AAA..
A.A..
AAAAA
..A.A
..AAA

```
### 输入样例 #3

```cpp
PTC
JYNYFDSGI
ZGPPC
IXEJNDOP
JJFS
SSXXQOFGJUZ

```
### 输出样例 #3

```cpp
JJFS....
Y..S....
N..X....
Y..X....
F..Q....
D..O....
S..F....
G..G....
IXEJNDOP
...U...T
...ZGPPC

```
