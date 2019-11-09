# Running Student

## 题意翻译

题目描述

一位可怜的学生再次遭遇不幸——他要考试迟到了。

【他所在的地区可以看成一个平面直角坐标系，】他跑到了位于(0,0)处的公交车站，上了一辆小巴。这辆小巴沿x轴向x轴正方向行驶。

这个学生知道这样一些事：

这辆小巴将停靠n个站点，其中第i个站点位于(xi,0)处。

每一个站点的坐标都不相同。

这辆小巴将以速度vb匀速行驶。

小巴停站的时间很短，可以忽略不计。

乘客只能在站点上下车。

乘客最晚必须在终点站下车。

考试地点在(xu,yu)处。

他可以用vs的速度匀速从一个车站跑向考试地点。

在平面直角坐标系内，两点间的距离可以用![](https://cdn.luogu.org/upload/vjudge_pic/CF9B/22fd88ba9a7f84161b680cf39a97d9a06bc287ba.png)表示

他不能在上车站下车。

这个可怜的学生想用尽可能短的时间到达考试地点。请你帮他选择一个可以达到他的目的的下车地点。如果有多个满足的下车地点，请输出离考试地点最近的一个。

输入输出格式

输入格式

输入的第一行包括三个整数：n,vb和vs。第二行包括n个升序排序的非负整数，第i个数表示第i个站点的横坐标。第1个数一定等于0。第三行包括两个整数，依次为考试地点的横坐标xu和纵坐标yu。

输出格式

输出一行，一个整数，他应该下车站的序号。

说明

数据范围

保证2<=n<=100,1<=vb,vs<=1000,0<=xi<=10^5,0<=|xu|,|yu|<=10^5

其他

就像你所知道的一样，学生通常是匆匆忙忙的，但小巴通常不是。所以如果你发现学生的速度比小巴快，不要吃惊。

## 题目描述

And again a misfortune fell on Poor Student. He is being late for an exam.

Having rushed to a bus stop that is in point $ (0,0) $ , he got on a minibus and they drove along a straight line, parallel to axis $ OX $ , in the direction of increasing $ x $ .

Poor Student knows the following:

- during one run the minibus makes $ n $ stops, the $ i $ -th stop is in point $ (x_{i},0) $

- coordinates of all the stops are different

- the minibus drives at a constant speed, equal to $ v_{b} $

- it can be assumed the passengers get on and off the minibus at a bus stop momentarily

- Student can get off the minibus only at a bus stop

- Student will have to get off the minibus at a terminal stop, if he does not get off earlier

- the University, where the exam will be held, is in point $ (x_{u},y_{u}) $

- Student can run from a bus stop to the University at a constant speed $ v_{s} $ as long as needed

- a distance between two points can be calculated according to the following formula: ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF9B/22fd88ba9a7f84161b680cf39a97d9a06bc287ba.png)

- Student is already on the minibus, so, he cannot get off at the first bus stop

Poor Student wants to get to the University as soon as possible. Help him to choose the bus stop, where he should get off. If such bus stops are multiple, choose the bus stop closest to the University.

## 输入输出格式

### 输入格式

The first line contains three integer numbers: $ 2<=n<=100 $ , $ 1<=v_{b},v_{s}<=1000 $ . The second line contains $ n $ non-negative integers in ascending order: coordinates $ x_{i} $ of the bus stop with index $ i $ . It is guaranteed that $ x_{1} $ equals to zero, and $ x_{n}<=10^{5} $ . The third line contains the coordinates of the University, integers $ x_{u} $ and $ y_{u} $ , not exceeding $ 10^{5} $ in absolute value.

### 输出格式

In the only line output the answer to the problem — index of the optimum bus stop.

## 输入输出样例

### 输入样例 #1

```cpp
4 5 2
0 2 4 6
4 1

```
### 输出样例 #1

```cpp
3
```


### 输入样例 #2

```cpp
2 1 1
0 100000
100000 100000

```
### 输出样例 #2

```cpp
2
```


## 说明

As you know, students are a special sort of people, and minibuses usually do not hurry. That's why you should not be surprised, if Student's speed is higher than the speed of the minibus.

