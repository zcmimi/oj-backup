# Cableway

## 题意翻译

题目描述

一群大学生想去一座山的山顶野餐。因此他们决定使用索道。 索道由一些缆车组成，缆车吊在一些缆车站之间的缆线上。缆线在第一个和最后一个车站上循环滚动（第一个在山脚下，最后一个在山顶）。

随着线缆的滚动，挂在上面的缆车也跟着移动。 缆车的数量可以被3整除，并被涂成三种颜色：红色、绿色和蓝色。红色缆车后面跟着绿色缆车，绿色缆车后面跟着蓝色缆车，蓝色缆车后面跟着红色缆车。每辆缆车不可以载超过两人。缆车以一分钟的周期到达，每辆缆车到达山顶需要30分钟。

所有学生分为三组：他们中的r个只想坐红车，g个只偏好绿车，b个只想坐蓝车。每个学生都不会乘坐漆成他不喜欢的颜色的蓝车。 第一个到达的缆车是红色的。确定所有学生到达山顶的最短时间。

输入格式

第一行包括三个整数，r、g和b（0≤r,g,b≤100）。保证r+g+b>0，意味着每组至少有一名学生。

输出格式

输出一个数字：整组学生登上山顶的最短时间。

说明 我们来看第一个样例。 时间为0时，一辆红色缆车到达车站，r组的一个学生上车，并在时间为30时到达山顶。 时间为1时，一辆绿色缆车到达车站，g组的2个学生上车，他们在时间为31时达到山顶。 时间为2时，一辆蓝色缆车到达车站，b组的2个学生上车，他们在时间为32时到达山顶。 时间为3时，一辆红色缆车到达车站，但留在车站的唯一一个学生不喜欢红色，缆车空载到山顶。 时间为4时，一辆绿色缆车到达车站，g组的一个学生上车，并在时间为34时到达山顶。 这样有学生都登上了山顶，最终花了34分钟

感谢 @cyp0633 提供的翻译。

## 题目描述

A group of university students wants to get to the top of a mountain to have a picnic there. For that they decided to use a cableway.

A cableway is represented by some cablecars, hanged onto some cable stations by a cable. A cable is scrolled cyclically between the first and the last cable stations (the first of them is located at the bottom of the mountain and the last one is located at the top). As the cable moves, the cablecar attached to it move as well.

The number of cablecars is divisible by three and they are painted three colors: red, green and blue, in such manner that after each red cablecar goes a green one, after each green cablecar goes a blue one and after each blue cablecar goes a red one. Each cablecar can transport no more than two people, the cablecars arrive with the periodicity of one minute (i. e. every minute) and it takes exactly $ 30 $ minutes for a cablecar to get to the top.

All students are divided into three groups: $ r $ of them like to ascend only in the red cablecars, $ g $ of them prefer only the green ones and $ b $ of them prefer only the blue ones. A student never gets on a cablecar painted a color that he doesn't like,

The first cablecar to arrive (at the moment of time $ 0 $ ) is painted red. Determine the least time it will take all students to ascend to the mountain top.

## 输入输出格式

### 输入格式

The first line contains three integers $ r $ , $ g $ and $ b $ ( $ 0<=r,g,b0 $ , it means that the group consists of at least one student.

### 输出格式

Print a single number — the minimal time the students need for the whole group to ascend to the top of the mountain.

## 输入输出样例

### 输入样例 #1

```cpp
1 3 2

```
### 输出样例 #1

```cpp
34
```


### 输入样例 #2

```cpp
3 2 1

```
### 输出样例 #2

```cpp
33
```


## 说明

Let's analyze the first sample.

At the moment of time $ 0 $ a red cablecar comes and one student from the $ r $ group get on it and ascends to the top at the moment of time $ 30 $ .

At the moment of time $ 1 $ a green cablecar arrives and two students from the $ g $ group get on it; they get to the top at the moment of time $ 31 $ .

At the moment of time $ 2 $ comes the blue cablecar and two students from the $ b $ group get on it. They ascend to the top at the moment of time $ 32 $ .

At the moment of time $ 3 $ a red cablecar arrives but the only student who is left doesn't like red and the cablecar leaves empty.

At the moment of time $ 4 $ a green cablecar arrives and one student from the $ g $ group gets on it. He ascends to top at the moment of time $ 34 $ .

Thus, all the students are on the top, overall the ascension took exactly $ 34 $ minutes.

