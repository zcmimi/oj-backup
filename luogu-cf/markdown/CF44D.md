# Hyperdrive

## 题意翻译

## 题目描述

在遥远的星系中，有n个有人居住的行星，编号从1到n。它们彼此之间的距离很远，它们之间的通信非常困难。

直到在1号行星发明了一个超级驱动器。1号星球上建造了n-1艘宇宙飞船，并将这些船只送往其他星球以通知这一革命性的发明。

虽然这有点矛盾，但超空间被表示为简单的三维欧几里德空间。行星可以被认为是其中的固定点，并且没有两个点重合并且没有三个点位于同一直线上。在两个行星之间具有超驱动的船的沿着恒定速度的直线航行，这对于所有船只是相同的。这就是为什么超空间中的距离是用超级年中测量的（一艘带有超级驱动的船只在s年中走了s超级年的距离）。

当船到达一个星球时，行星的居民将它拆开，建造n-2艘与超级驱动器相同的船并将它们发送到其他n-2个行星（除了船到达的行星之外）。

与他们从一个行星移动到另一个行星的时间相比，制造新船的时间非常短，可以忽略不计。新船与最初发送的船完全相同：它们沿着直线轨迹以相同的恒定速度移动，并且在到达行星时执行相同的任务，即被拆卸以建造新的n-2船并将它们发送到除了船到达的行星以外的所有行星。因此，围绕银河系传播重要新闻的过程仍在继续。

然而，超级驱动器的创造者急忙传播关于他们的发明的消息，以至于他们没有完全研究当两艘船在超空间碰撞时发生的事情。如果两艘移动的船只在同一个点上，它们会引发巨大的力量爆炸，导致银河系的毁灭！

你的任务是找到从第一艘飞船发射的那一刻起银河系将继续存在的时间。

感谢@[sunson](https://www.luogu.org/space/show?uid=148016)提供的翻译

## 输入输出格式

### 输入格式：

第一行包含一个数字n（3 <= n <= 5000--星系中的行星数。

接下来的n行包含n个行星的坐标x,y,z

### 输出格式：

一个整数

从第一艘飞船发射的那一刻起银河系将继续存在的时间（精确到10e-6）。

## 题目描述

In a far away galaxy there are $ n $ inhabited planets, numbered with numbers from $ 1 $ to $ n $ . They are located at large distances from each other, that's why the communication between them was very difficult until on the planet number $ 1 $ a hyperdrive was invented. As soon as this significant event took place, $ n-1 $ spaceships were built on the planet number $ 1 $ , and those ships were sent to other planets to inform about the revolutionary invention.

Paradoxical thought it may be, but the hyperspace is represented as simple three-dimensional Euclidean space. The inhabited planets may be considered fixed points in it, and no two points coincide and no three points lie on the same straight line. The movement of a ship with a hyperdrive between two planets is performed along a straight line at the constant speed, the same for all the ships. That's why the distance in the hyperspace are measured in hyperyears (a ship with a hyperdrive covers a distance of $ s $ hyperyears in $ s $ years).

When the ship reaches an inhabited planet, the inhabitants of the planet dissemble it, make $ n-2 $ identical to it ships with a hyperdrive and send them to other $ n-2 $ planets (except for the one from which the ship arrived). The time to make a new ship compared to the time in which they move from one planet to another is so small that it can be disregarded. New ships are absolutely identical to the ones sent initially: they move at the same constant speed along a straight line trajectory and, having reached a planet, perform the very same mission, i.e. are dissembled to build new $ n-2 $ ships and send them to all the planets except for the one from which the ship arrived. Thus, the process of spreading the important news around the galaxy continues.

However the hyperdrive creators hurried to spread the news about their invention so much that they didn't study completely what goes on when two ships collide in the hyperspace. If two moving ships find themselves at one point, they provoke an explosion of colossal power, leading to the destruction of the galaxy!

Your task is to find the time the galaxy will continue to exist from the moment of the ships' launch from the first planet.

## 输入输出格式

### 输入格式

The first line contains a number $ n $ ( $ 3<=n<=5000 $ ) — the number of inhabited planets in the galaxy. The next $ n $ lines contain integer coordinates of the planets in format " $ x_{i} $ $ y_{i} $ $ z_{i} $ " ( $ -10^{4}<=x_{i},y_{i},z_{i}<=10^{4} $ ).

### 输出格式

Print the single number — the solution to the task with an absolute or relative error not exceeding $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
4
0 0 0
0 0 1
0 1 0
1 0 0

```
### 输出样例 #1

```cpp
1.7071067812

```
