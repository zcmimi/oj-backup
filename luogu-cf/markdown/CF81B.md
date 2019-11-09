# Sequence Formatting

## 题意翻译

Polycarp 是个非常严谨的人，不像他的同班同学那样，他甚至仔细地键入数字序列。

如果他看到一个序列在逗号后面没有空格，或是一行有多个空格，或者当其他东西看起来不严谨时，他会立刻纠正它。

例如，如“1,2，3，…，10”所写的数字序列将被修正为“1, 2, 3，…，10”。

在这个任务中，你得到一个字符串 s ，

s 由术语的连词构成，每一个词可以是：

1.任意长度的正整数（不允许前导零），

2. 逗号符号（“，”），

3. 空格符号（“ ”），

4. “三点”（“…”），即一个接一个地写三个点，也称为“暂停点”。

Polycarp想添加并且删除字符串s中多余的空格来满足以下要求：

1.每个逗号后面只有一个空格（若逗号是字符串中的最后一个字符，则此规则不适用于它）；

2.每个“三点”前正好有一个空格（若三点在字符串的开头，则此规则不适用于它）；

3.如果两个连续的数字仅由空格分隔，那么就应该只剩下一个空格，不应该有多余的空格。

现在请你编写一个程序帮助Polycarp完成对字符串s的操作。

输入输出格式

输入格式：

输入数据包含一个字符串s，它由最少1个字符，最多255个字符组成。

s不会以一个空格开始或结束。

它的内容与上面给出的描述相匹配。

输出格式：

处理后的s。你的程序的输出应该和预期的答案完全一样。

允许输出换行输出s，也可以不换。

## 题目描述

Polycarp is very careful. He even types numeric sequences carefully, unlike his classmates. If he sees a sequence without a space after the comma, with two spaces in a row, or when something else does not look neat, he rushes to correct it. For example, number sequence written like "1,2 ,3,..., 10" will be corrected to "1, 2, 3, ..., 10".

In this task you are given a string $ s $ , which is composed by a concatination of terms, each of which may be:

- a positive integer of an arbitrary length (leading zeroes are not allowed),

- a "comma" symbol (","),

- a "space" symbol (" "),

- "three dots" ("...", that is, exactly three points written one after another, also known as suspension points).

Polycarp wants to add and remove spaces in the string $ s $ to ensure the following:

- each comma is followed by exactly one space (if the comma is the last character in the string, this rule does not apply to it),

- each "three dots" term is preceded by exactly one space (if the dots are at the beginning of the string, this rule does not apply to the term),

- if two consecutive numbers were separated by spaces only (one or more), then exactly one of them should be left,

- there should not be other spaces.

Automate Polycarp's work and write a program that will process the given string $ s $ .

## 输入输出格式

### 输入格式

The input data contains a single string $ s $ . Its length is from 1 to 255 characters. The string $ s $ does not begin and end with a space. Its content matches the description given above.

### 输出格式

Print the string $ s $ after it is processed. Your program's output should be exactly the same as the expected answer. It is permissible to end output line with a line-break character, and without it.

## 输入输出样例

### 输入样例 #1

```cpp
1,2 ,3,...,     10

```
### 输出样例 #1

```cpp
1, 2, 3, ..., 10

```
### 输入样例 #2

```cpp
1,,,4...5......6

```
### 输出样例 #2

```cpp
1, , , 4 ...5 ... ...6

```
### 输入样例 #3

```cpp
...,1,2,3,...

```
### 输出样例 #3

```cpp
..., 1, 2, 3, ...

```
