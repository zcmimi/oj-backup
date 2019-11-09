# Easter Eggs

## 题意翻译

复活节兔子把n个蛋围成了一个圆圈。她打算给它们上色。

每一个蛋都要被涂上红橙黄绿蓝靛紫七色中的一个颜色，并满足如下条件：

1、每一种颜色都必须用上

2、任何四个相连的蛋都要涂上不同的颜色。

帮助复活节兔子涂上颜色，当然，这肯定是有解的！

输入：

一行：n（7<=n<=100）

输出：

一行：用下列字符表示所涂上的颜色：R（红red），O（橙orange），Y（黄：yellow），G（绿green），B（蓝blue），I（靛indigo），V（紫violet）

注意：如果存在多个答案，输出其中一种即可

感谢 @____233____ 提供的翻译。

## 题目描述

The Easter Rabbit laid $ n $ eggs in a circle and is about to paint them.

Each egg should be painted one color out of 7: red, orange, yellow, green, blue, indigo or violet. Also, the following conditions should be satisfied:

- Each of the seven colors should be used to paint at least one egg.

- Any four eggs lying sequentially should be painted different colors.

Help the Easter Rabbit paint the eggs in the required manner. We know that it is always possible.

## 输入输出格式

### 输入格式

The only line contains an integer $ n $ — the amount of eggs ( $ 7<=n<=100 $ ).

### 输出格式

Print one line consisting of $ n $ characters. The $ i $ -th character should describe the color of the $ i $ -th egg in the order they lie in the circle. The colors should be represented as follows: "R" stands for red, "O" stands for orange, "Y" stands for yellow, "G" stands for green, "B" stands for blue, "I" stands for indigo, "V" stands for violet.

If there are several answers, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
8

```
### 输出样例 #1

```cpp
ROYGRBIV

```
### 输入样例 #2

```cpp
13

```
### 输出样例 #2

```cpp
ROYGBIVGBIVYG

```
## 说明

The way the eggs will be painted in the first sample is shown on the picture:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF78B/89e74426378989547383b9ed8ec253c74d4ce7d9.png)

