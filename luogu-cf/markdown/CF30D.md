# King&#039;s Problem?

## 题意翻译

题目描述

每一位真正的国王在他的一生中必须做四件事：征服世界、举办CF世界总决赛，在射击馆赢得粉色熊猫，以及周游他的王国。

King Copa 已经完成了前三件事。现在他只需要周游自己的王国。这个王国是一个坐标平面，每一个城市都是平面上的一个点。其中有n个城市的坐标是(x1​,0),(x2,0),...,(xn​,0)，而还有一个城市的坐标是(xn+1​,yn+1​) 。

国王从城市k开始他的行程。你的任务是为国王找到这样一条路径，可以访问所有城市，并且在所有可能的路径中最短的一条。允许访问同一城市两次，并且国王可以在任何城市结束他的旅行。在任何一对城市之间都有一条长度为两对应点间直线距离的路径。

输入输出格式

输入格式：

第一行中有两个整数n和k(1<=n<=10^5,1<=k<=n+1),其中n表示在x轴上的城市数，k表示起始城市的编号。第二行有n+1个数，表示xi。第三行只有一个数，表示yn+1.所有坐标都是整数，且绝对值小于10^6。没有两个城市重合。

输出格式：

只有一个数，表示最短距离。若你的答案与标准答案的差小于10^-6，则答案判对。

## 题目描述

Every true king during his life must conquer the world, hold the Codeforces world finals, win pink panda in the shooting gallery and travel all over his kingdom.

King Copa has already done the first three things. Now he just needs to travel all over the kingdom. The kingdom is an infinite plane with Cartesian coordinate system on it. Every city is a point on this plane. There are $ n $ cities in the kingdom at points with coordinates $ (x_{1},0),(x_{2},0),...,(x_{n},0) $ , and there is one city at point $ (x_{n+1},y_{n+1}) $ .

King starts his journey in the city number $ k $ . Your task is to find such route for the king, which visits all cities (in any order) and has minimum possible length. It is allowed to visit a city twice. The king can end his journey in any city. Between any pair of cities there is a direct road with length equal to the distance between the corresponding points. No two cities may be located at the same point.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ k $ ( $ 1<=n<=10^{5},1<=k<=n+1 $ ) — amount of cities and index of the starting city. The second line contains $ n+1 $ numbers $ x_{i} $ . The third line contains $ y_{n+1} $ . All coordinates are integers and do not exceed $ 10^{6} $ by absolute value. No two cities coincide.

### 输出格式

Output the minimum possible length of the journey. Your answer must have relative or absolute error less than $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
3 1
0 1 2 1
1

```
### 输出样例 #1

```cpp
3.41421356237309490000
```


### 输入样例 #2

```cpp
3 1
1 0 2 1
1

```
### 输出样例 #2

```cpp
3.82842712474619030000
```


### 输入样例 #3

```cpp
4 5
0 5 -1 -5 2
3

```
### 输出样例 #3

```cpp
14.24264068711928400000
```


