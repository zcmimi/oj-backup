# DravDe saves the world

## 题目描述

How horrible! The empire of galactic chickens tries to conquer a beautiful city «Z», they have built a huge incubator that produces millions of chicken soldiers a day, and fenced it around. The huge incubator looks like a poligon on the the plane $ Oxy $ with $ n $ vertices. Naturally, DravDe can't keep still, he wants to destroy the chicken empire. For sure, he will start with the incubator.

DravDe is strictly outside the incubator's territory in point $ A(x_{a},y_{a}) $ , and wants to get inside and kill all the chickens working there. But it takes a lot of doing! The problem is that recently DravDe went roller skating and has broken both his legs. He will get to the incubator's territory in his jet airplane LEVAP-41.

LEVAP-41 flies at speed $ V(x_{v},y_{v},z_{v}) $ . DravDe can get on the plane in point $ A $ , fly for some time, and then air drop himself. DravDe is very heavy, that's why he falls vertically at speed $ F_{down} $ , but in each point of his free fall DravDe can open his parachute, and from that moment he starts to fall at the wind speed $ U(x_{u},y_{u},z_{u}) $ until he lands. Unfortunately, DravDe isn't good at mathematics. Would you help poor world's saviour find such an air dropping plan, that allows him to land on the incubator's territory? If the answer is not unique, DravDe wants to find the plan with the minimum time of his flight on the plane. If the answers are still multiple, he wants to find the one with the minimum time of his free fall before opening his parachute

## 输入输出格式

### 输入格式

The first line contains number $ n $ ( $ 3<=n<=10^{4} $ ) — amount of vertices of the fence. Then there follow $ n $ lines containing the coordinates of these vertices (two integer numbers $ x_{i},y_{i} $ ) in clockwise or counter-clockwise order. It's guaranteed, that the fence does not contain self-intersections.

The following four lines contain coordinates of point $ A(x_{a},y_{a}) $ , speeds $ V(x_{v},y_{v},z_{v}) $ , $ F_{down} $ and speed $ U(x_{u},y_{u},z_{u}) $ . All the input numbers are integer. All the coordinates don't exceed $ 10^{4} $ in absolute value. It's guaranteed, that $ z_{v}&gt;0 $ and $ F_{down},z_{u}&lt;0 $ , and point $ A $ is strictly outside the incubator's territory.

### 输出格式

In the first line output two numbers $ t_{1},t_{2} $ such, that if DravDe air drops at time $ t_{1} $ (counting from the beginning of the flight), he lands on the incubator's territory (landing on the border is regarder as landing on the territory). If DravDe doesn't open his parachute, the second number should be equal to the duration of DravDe's falling down. If it's impossible for DravDe to get to the incubator's territory, output -1 -1. If the answer is not unique, output the answer with the minimum $ t_{1} $ . If the answers are still multiple, output the answer with the minimum $ t_{2} $ . Your answer must have an absolute or relative error less than $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
4
0 0
1 0
1 1
0 1
0 -1
1 0 1
-1
0 1 -1

```
### 输出样例 #1

```cpp
1.00000000 0.00000000

```
### 输入样例 #2

```cpp
4
0 0
0 1
1 1
1 0
0 -1
-1 -1 1
-1
0 1 -1

```
### 输出样例 #2

```cpp
-1.00000000 -1.00000000

```
### 输入样例 #3

```cpp
4
0 0
1 0
1 1
0 1
0 -1
1 1 1
-1
1 1 -1

```
### 输出样例 #3

```cpp
0.50000000 0.00000000

```
