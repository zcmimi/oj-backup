# Bombing

## 题意翻译

# 标题：轰炸

时限2s，空限256M

## 题目：

现在有n个建筑，知道建筑的坐标。现要求用特定的导弹摧毁k个。导弹固定降落在[x0,y0]点，但是有一个估计影响半径r（>=0）：在[x0,y0]的建筑将被摧毁，其余建筑也会在以下公式上受到波及：

![](http://codeforces.com/predownloaded/c9/75/c975e17ceaa1aa7adf61fdd561d71b5f7cb03929.png)

现要求计算出最小的r，使得能摧毁k个目标。

（注：如果r=0，那么只会摧毁导弹降落点的建筑，其余没有建筑会受到波及。此题中e=2.7182818284590452353602874713527。）

## 输入：

第一行：一个整数n，n

第二行：两个整数，分别表示k（1<k<=n）和未完成任务的最大允许概率（在1和999之间）。 第三行：两个整数，x0,y0。 之后n行：xi和yi，表示建筑坐标，保证绝对值不超过1000。 输出：一行一个实数，r的值，要求与答案相差不超过1e-6。

## 题目描述

The commanding officers decided to drop a nuclear bomb on the enemy's forces. You are ordered to determine the power of the warhead that needs to be used.

The enemy has $ N $ strategically important objects. Their positions are known due to the intelligence service. The aim of the strike is to deactivate at least $ K $ important objects of the enemy. The bombing impact point is already determined and has coordinates of $ [X_{0};\ Y_{0}] $ .

The nuclear warhead is marked by the estimated impact radius $ R>=0 $ . All the buildings that are located closer than $ R $ to the bombing epicentre will be destroyed. All the buildings that are located further than $ R $ from the epicentre, can also be deactivated with some degree of probability. Let's assume that $ D $ is the distance between a building and the epicentre. This building's deactivation probability $ P(D,R) $ is calculated according to the following formula:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF50D/711e1c419c06d4e6b9f16e86aeb94f1d25925635.png) We should regard ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF50D/5966d57c740e5c247c71ce7e978aac36c0d9200d.png) as $ e^{a} $ , where $ e≈2.7182818284590452353602874713527 $ If the estimated impact radius of the warhead is equal to zero, then all the buildings located in the impact point will be completely demolished and all the rest of important objects will not be damaged.

The commanding officers want the probability of failing the task to be no more than $ ε $ . Nuclear warheads are too expensive a luxury, that's why you have to minimise the estimated impact radius of the warhead.

## 输入输出格式

### 输入格式

The first line contains an integer $ N $ which represents the number of the enemy's objects ( $ 1<=N<=100 $ ). The second line contains two integers: $ K $ is the required number of deactivated objects, and $ ε $ is the maximally permitted probability of not completing the task, given in per mils ( $ 1<=K<=N $ , $ 1<=ε<=999 $ ). The third line contains $ X_{0} $ and $ Y_{0} $ which are the coordinates of the strike impact point. The next $ N $ lines contain two numbers $ X_{i} $ and $ Y_{i} $ each which are the coordinates of every strategically important object. All the coordinates are integer, their absolute values do not exceed $ 1000 $ .

Let us remind you that there are a thousand per mils in unity (number one).

There can be several objects in one point.

### 输出格式

Print the sought estimated impact radius of the warhead. The absolute or relative measure of the inaccuracy of your answer should not exceed $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
1
1 500
5 5
1 2

```
### 输出样例 #1

```cpp
3.84257761518762740

```
### 输入样例 #2

```cpp
5
3 100
0 0
3 4
60 70
100 100
10 10
5 12

```
### 输出样例 #2

```cpp
13.45126176453737600

```
