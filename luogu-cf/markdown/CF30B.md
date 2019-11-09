# Codeforces World Finals

## 题意翻译

## 题意描述

关于$Codeforces$网站$king$ $Copa$经常被报道，该网站在人类最聪明的头脑中迅速变得越来越受欢迎，他们用它来训练和竞争。最近，$Copa$明白要征服世界，他需要组织世界密码部队锦标赛。他希望，在这之后，最聪明的头脑将成为他的下属，征服世界最艰难的部分将完成。

$Codeforces$世界总决赛$20$。$YY$的最后一轮定于$DD$. $MM$. $YY$，其中$DD$是圆形的日子，$MM$是月份，$YY$是一年的最后两位数字。鲍勃很幸运，成为伯兰德大学的第一个进入决赛的学生。但有一个问题:根据比赛规则，所有参赛者在决赛时必须年满$18$岁。鲍勃出生在$BD$家，$BM$。通过。这个日期记录在他的护照上，他已经把护照副本寄给了组织者。但是$Bob$了解到在不同的国家，日期的书写方式是不同的。例如，在美国，月是先写的，然后是日期，最后是一年。鲍勃想知道是否有可能重新排列他出生日期中的数字，这样他在第一天就至少$18$岁了。$MM$。$YY$。他总能看出，在他的祖国，日期的书写是不同的。帮助他。

根据另一个奇怪的规则，合格的参赛者必须出生在与决赛日期相同的世纪。如果决赛当天是参赛者的$18$岁生日，他可以参加。

因为我们只考虑从$2001$年到$2099$年的总决赛年份，使用以下规则:如果数字能被$4$整除，那么年份就是闰年。

## 输入格式

第一行包含日期$DD$. $MM$ . $YY$，第二行包含日期$BD$ . $MM$ . $YY$。$BM$通过。可以保证两个日期都是正确的，$YY$和$BY$总是在$[01;99]$中。

根据护照，鲍勃可能是决赛后出生的。在这种情况下，他仍然可以更改日期中的数字顺序。

## 输出格式

如果有可能重新排列出生日期中的数字，使鲍勃在$DD$上至少$18$岁。$MM$。$YY$，输出是。在另一种情况下，输出"$NO$"。

每个数字只包含两个数字，代表日期中的日、月或年。注意，它只允许重新排列数字，而不允许重新排列数字。

感谢@xiaohuang 提供的翻译

## 题目描述

The king Copa often has been reported about the Codeforces site, which is rapidly getting more and more popular among the brightest minds of the humanity, who are using it for training and competing. Recently Copa understood that to conquer the world he needs to organize the world Codeforces tournament. He hopes that after it the brightest minds will become his subordinates, and the toughest part of conquering the world will be completed.

The final round of the Codeforces World Finals 20YY is scheduled for $ DD $ . $ MM $ . $ YY $ , where $ DD $ is the day of the round, $ MM $ is the month and $ YY $ are the last two digits of the year. Bob is lucky to be the first finalist form Berland. But there is one problem: according to the rules of the competition, all participants must be at least 18 years old at the moment of the finals. Bob was born on $ BD $ . $ BM $ . $ BY $ . This date is recorded in his passport, the copy of which he has already mailed to the organizers. But Bob learned that in different countries the way, in which the dates are written, differs. For example, in the US the month is written first, then the day and finally the year. Bob wonders if it is possible to rearrange the numbers in his date of birth so that he will be at least 18 years old on the day $ DD $ . $ MM $ . $ YY $ . He can always tell that in his motherland dates are written differently. Help him.

According to another strange rule, eligible participant must be born in the same century as the date of the finals. If the day of the finals is participant's 18-th birthday, he is allowed to participate.

As we are considering only the years from $ 2001 $ to $ 2099 $ for the year of the finals, use the following rule: the year is leap if it's number is divisible by four.

## 输入输出格式

### 输入格式

The first line contains the date $ DD $ . $ MM $ . $ YY $ , the second line contains the date $ BD $ . $ BM $ . $ BY $ . It is guaranteed that both dates are correct, and $ YY $ and $ BY $ are always in $ [01;99] $ .

It could be that by passport Bob was born after the finals. In this case, he can still change the order of numbers in date.

### 输出格式

If it is possible to rearrange the numbers in the date of birth so that Bob will be at least 18 years old on the $ DD $ . $ MM $ . $ YY $ , output YES. In the other case, output NO.

Each number contains exactly two digits and stands for day, month or year in a date. Note that it is permitted to rearrange only numbers, not digits.

## 输入输出样例

### 输入样例 #1

```cpp
01.01.98
01.01.80

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
20.10.20
10.02.30

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
28.02.74
28.02.64

```
### 输出样例 #3

```cpp
NO

```
