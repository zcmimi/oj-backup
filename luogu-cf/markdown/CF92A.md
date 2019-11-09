# Chips

## 题意翻译

## 题目描述

现在有n个海狮坐成一个圆圈玩♂游♂戏。所有海狮都被顺时针的被编上号码了：2号海狮在1号海狮的左边坐着，3号海狮在2号海狮的左边坐着，……，1号海狮在n号海狮的左边坐着。

我们还有一位慷慨的来自某薯片公司的员工。他为了宣传他的薯片有多好吃，带来了m片薯片来到海狮群做宣传。他站在海狮圈的中间并顺时针转动。第i号海狮可以分到i个薯片。如果这位员工没有足够的薯片，这个黑心的员工就带着剩下的薯片跑了。现在给你n和m，让你求这个员工最后会拿多少薯片。

## 输入输出格式

### 输入格式

一行，包含两个整数n和m。（1<=n<=50，1<=m<=10^4）

### 输出格式

输出这个员工带着多少薯片跑了

感谢@deadpool123 提供翻译

## 题目描述

There are $ n $ walruses sitting in a circle. All of them are numbered in the clockwise order: the walrus number $ 2 $ sits to the left of the walrus number $ 1 $ , the walrus number $ 3 $ sits to the left of the walrus number $ 2 $ , ..., the walrus number $ 1 $ sits to the left of the walrus number $ n $ .

The presenter has $ m $ chips. The presenter stands in the middle of the circle and starts giving the chips to the walruses starting from walrus number $ 1 $ and moving clockwise. The walrus number $ i $ gets $ i $ chips. If the presenter can't give the current walrus the required number of chips, then the presenter takes the remaining chips and the process ends. Determine by the given $ n $ and $ m $ how many chips the presenter will get in the end.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 1<=n<=50 $ , $ 1<=m<=10^{4} $ ) — the number of walruses and the number of chips correspondingly.

### 输出格式

Print the number of chips the presenter ended up with.

## 输入输出样例

### 输入样例 #1

```cpp
4 11

```
### 输出样例 #1

```cpp
0

```
### 输入样例 #2

```cpp
17 107

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
3 8

```
### 输出样例 #3

```cpp
1

```
## 说明

In the first sample the presenter gives one chip to the walrus number $ 1 $ , two chips to the walrus number $ 2 $ , three chips to the walrus number $ 3 $ , four chips to the walrus number $ 4 $ , then again one chip to the walrus number $ 1 $ . After that the presenter runs out of chips. He can't give anything to the walrus number $ 2 $ and the process finishes.

In the third sample the presenter gives one chip to the walrus number $ 1 $ , two chips to the walrus number $ 2 $ , three chips to the walrus number $ 3 $ , then again one chip to the walrus number $ 1 $ . The presenter has one chip left and he can't give two chips to the walrus number $ 2 $ , that's why the presenter takes the last chip.

