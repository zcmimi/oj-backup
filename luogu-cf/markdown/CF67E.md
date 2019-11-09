# Save the City!

## 题目描述

In the town of Aalam-Aara (meaning the Light of the Earth), previously there was no crime, no criminals but as the time progressed, sins started creeping into the hearts of once righteous people. Seeking solution to the problem, some of the elders found that as long as the corrupted part of population was kept away from the uncorrupted part, the crimes could be stopped. So, they are trying to set up a compound where they can keep the corrupted people. To ensure that the criminals don't escape the compound, a watchtower needs to be set up, so that they can be watched.

Since the people of Aalam-Aara aren't very rich, they met up with a merchant from some rich town who agreed to sell them a land-plot which has already a straight line fence $ AB $ along which a few points are set up where they can put up a watchtower. Your task is to help them find out the number of points on that fence where the tower can be put up, so that all the criminals can be watched from there. Only one watchtower can be set up. A criminal is watchable from the watchtower if the line of visibility from the watchtower to him doesn't cross the plot-edges at any point between him and the tower i.e. as shown in figure 1 below, points $ X $ , $ Y $ , $ C $ and $ A $ are visible from point $ B $ but the points $ E $ and $ D $ are not.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF67E/62f2b6c65fce5076b1e588c1b533c329d000610a.png) Figure 1 ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF67E/e45b0cefd67eb315842cdefdc7e62035f6004450.png) Figure 2 Assume that the land plot is in the shape of a polygon and coordinate axes have been setup such that the fence $ AB $ is parallel to $ x $ -axis and the points where the watchtower can be set up are the integer points on the line. For example, in given figure 2, watchtower can be setup on any of five integer points on $ AB $ i.e. $ (4,8) $ , $ (5,8) $ , $ (6,8) $ , $ (7,8) $ or $ (8,8) $ . You can assume that no three consecutive points are collinear and all the corner points other than $ A $ and $ B $ , lie towards same side of fence $ AB $ . The given polygon doesn't contain self-intersections.

## 输入输出格式

### 输入格式

The first line of the test case will consist of the number of vertices $ n $ ( $ 3<=n<=1000 $ ).

Next $ n $ lines will contain the coordinates of the vertices in the clockwise order of the polygon. On the $ i $ -th line are integers $ x_{i} $ and $ y_{i} $ ( $ 0<=x_{i},y_{i}<=10^{6} $ ) separated by a space.

The endpoints of the fence $ AB $ are the first two points, $ (x_{1},y_{1}) $ and $ (x_{2},y_{2}) $ .

### 输出格式

Output consists of a single line containing the number of points where the watchtower can be set up.

## 输入输出样例

### 输入样例 #1

```cpp
5
4 8
8 8
9 4
4 0
0 4

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
5
4 8
5 8
5 4
7 4
2 2

```
### 输出样例 #2

```cpp
0

```
## 说明

Figure 2 shows the first test case. All the points in the figure are watchable from any point on fence $ AB $ . Since, $ AB $ has $ 5 $ integer coordinates, so answer is $ 5 $ .

For case two, fence $ CD $ and $ DE $ are not completely visible, thus answer is $ 0 $ .

