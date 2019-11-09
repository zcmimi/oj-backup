# BerPaint

## 题意翻译

猴子Anfisa对于文字处理器已经失望透顶了，因为它不能很好反应Anfisa情绪的波动。 这就是为什么她要切换到图形编辑器打开编辑器，她看到有一个尺寸为W*H的绘图板， 起初她学习使用画图工具来涂颜料块，并很快在画板上画出一定数量的颜料块， 这些最终的图像对Anfisa来说不够明亮，这也就是为什么她把注意力转向“填涂”工具上。 这是一种在画板上绘画和选色的工具在填充这张图好几次后，Anfisa完全明白了自己的情感 并停止作画。

你的任务是根据画上的颜色信息段计算出每种颜色填充区域的总面积。

## 题目描述

Anfisa the monkey got disappointed in word processors as they aren't good enough at reflecting all the range of her emotions, that's why she decided to switch to graphics editors. Having opened the BerPaint, she saw a white rectangle $ W×H $ in size which can be painted on. First Anfisa learnt to navigate the drawing tool which is used to paint segments and quickly painted on that rectangle a certain number of black-colored segments. The resulting picture didn't seem bright enough to Anfisa, that's why she turned her attention to the "fill" tool which is used to find a point on the rectangle to paint and choose a color, after which all the area which is the same color as the point it contains, is completely painted the chosen color. Having applied the fill several times, Anfisa expressed her emotions completely and stopped painting. Your task is by the information on the painted segments and applied fills to find out for every color the total area of the areas painted this color after all the fills.

## 输入输出格式

### 输入格式

The first input line has two integers $ W $ and $ H $ ( $ 3<=W,H<=10^{4} $ ) — the sizes of the initially white rectangular painting area. The second line contains integer $ n $ — the number of black segments ( $ 0<=n<=100 $ ). On the next $ n $ lines are described the segments themselves, each of which is given by coordinates of their endpoints $ x_{1},y_{1},x_{2},y_{2} $ ( $ 0&lt;x_{1},x_{2}&lt;W,0&lt;y_{1},y_{2}&lt;H $ ). All segments have non-zero length. The next line contains preset number of fills $ m $ ( $ 0<=m<=100 $ ). Each of the following $ m $ lines defines the fill operation in the form of " $ x $ $ y $ $ color $ ", where $ (x,y) $ are the coordinates of the chosen point ( $ 0&lt;x&lt;W,0&lt;y&lt;H $ ), and $ color $ — a line of lowercase Latin letters from 1 to 15 symbols in length, determining the color. All coordinates given in the input are integers. Initially the rectangle is "white" in color, whereas the segments are drawn "black" in color.

### 输出格式

For every color present in the final picture print on the single line the name of the color and the total area of areas painted that color with an accuracy of $ 10^{-6} $ . Print the colors in any order.

## 输入输出样例

### 输入样例 #1

```cpp
4 5
6
1 1 1 3
1 3 3 3
3 3 3 1
3 1 1 1
1 3 3 1
1 1 3 3
2
2 1 red
2 2 blue

```
### 输出样例 #1

```cpp
blue 0.00000000
white 20.00000000

```
### 输入样例 #2

```cpp
5 5
5
1 1 2 2
2 2 4 2
4 2 4 4
4 4 2 4
2 4 2 2
2
3 3 black
3 3 green

```
### 输出样例 #2

```cpp
green 4.00000000
white 21.00000000

```
### 输入样例 #3

```cpp
7 4
9
1 2 2 3
2 3 3 2
3 2 2 1
2 1 1 2
3 2 4 2
4 2 5 3
5 3 6 2
6 2 5 1
5 1 4 2
2
2 2 black
2 2 red

```
### 输出样例 #3

```cpp
red 2.00000000
white 26.00000000

```
## 说明

Initially the black segments painted by Anfisa can also be painted a color if any of the chosen points lays on the segment. The segments have areas equal to 0. That is why if in the final picture only parts of segments is painted some color, then the area, painted the color is equal to 0.

