# Power Consumption Calculation

## 题意翻译

有一台电脑，在活跃状态下，每秒钟耗能p1，在没人碰之后的t1秒后，进入休息状态，每秒钟耗能p2，如果再有t3秒没人碰的话，就会进入睡眠状态，每秒钟耗能p3

给你这个人碰电脑的区间时间，问你这台电脑的耗能是多少

感谢@Dreamer丶杨 提供的翻译

## 题目描述

Tom is interested in power consumption of his favourite laptop. His laptop has three modes. In normal mode laptop consumes $ P_{1} $ watt per minute. $ T_{1} $ minutes after Tom moved the mouse or touched the keyboard for the last time, a screensaver starts and power consumption changes to $ P_{2} $ watt per minute. Finally, after $ T_{2} $ minutes from the start of the screensaver, laptop switches to the "sleep" mode and consumes $ P_{3} $ watt per minute. If Tom moves the mouse or touches the keyboard when the laptop is in the second or in the third mode, it switches to the first (normal) mode. Tom's work with the laptop can be divided into $ n $ time periods $ [l_{1},r_{1}],[l_{2},r_{2}],...,[l_{n},r_{n}] $ . During each interval Tom continuously moves the mouse and presses buttons on the keyboard. Between the periods Tom stays away from the laptop. Find out the total amount of power consumed by the laptop during the period $ [l_{1},r_{n}] $ .

## 输入输出格式

### 输入格式

The first line contains 6 integer numbers $ n $ , $ P_{1} $ , $ P_{2} $ , $ P_{3} $ , $ T_{1} $ , $ T_{2} $ ( $ 1<=n<=100,0<=P_{1},P_{2},P_{3}<=100,1<=T_{1},T_{2}<=60 $ ). The following $ n $ lines contain description of Tom's work. Each $ i $ -th of these lines contains two space-separated integers $ l_{i} $ and $ r_{i} $ ( $ 0<=l_{i}<r_{i}<=1440 $ , $ r_{i}<l_{i+1} $ for $ i<n $ ), which stand for the start and the end of the $ i $ -th period of work.

### 输出格式

Output the answer to the problem.

## 输入输出样例

### 输入样例 #1

```cpp
1 3 2 1 5 10
0 10

```
### 输出样例 #1

```cpp
30
```


### 输入样例 #2

```cpp
2 8 4 2 5 10
20 30
50 100

```
### 输出样例 #2

```cpp
570
```


