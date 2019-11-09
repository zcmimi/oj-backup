# Before an Exam

## 题意翻译

题目背景

明天皮特将要考生物。他并不很喜欢生物，但在d天前他得知他将不得不参加此次考试。皮特严厉的父母勒令他立即复习，因此他在第i天将需要学习不少于$minTime_i$小时，不多于$maxTime_i$小时。他们同时警告皮特：考试前一天，他将被检查他复习的完成情况。

因此，今天皮特的父母会要求他展示他考前复习的学习时间表。然而，他只记录这d天以来他复习所用的总计用时sumTime（小时）.现在他希望知道他能否给他的父母展示一份时间表，包含d个数，每个数$schedule_i$表示皮特第i天在复习生物上的用时（单位为小时），并应满足上文提及的要求。

题目输入

第一行包含两个数：d,sumTime

( 1<=d<=30,0<=sumTime<=2401<=d<=30,0<=sumTime<=240 ) ,意义如上所述。

接下来d行，每行两个数：minTime[i],maxtime[i],两个数之间有一个空格，意义如上。(0<=minTime[i]<=maxTime[i]<=8)

如果有解，在单独一行输出"YES"(不含引号)，换行，输出任意一种满足上文要求的解。如果无解，在单独一行中输出"NO"。

## 题目描述

Tomorrow Peter has a Biology exam. He does not like this subject much, but $ d $ days ago he learnt that he would have to take this exam. Peter's strict parents made him prepare for the exam immediately, for this purpose he has to study not less than $ minTime_{i} $ and not more than $ maxTime_{i} $ hours per each $ i $ -th day. Moreover, they warned Peter that a day before the exam they would check how he has followed their instructions.

So, today is the day when Peter's parents ask him to show the timetable of his preparatory studies. But the boy has counted only the sum of hours $ sumTime $ spent him on preparation, and now he wants to know if he can show his parents a timetable $ sсhedule $ with $ d $ numbers, where each number $ sсhedule_{i} $ stands for the time in hours spent by Peter each $ i $ -th day on biology studies, and satisfying the limitations imposed by his parents, and at the same time the sum total of all $ schedule_{i} $ should equal to $ sumTime $ .

## 输入输出格式

### 输入格式

The first input line contains two integer numbers $ d,sumTime $ ( $ 1<=d<=30,0<=sumTime<=240 $ ) — the amount of days, during which Peter studied, and the total amount of hours, spent on preparation. Each of the following $ d $ lines contains two integer numbers $ minTime_{i},maxTime_{i} $ ( $ 0<=minTime_{i}<=maxTime_{i}<=8 $ ), separated by a space — minimum and maximum amount of hours that Peter could spent in the $ i $ -th day.

### 输出格式

In the first line print YES, and in the second line print $ d $ numbers (separated by a space), each of the numbers — amount of hours, spent by Peter on preparation in the corresponding day, if he followed his parents' instructions; or print NO in the unique line. If there are many solutions, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
1 48
5 7

```
### 输出样例 #1

```cpp
NO

```
### 输入样例 #2

```cpp
2 5
0 1
3 5

```
### 输出样例 #2

```cpp
YES
1 4 
```


