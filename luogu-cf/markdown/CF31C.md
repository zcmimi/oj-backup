# Schedule

## 题意翻译

给定一个整数N(N<=5000),接下来读入n行，每行2个整数，第i行的整数，设第一个为a[i],第二个为b[i],那么a[i]表示这个课程的起始时间,b[i]表示这个课程的终止时间。结果证明，上所有的课程都是不可能的，因为对某些群体来说，他们的课程是交叉的。如果某一时刻某一组完成了它的课程，而另一组开始上课，他们的课程就不会相交。教务长想取消一个小组的课程，这样剩下两个小组的课程就不会有交集。你要找到各种方法去做那件事。输出共2行，第一行表示取消一个小组的课程，这样剩下两个小组的课程就不会有交集的方案总数，第二行升序输出取消课程的编号。 注意：第i个课程上次被取消，这次要做后面的课程了，第i个课程不用被取消。

感谢@Hjl1777 提供的翻译

## 题目描述

At the beginning of the new semester there is new schedule in the Berland State University. According to this schedule, $ n $ groups have lessons at the room 31. For each group the starting time of the lesson and the finishing time of the lesson are known. It has turned out that it is impossible to hold all lessons, because for some groups periods of their lessons intersect. If at some moment of time one groups finishes it's lesson, and the other group starts the lesson, their lessons don't intersect.

The dean wants to cancel the lesson in one group so that no two time periods of lessons of the remaining groups intersect. You are to find all ways to do that.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=5000 $ ) — amount of groups, which have lessons in the room 31. Then $ n $ lines follow, each of them contains two integers $ l_{i} $ $ r_{i} $ ( $ 1<=l_{i}<r_{i}<=10^{6} $ ) — starting and finishing times of lesson of the $ i $ -th group. It is possible that initially no two lessons intersect (see sample 1).

### 输出格式

Output integer $ k $ — amount of ways to cancel the lesson in exactly one group so that no two time periods of lessons of the remaining groups intersect. In the second line output $ k $ numbers — indexes of groups, where it is possible to cancel the lesson. Groups are numbered starting from $ 1 $ in the order that they were given in the input. Output the numbers in increasing order.

## 输入输出样例

### 输入样例 #1

```cpp
3
3 10
20 30
1 3

```
### 输出样例 #1

```cpp
3
1 2 3 
```


### 输入样例 #2

```cpp
4
3 10
20 30
1 3
1 39

```
### 输出样例 #2

```cpp
1
4 
```


### 输入样例 #3

```cpp
3
1 5
2 6
3 7

```
### 输出样例 #3

```cpp
0

```
