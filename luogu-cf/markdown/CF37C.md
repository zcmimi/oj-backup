# Old Berland Language

## 题意翻译

### 【题目描述】

$Berland$的科学家知道，古老的$Berland$语言中有$n$个单词。这些单词的长度为$l_1$,$l_2$,...,$l_n$。每个单词由$0$和$1$组成。

尽管古代$Berland$人语速很快并且说话不停顿，但同时他们也能很好地理解对方。

可能的原因是：没有一个单词是另一个单词的前缀。字符串的前缀被认为是子串的其中一个开端。

请你帮助科学家确定，是否所有的古$Berland$语的单词都可以被重构。如果可以，输出单词本身。

### 【输入格式】

第一行：一个整数$n$，表示古$Berland$语言的单词个数，其中$1 \le n\le 10^3$。

第二行，有$n$个由空格隔开的整数$len$，分别为这$n$个单词的长度。其中$len\le 10^3$。

### 【输出格式】

如果没有任何符合的单词，只输出$NO$；

否则，在第一行输出$YES$，并在接下来的$n$行，按照输入顺序输出单词本身。

如果答案不唯一，输出$any$。

## 题目描述

Berland scientists know that the Old Berland language had exactly $ n $ words. Those words had lengths of $ l_{1},l_{2},...,l_{n} $ letters. Every word consisted of two letters, $ 0 $ and $ 1 $ . Ancient Berland people spoke quickly and didn’t make pauses between the words, but at the same time they could always understand each other perfectly. It was possible because no word was a prefix of another one. The prefix of a string is considered to be one of its substrings that starts from the initial symbol.

Help the scientists determine whether all the words of the Old Berland language can be reconstructed and if they can, output the words themselves.

## 输入输出格式

### 输入格式

The first line contains one integer $ N $ ( $ 1<=N<=1000 $ ) — the number of words in Old Berland language. The second line contains $ N $ space-separated integers — the lengths of these words. All the lengths are natural numbers not exceeding $ 1000 $ .

### 输出格式

If there’s no such set of words, in the single line output NO. Otherwise, in the first line output YES, and in the next $ N $ lines output the words themselves in the order their lengths were given in the input file. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2 3

```
### 输出样例 #1

```cpp
YES
0
10
110

```
### 输入样例 #2

```cpp
3
1 1 1

```
### 输出样例 #2

```cpp
NO

```
