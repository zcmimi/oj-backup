# Commentator problem

## 题意翻译

柏林的奥运会正如火如荼地进行着。每个人都有自己的目标:运动员为获得奖牌而竞争，体育评论员为了获得好的观察位置以便发表一篇好的评论文章而竞争。今天的体育比赛在三个圆形的体育场进行，评论员的目标是选择最佳的观察点，也就是三个体育场都可以观察的地方。由于所有的体育比赛都一样重要，因此应该以相同的角度观察体育场。如果符合条件的点数多于1个，则选择有最大观察角度的点。

请您帮助著名的评论员G. Berniev找到最佳的观察点。注意：评论员可以从1个体育场看到另一个体育场

输入格式

输入数据由三条线组成，每行描述一个球场的位置(x,y,r)。

每行具有格式x，y，r 其中（x,y）(-10^3<=x,y<=10^3)是体育场的中心的坐标，和 r （1 ≤r≤ 10^3）是其半径。输入数据中的所有数字都是整数，体育馆没有共同点，他们的中心不在同一行。

输出格式

在小数点后面打印五位数所需点的坐标。如果没有答案满足条件，程序不应该打印任何东西。输出数据应留空。

Translated by @liyifeng

## 题目描述

The Olympic Games in Bercouver are in full swing now. Here everyone has their own objectives: sportsmen compete for medals, and sport commentators compete for more convenient positions to give a running commentary. Today the main sport events take place at three round stadiums, and the commentator's objective is to choose the best point of observation, that is to say the point from where all the three stadiums can be observed. As all the sport competitions are of the same importance, the stadiums should be observed at the same angle. If the number of points meeting the conditions is more than one, the point with the maximum angle of observation is prefered.

Would you, please, help the famous Berland commentator G. Berniev to find the best point of observation. It should be noted, that the stadiums do not hide each other, the commentator can easily see one stadium through the other.

## 输入输出格式

### 输入格式

The input data consists of three lines, each of them describes the position of one stadium. The lines have the format $ x,y,r $ , where ( $ x,y $ ) are the coordinates of the stadium's center ( $ -10^{3}<=x,y<=10^{3} $ ), and $ r $ ( $ 1<=r<=10^{3} $ ) is its radius. All the numbers in the input data are integer, stadiums do not have common points, and their centers are not on the same line.

### 输出格式

Print the coordinates of the required point with five digits after the decimal point. If there is no answer meeting the conditions, the program shouldn't print anything. The output data should be left blank.

## 输入输出样例

### 输入样例 #1

```cpp
0 0 10
60 0 10
30 30 10

```
### 输出样例 #1

```cpp
30.00000 0.00000

```
