# Bar

## 题意翻译

题目描述

根据Berland的法律，不准向年龄未满18岁的人出售酒。Vasya的工作是监督此法律的执行。今晚他走进了一个酒吧，看到n个人坐在那儿。对于每一个人，Vasya都恰好知道了要么这个人的年龄要么这个人正在喝的饮料。Vasya可以检查任何一个人，换句话说，就是了解这个人的年龄和他正在喝的饮料。Vasya至少需要检查多少人才能保证没有18岁以下的顾客饮酒？

所有Berland的酒如下:

ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE

输入格式：

第一行仅包含一个整数n（$1\leq n\leq100$），表示酒吧里的顾客数。接下来n行，每行描述了一个顾客。一行要么包含它的年龄（一个从0到1000的整数）,要么是他的饮料（一串长度为1到100的大写的拉丁字母）。保证输入不含空格和其他多余的分隔符

只有上面列表中列出的饮料被认为是酒

输出格式：

输出一个数字，表示Vasya为保证执法要检查的人数

说明

在样例中，应该检查第二个和第五个顾客

Translated by Khassar

## 题目描述

According to Berland laws it is only allowed to sell alcohol to people not younger than 18 years. Vasya's job is to monitor the law's enforcement. Tonight he entered a bar and saw $ n $ people sitting there. For every one of them Vasya happened to determine either the age or the drink the person is having. Vasya can check any person, i.e. learn his age and the drink he is having at the same time. What minimal number of people should Vasya check additionally to make sure that there are no clients under 18 having alcohol drinks?

The list of all alcohol drinks in Berland is: ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ) which is the number of the bar's clients. Then follow $ n $ lines, each describing one visitor. A line either contains his age (an integer from 0 to 1000) or his drink (a string of capital Latin letters from 1 to 100 in length). It is guaranteed that the input data does not contain spaces and other unnecessary separators.

Only the drinks from the list given above should be considered alcohol.

### 输出格式

Print a single number which is the number of people Vasya should check to guarantee the law enforcement.

## 输入输出样例

### 输入样例 #1

```cpp
5
18
VODKA
COKE
19
17

```
### 输出样例 #1

```cpp
2

```
## 说明

In the sample test the second and fifth clients should be checked.

