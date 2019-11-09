# Embassy Queue

## 题目描述

In an embassy of a well-known kingdom an electronic queue is organised. Every person who comes to the embassy, needs to make the following three actions: show the ID, pay money to the cashier and be fingerprinted. Besides, the actions should be performed in the given order.

For each action several separate windows are singled out: $ k_{1} $ separate windows for the first action (the first type windows), $ k_{2} $ windows for the second one (the second type windows), and $ k_{3} $ for the third one (the third type windows). The service time for one person in any of the first type window equals to $ t_{1} $ . Similarly, it takes $ t_{2} $ time to serve a person in any of the second type windows. And it takes $ t_{3} $ to serve one person in any of the third type windows. Thus, the service time depends only on the window type and is independent from the person who is applying for visa.

At some moment $ n $ people come to the embassy, the $ i $ -th person comes at the moment of time $ c_{i} $ . The person is registered under some number. After that he sits in the hall and waits for his number to be shown on a special board. Besides the person's number the board shows the number of the window where one should go and the person goes there immediately. Let's consider that the time needed to approach the window is negligible. The table can show information for no more than one person at a time. The electronic queue works so as to immediately start working with the person who has approached the window, as there are no other people in front of the window.

The Client Service Quality inspectors noticed that several people spend too much time in the embassy (this is particularly tiresome as the embassy has no mobile phone reception and 3G). It was decided to organise the system so that the largest time a person spends in the embassy were minimum. Help the inspectors organise the queue. Consider that all actions except for being served in at the window, happen instantly.

## 输入输出格式

### 输入格式

The first line contains three space-separated integers $ k_{1} $ , $ k_{2} $ , $ k_{3} $ ( $ 1<=k_{i}<=10^{9} $ ), they are the number of windows of the first, second and third type correspondingly.

The second line contains three space-separated integers $ t_{1} $ , $ t_{2} $ , $ t_{3} $ ( $ 1<=t_{i}<=10^{5} $ ), they are the periods of time needed to serve one person in the window of the first, second and third type correspondingly.

The third line contains an integer $ n $ ( $ 1<=n<=10^{5} $ ), it is the number of people.

The fourth line contains $ n $ space-separated integers $ c_{i} $ ( $ 1<=c_{i}<=10^{9} $ ) in the non-decreasing order; $ c_{i} $ is the time when the person number $ i $ comes to the embassy.

### 输出格式

Print the single number, the maximum time a person will spend in the embassy if the queue is organized optimally.

Please, do not use the %lld specificator to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams (also you may use the %I64d specificator).

## 输入输出样例

### 输入样例 #1

```cpp
1 1 1
1 1 1
5
1 1 1 1 1

```
### 输出样例 #1

```cpp
7

```
### 输入样例 #2

```cpp
2 1 1
5 1 1
5
1 2 3 3 5

```
### 输出样例 #2

```cpp
13

```
## 说明

In the first test 5 people come simultaneously at the moment of time equal to 1. There is one window of every type, it takes 1 unit of time to be served at each window. That's why the maximal time a person spends in the embassy is the time needed to be served at the windows (3 units of time) plus the time the last person who comes to the first window waits (4 units of time).

Windows in the second test work like this:

The first window of the first type: $ [1,6) $ — the first person, $ [6,11) $ — third person, $ [11,16) $ — fifth person

The second window of the first type: $ [2,7) $ — the second person, $ [7,12) $ — the fourth person

The only second type window: $ [6,7) $ — first, $ [7,8) $ — second, $ [11,12) $ — third, $ [12,13) $ — fourth, $ [16,17) $ — fifth

The only third type window: $ [7,8) $ — first, $ [8,9) $ — second, $ [12,13) $ — third, $ [13,14) $ — fourth, $ [17,18) $ — fifth

We can see that it takes most time to serve the fifth person.

