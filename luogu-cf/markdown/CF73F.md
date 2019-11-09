# Plane of Tanks

## 题目描述

Vasya plays the Plane of Tanks. The tanks in this game keep trying to finish each other off. But your "Pedalny" is not like that... He just needs to drive in a straight line from point $ A $ to point B on the plane. Unfortunately, on the same plane are $ n $ enemy tanks. We shall regard all the tanks as points. At the initial moment of time Pedalny is at the point $ A $ . Enemy tanks would be happy to destroy it immediately, but initially their turrets are tuned in other directions. Specifically, for each tank we know the initial rotation of the turret $ a_{i} $ (the angle in radians relative to the $ OX $ axis in the counterclockwise direction) and the maximum speed of rotation of the turret $ w_{i} $ (radians per second). If at any point of time a tank turret will be aimed precisely at the tank Pedalny, then the enemy fires and it never misses. Pedalny can endure no more than $ k $ shots. Gun reloading takes very much time, so we can assume that every enemy will produce no more than one shot. Your task is to determine what minimum speed of $ v $ Pedalny must have to get to the point $ B $ . It is believed that Pedalny is able to instantly develop the speed of $ v $ , and the first $ k $ shots at him do not reduce the speed and do not change the coordinates of the tank.

## 输入输出格式

### 输入格式

The first line contains 4 numbers – the coordinates of points $ A $ and $ B $ (in meters), the points do not coincide. On the second line number $ n $ is given ( $ 1<=n<=10^{4} $ ). It is the number of enemy tanks. Each of the following $ n $ lines contain the coordinates of a corresponding tank $ x_{i},y_{i} $ and its parameters $ a_{i} $ and $ w_{i} $ ( $ 0<=a_{i}<=2π $ , $ 0<=w_{i}<=100 $ ). Numbers $ a_{i} $ and $ w_{i} $ contain at most 5 digits after the decimal point. All coordinates are integers and their absolute values do not exceed $ 10^{5} $ . Enemy tanks can rotate a turret in the clockwise as well as in the counterclockwise direction at the angular speed of not more than $ w_{i} $ . It is guaranteed that each of the enemy tanks will need at least $ 0.1 $ seconds to aim at any point of the segment $ AB $ and each of the enemy tanks is posistioned no closer than $ 0.1 $ meters to line $ AB $ . On the last line is given the number $ k $ ( $ 0<=k<=n $ ).

### 输出格式

Print a single number with absolute or relative error no more than $ 10^{-4} $ — the minimum required speed of Pedalny in meters per second.

## 输入输出样例

### 输入样例 #1

```cpp
0 0 10 0
1
5 -5 4.71238 1
0

```
### 输出样例 #1

```cpp
4.2441

```
### 输入样例 #2

```cpp
0 0 10 0
1
5 -5 4.71238 1
1

```
### 输出样例 #2

```cpp
0.0000

```
