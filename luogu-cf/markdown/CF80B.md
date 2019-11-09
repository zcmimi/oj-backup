# Depression

## 题意翻译

**题目描述**

在地下室深处躺着数字时钟，显示时间格式为HH：MM。

现在城堡的居民面临着艰巨的任务,**Cogsworth的最初时间是12:00**，他们需要**向右转动**Cogsworth的时针和分针，直到Cogsworth显示正确的时间。**所以，他们需要找到时针和分针顺时针旋转的角度。**

Cogsworth的时针和分针均匀且连续地移动。时针和分针独立移动，所以当转动另一只针时另一只针仍然静止不动。

22：00与10：00旋转角度是相同的

**输入格式：**

唯一的输入行包含根据数字时钟的当前时间，格式为HH：MM (00 ≤ HH ≤ 23, 00 ≤ MM ≤ 59)。Cogsworth最初显示12:00。

**输出格式：**

输出数字x和y -- 时针和分针的旋转角度(0 ≤ x, y < 360). 答案中的绝对或相对误差不应超过10 e-9

## 题目描述

Do you remember a kind cartoon "Beauty and the Beast"? No, no, there was no firing from machine guns or radiation mutants time-travels!

There was a beauty named Belle. Once she had violated the Beast's order and visited the West Wing. After that she was banished from the castle...

Everybody was upset. The beautiful Belle was upset, so was the Beast, so was Lumiere the candlestick. But the worst thing was that Cogsworth was upset. Cogsworth is not a human, but is the mantel clock, which was often used as an alarm clock.

Due to Cogsworth's frustration all the inhabitants of the castle were in trouble: now they could not determine when it was time to drink morning tea, and when it was time for an evening stroll.

Fortunately, deep in the basement are lying digital clock showing the time in the format HH:MM. Now the residents of the castle face a difficult task. They should turn Cogsworth's hour and minute mustache hands in such a way, that Cogsworth began to show the correct time. Moreover they need to find turn angles in degrees for each mustache hands. The initial time showed by Cogsworth is 12:00.

You can only rotate the hands forward, that is, as is shown in the picture:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF80B/7759a51c44d963f87b09dc91b49d34f16c1535f0.png)As since there are many ways too select such angles because of full rotations, choose the smallest angles in the right (non-negative) direction.

Note that Cogsworth's hour and minute mustache hands move evenly and continuously. Hands are moving independently, so when turning one hand the other hand remains standing still.

## 输入输出格式

### 输入格式

The only line of input contains current time according to the digital clock, formatted as HH:MM ( $ 00<= $ HH $ <=23 $ , $ 00<= $ MM $ <=59 $ ). The mantel clock initially shows 12:00.

Pretests contain times of the beginning of some morning TV programs of the Channel One Russia.

### 输出格式

Print two numbers $ x $ and $ y $ — the angles of turning the hour and minute hands, respectively ( $ 0<=x,y&lt;360 $ ). The absolute or relative error in the answer should not exceed $ 10^{-9} $ .

## 输入输出样例

### 输入样例 #1

```cpp
12:00

```
### 输出样例 #1

```cpp
0 0
```


### 输入样例 #2

```cpp
04:30

```
### 输出样例 #2

```cpp
135 180
```


### 输入样例 #3

```cpp
08:17

```
### 输出样例 #3

```cpp
248.5 102
```


## 说明

A note to the second example: the hour hand will be positioned exactly in the middle, between 4 and 5.

