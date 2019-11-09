# Harry Potter and the History of Magic

## 题意翻译

意译，原题背景是哈利波特。

给你$n$个年份。

请你更改一些数字，使年份按时间顺序（即非递减）排列，以使其中没有任何日期晚于$2011$或早于$1000$。

在每个日期中最多只能将一位数字改成别的数字。

$1≤n≤1000,1000≤y_i≤9999$

## 题目描述

The History of Magic is perhaps the most boring subject in the Hogwarts school of Witchcraft and Wizardry. Harry Potter is usually asleep during history lessons, and his magical quill writes the lectures for him. Professor Binns, the history of magic teacher, lectures in such a boring and monotonous voice, that he has a soporific effect even on the quill. That's why the quill often makes mistakes, especially in dates.

So, at the end of the semester Professor Binns decided to collect the students' parchments with notes and check them. Ron Weasley is in a panic: Harry's notes may contain errors, but at least he has some notes, whereas Ron does not have any. Ronald also has been sleeping during the lectures and his quill had been eaten by his rat Scabbers. Hermione Granger refused to give Ron her notes, because, in her opinion, everyone should learn on their own. Therefore, Ron has no choice but to copy Harry's notes.

Due to the quill's errors Harry's dates are absolutely confused: the years of goblin rebellions and other important events for the wizarding world do not follow in order, and sometimes even dates from the future occur. Now Ron wants to change some of the digits while he copies the notes so that the dates were in the chronological (i.e. non-decreasing) order and so that the notes did not have any dates strictly later than $ 2011 $ , or strictly before than $ 1000 $ . To make the resulting sequence as close as possible to the one dictated by Professor Binns, Ron will change no more than one digit in each date into other digit. Help him do it.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ ( $ 1<=n<=1000 $ ). It represents the number of dates in Harry's notes. Next $ n $ lines contain the actual dates $ y_{1} $ , $ y_{2} $ , ..., $ y_{n} $ , each line contains a date. Each date is a four-digit integer ( $ 1000<=y_{i}<=9999 $ ).

### 输出格式

Print $ n $ numbers $ z_{1} $ , $ z_{2} $ , ..., $ z_{n} $ ( $ 1000<=z_{i}<=2011 $ ). They are Ron's resulting dates. Print each number on a single line. Numbers $ z_{i} $ must form the non-decreasing sequence. Each number $ z_{i} $ should differ from the corresponding date $ y_{i} $ in no more than one digit. It is not allowed to change the first digit of a number into $ 0 $ . If there are several possible solutions, print any of them. If there's no solution, print "No solution" (without the quotes).

## 输入输出样例

### 输入样例 #1

```cpp
3
1875
1936
1721

```
### 输出样例 #1

```cpp
1835
1836
1921

```
### 输入样例 #2

```cpp
4
9999
2000
3000
3011

```
### 输出样例 #2

```cpp
1999
2000
2000
2011

```
### 输入样例 #3

```cpp
3
1999
5055
2000

```
### 输出样例 #3

```cpp
No solution

```
