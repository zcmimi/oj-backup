# Lucky Tickets

## 题意翻译

题面：

你有n个数,你可以将它们两两匹配(即将两数首尾相连),问匹配后最多有多少个3的倍数(没有进行匹配的数不算).

输入数据：

第一行一个n

接下来n个正整数.

输出数据：

输出最多有多少个3的倍数.

数据范围：

n:[1,1e4]

x:[1,1e8]

注意：

没有进行匹配的数对答案没有贡献.

翻译贡献者：尘染梦

## 题目描述

Vasya thinks that lucky tickets are the tickets whose numbers are divisible by 3. He gathered quite a large collection of such tickets but one day his younger brother Leonid was having a sulk and decided to destroy the collection. First he tore every ticket exactly in two, but he didn’t think it was enough and Leonid also threw part of the pieces away. Having seen this, Vasya got terrified but still tried to restore the collection. He chose several piece pairs and glued each pair together so that each pair formed a lucky ticket. The rest of the pieces Vasya threw away reluctantly. Thus, after the gluing of the $ 2t $ pieces he ended up with $ t $ tickets, each of which was lucky.

When Leonid tore the tickets in two pieces, one piece contained the first several letters of his number and the second piece contained the rest.

Vasya can glue every pair of pieces in any way he likes, but it is important that he gets a lucky ticket in the end. For example, pieces 123 and 99 can be glued in two ways: 12399 and 99123.

What maximum number of tickets could Vasya get after that?

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=10^{4} $ ) — the number of pieces. The second line contains $ n $ space-separated numbers $ a_{i} $ ( $ 1<=a_{i}<=10^{8} $ ) — the numbers on the pieces. Vasya can only glue the pieces in pairs. Even if the number of a piece is already lucky, Vasya should glue the piece with some other one for it to count as lucky. Vasya does not have to use all the pieces. The numbers on the pieces an on the resulting tickets may coincide.

### 输出格式

Print the single number — the maximum number of lucky tickets that will be able to be restored. Don't forget that every lucky ticket is made of exactly two pieces glued together.

## 输入输出样例

### 输入样例 #1

```cpp
3
123 123 99

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
6
1 1 1 23 10 3

```
### 输出样例 #2

```cpp
1

```
