# Lesson Timetable

## 题目描述

When Petya has free from computer games time, he attends university classes. Every day the lessons on Petya’s faculty consist of two double classes. The floor where the lessons take place is a long corridor with $ M $ classrooms numbered from $ 1 $ to $ M $ , situated along it.

All the students of Petya’s year are divided into $ N $ groups. Petya has noticed recently that these groups’ timetable has the following peculiarity: the number of the classroom where the first lesson of a group takes place does not exceed the number of the classroom where the second lesson of this group takes place.

Once Petya decided to count the number of ways in which one can make a lesson timetable for all these groups. The timetable is a set of $ 2N $ numbers: for each group the number of the rooms where the first and the second lessons take place. Unfortunately, he quickly lost the track of his calculations and decided to count only the timetables that satisfy the following conditions:

1\) On the first lesson in classroom $ i $ exactly $ X_{i} $ groups must be present.

2\) In classroom $ i $ no more than $ Y_{i} $ groups may be placed.

Help Petya count the number of timetables satisfying all those conditionsю As there can be a lot of such timetables, output modulo $ 10^{9}+7 $ .

## 输入输出格式

### 输入格式

The first line contains one integer $ M $ ( $ 1<=M<=100 $ ) — the number of classrooms.

The second line contains $ M $ space-separated integers — $ X_{i} $ ( $ 0<=X_{i}<=100 $ ) the amount of groups present in classroom $ i $ during the first lesson.

The third line contains $ M $ space-separated integers — $ Y_{i} $ ( $ 0<=Y_{i}<=100 $ ) the maximal amount of groups that can be present in classroom $ i $ at the same time.

It is guaranteed that all the $ X_{i}<=Y_{i} $ , and that the sum of all the $ X_{i} $ is positive and does not exceed $ 1000 $ .

### 输出格式

In the single line output the answer to the problem modulo $ 10^{9}+7 $ .

## 输入输出样例

### 输入样例 #1

```cpp
3
1 1 1
1 2 3

```
### 输出样例 #1

```cpp
36

```
### 输入样例 #2

```cpp
3
1 1 1
1 1 1

```
### 输出样例 #2

```cpp
6

```
## 说明

In the second sample test the first and the second lessons of each group must take place in the same classroom, that’s why the timetables will only be different in the rearrangement of the classrooms’ numbers for each group, e.g. $ 3!=6 $ .

