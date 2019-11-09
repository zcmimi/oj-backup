# Safe cracking

## 题意翻译

题目描述 现在你要干一件非常，非常简单的事情：破解保险箱。四个正整数在一个圆上锁着保险箱。你现在知道只要把所有数字都变成一就可以解锁保险箱。你可用的操作有这些：选择两个相邻的数字都加一，或者选择两个相邻的数字都除以二。不要想别的，干掉保险箱！

输入输出格式

输入格式：

一行，四个用空格分开的正整数，分别代表四个在圆上的数字，这四个数都不大于10^9。

输出格式： 若果保险箱不可能被破解，输出"-1"。不然的话，连续输出破解保险箱的方法（每行一个表达式）。你不用刻意缩减表达式的个数，但它的行数不应该超过1000。为了方便输出，假设四个数字分别在1至4的位置。每一个表达式由两个字符组成：一个字符（'+'或'/'）和一个数字（两个进行操作的数字中靠前的一个（'4'代表4位置上的数和1位置上的数））。（提示：可以对照样例理解输出格式）

如果有多于一个解法，输出其中任意一个即可。

## 题目描述

Right now you are to solve a very, very simple problem — to crack the safe. Four positive integers stand one by one on a circle protecting the safe. You know that to unlock this striking safe you have to make all four numbers equal to one. Operations are as follows: you may choose two adjacent numbers and increase both by one; you may choose two adjacent even numbers and divide both by two. Nothing else. Crack the safe!

## 输入输出格式

### 输入格式

The single line of the input contains four space-separated integer positive numbers not greater than $ 10^{9} $ each — four numbers on the circle in consecutive order.

### 输出格式

The output should contain "-1" (quotes for clarity) if the safe is secure, that is it's impossible to crack it. Otherwise, output should contain the sequence of operations (one operations per line) leading to unlocking the safe. You don't have to minimize the number of operations, but it should not exceed 1000. To make things clear, assume numbers stand on positions 1 through 4. Each operation is encoded by two symbols. If the following operation is dividing then first symbol is '/'; otherwise it's '+' (addition). The second symbol is the position of the first number in pair in consecutive order. (see samples for clarification).

If there are several solutions, output any of them.

## 输入输出样例

### 输入样例 #1

```cpp
1 2 4 2

```
### 输出样例 #1

```cpp
/2
/3

```
### 输入样例 #2

```cpp
3 3 1 1

```
### 输出样例 #2

```cpp
+1
/1
/1

```
### 输入样例 #3

```cpp
2 1 2 4

```
### 输出样例 #3

```cpp
/3
/4

```
