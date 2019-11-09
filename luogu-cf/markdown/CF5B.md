# Center Alignment

## 题意翻译

题目描述

几乎每一个文本编辑器都有文字居中对齐的功能，因此Berland的著名文本编辑器Textpad的开发者们希望在产品的第四次更新中加入此功能。

您的任务是尽快编写一个文本居中对齐的原型程序，祝您好运!

输入格式

输入包含一行或者多行文本，每行均由拉丁字母、数字和/或空格组成，每一行都不会以空格开始或者结束，保证至少有一行长度大于等于1。每行的长度和总行数都不会超过1000。

输出格式

将文本居中对齐，用星号'\*'框起整个文本。

如果无法实现完美的居中对齐，请将这一行文本向左或者向右微调(您应该在第一次遇到此类情况时将该行文本向左微调，下一次向右，在下一次向左...依此类推)。

如果您对输出格式仍有疑惑，请参看样例。

## 题目描述

Almost every text editor has a built-in function of center text alignment. The developers of the popular in Berland text editor «Textpad» decided to introduce this functionality into the fourth release of the product.

You are to implement the alignment in the shortest possible time. Good luck!

## 输入输出格式

### 输入格式

The input file consists of one or more lines, each of the lines contains Latin letters, digits and/or spaces. The lines cannot start or end with a space. It is guaranteed that at least one of the lines has positive length. The length of each line and the total amount of the lines do not exceed 1000.

### 输出格式

Format the given text, aligning it center. Frame the whole text with characters «\*» of the minimum size. If a line cannot be aligned perfectly (for example, the line has even length, while the width of the block is uneven), you should place such lines rounding down the distance to the left or to the right edge and bringing them closer left or right alternatively (you should start with bringing left). Study the sample tests carefully to understand the output format better.

## 输入输出样例

### 输入样例 #1

```cpp
This  is
Codeforces
Beta
Round
5

```
### 输出样例 #1

```cpp
************
* This  is *
*          *
*Codeforces*
*   Beta   *
*  Round   *
*     5    *
************

```
### 输入样例 #2

```cpp
welcome to the
Codeforces
Beta
Round 5
and
good luck

```
### 输出样例 #2

```cpp
****************
*welcome to the*
*  Codeforces  *
*     Beta     *
*   Round 5    *
*              *
*      and     *
*  good luck   *
****************

```
