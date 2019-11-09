# Find Color

## 题意翻译

不久前，由于战争，Berland的主要标志魔力钟损坏了。大炮在钟面上炸出了几个洞。这就是为什么居民要修复这个钟的原因。这个钟可以看做一个无限的Cartesian平面。钟被涂上了两种颜色，如图所示：

这张图只显示了魔力钟的中心部位，颜色一直按照此规律延伸到无穷远处。

炮弹可以看做平面上的点。你的任务就是找到被炮弹损坏区域的颜色。

位于边界上的点必须被认为黑色。

输入格式

输入仅一行，包含了两个整数x和y——炮弹在钟面上的坐标。每个数字x和y的绝对值不超过1000。

输出格式

找到的颜色。位于边界上的点必须被认为黑色。

感谢Shan_Xian 提供的翻译

## 题目描述

Not so long ago as a result of combat operations the main Berland place of interest — the magic clock — was damaged. The cannon's balls made several holes in the clock, that's why the residents are concerned about the repair. The magic clock can be represented as an infinite Cartesian plane, where the origin corresponds to the clock center. The clock was painted two colors as is shown in the picture:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF40A/c1bd1b57bbf2da58f15b524cdd013275d04d74c2.png)The picture shows only the central part of the clock. This coloring naturally extends to infinity.

The balls can be taken to be points on the plane. Your task is to find the color of the area, damaged by the given ball.

All the points located on the border of one of the areas have to be considered painted black.

## 输入输出格式

### 输入格式

The first and single line contains two integers $ x $ and $ y $ — the coordinates of the hole made in the clock by the ball. Each of the numbers $ x $ and $ y $ has an absolute value that does not exceed $ 1000 $ .

### 输出格式

Find the required color.

All the points between which and the origin of coordinates the distance is integral-value are painted black.

## 输入输出样例

### 输入样例 #1

```cpp
-2 1

```
### 输出样例 #1

```cpp
white

```
### 输入样例 #2

```cpp
2 1

```
### 输出样例 #2

```cpp
black

```
### 输入样例 #3

```cpp
4 3

```
### 输出样例 #3

```cpp
black

```
