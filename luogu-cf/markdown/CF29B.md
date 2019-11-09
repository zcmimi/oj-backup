# Traffic Lights

## 题意翻译

 ## 题目描述

一辆汽车以$v$ 米每秒的速度由A点驶向B点。这个动作发生在X轴上。在距离A点$d$ 米的地方有一个红绿灯。从0时刻开始，在第一个$g$ 秒里绿灯是亮的，然后在接下来的$r$ 秒内红灯亮起，在接下来$g$ 秒，绿灯亮起，如此反复。

这辆车可以瞬间从$0$ 加速到$v$ ，反之亦然，也可以从$v$ 瞬间减速至$0$ 。车在绿灯时可以立刻通过。如果车在红灯亮起的那一刻到达红绿灯处，那么车不能够通过。但如果在绿灯亮起时到达，则可以通过。车从0时刻离开A点。

在不违反交通规则的前提下，车从A点移动到B点最少需要多长时间？

### 输入格式：

第一行包含整数$l,d,v,g,r$ （$1\leq l,d,v,g,r\leq1000,d<l$ ）— A与B间的距离（米），A与红绿灯的距离，车的速度，绿灯的持续时间和红灯的持续时间。 输出格式： 输出一个数 — 车从A到B所需要的最少时间。你的输出需要和标准输出相差不超过$10^{-6}$ Translated by Khassar 

## 题目描述

A car moves from point A to point B at speed $ v $ meters per second. The action takes place on the X-axis. At the distance $ d $ meters from A there are traffic lights. Starting from time 0, for the first $ g $ seconds the green light is on, then for the following $ r $ seconds the red light is on, then again the green light is on for the $ g $ seconds, and so on.

The car can be instantly accelerated from $ 0 $ to $ v $ and vice versa, can instantly slow down from the $ v $ to $ 0 $ . Consider that it passes the traffic lights at the green light instantly. If the car approaches the traffic lights at the moment when the red light has just turned on, it doesn't have time to pass it. But if it approaches the traffic lights at the moment when the green light has just turned on, it can move. The car leaves point A at the time 0.

What is the minimum time for the car to get from point A to point B without breaking the traffic rules?

## 输入输出格式

### 输入格式

The first line contains integers $ l $ , $ d $ , $ v $ , $ g $ , $ r $ ( $ 1<=l,d,v,g,r<=1000,d<l $ ) — the distance between A and B (in meters), the distance from A to the traffic lights, car's speed, the duration of green light and the duration of red light.

    输出格式

    

    Output a single number — the minimum time that the car needs to get from point A to point B. Your output must have relative or absolute error less than $ 10^{-6} $ .

    输入输出样例

                        输入样例 #1

            2 1 3 4 5


```
            输出样例 #1

            0.66666667


```
                    输入样例 #2

            5 4 3 1 1


```
            输出样例 #2

            2.33333333


```
            

    

    

<!--  -->

