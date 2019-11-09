# General Mobilization

## 题目描述

The Berland Kingdom is a set of $ n $ cities connected with each other with $ n-1 $ railways. Each road connects exactly two different cities. The capital is located in city $ 1 $ . For each city there is a way to get from there to the capital by rail.

In the $ i $ -th city there is a soldier division number $ i $ , each division is characterized by a number of $ a_{i} $ . It represents the priority, the smaller the number, the higher the priority of this division. All values of $ a_{i} $ are different.

One day the Berland King Berl Great declared a general mobilization, and for that, each division should arrive in the capital. Every day from every city except the capital a train departs. So there are exactly $ n-1 $ departing trains each day. Each train moves toward the capital and finishes movement on the opposite endpoint of the railway on the next day. It has some finite capacity of $ c_{j} $ , expressed in the maximum number of divisions, which this train can transport in one go. Each train moves in the direction of reducing the distance to the capital. So each train passes exactly one railway moving from a city to the neighboring (where it stops) toward the capital.

In the first place among the divisions that are in the city, division with the smallest number of $ a_{i} $ get on the train, then with the next smallest and so on, until either the train is full or all the divisions are be loaded. So it is possible for a division to stay in a city for a several days.

The duration of train's progress from one city to another is always equal to $ 1 $ day. All divisions start moving at the same time and end up in the capital, from where they don't go anywhere else any more. Each division moves along a simple path from its city to the capital, regardless of how much time this journey will take.

Your goal is to find for each division, in how many days it will arrive to the capital of Berland. The countdown begins from day $ 0 $ .

## 输入输出格式

### 输入格式

The first line contains the single integer $ n $ ( $ 1<=n<=5000 $ ). It is the number of cities in Berland. The second line contains $ n $ space-separated integers $ a_{1},a_{2},...,a_{n} $ , where $ a_{i} $ represents the priority of the division, located in the city number $ i $ . All numbers $ a_{1},a_{2},...,a_{n} $ are different ( $ 1<=a_{i}<=10^{9} $ ). Then $ n-1 $ lines contain the descriptions of the railway roads. Each description consists of three integers $ v_{j},u_{j},c_{j} $ , where $ v_{j} $ , $ u_{j} $ are number of cities connected by the $ j $ -th rail, and $ c_{j} $ stands for the maximum capacity of a train riding on this road ( $ 1<=v_{j},u_{j}<=n,v_{j}≠u_{j} $ , $ 1<=c_{j}<=n $ ).

### 输出格式

Print sequence $ t_{1},t_{2},...,t_{n} $ , where $ t_{i} $ stands for the number of days it takes for the division of city $ i $ to arrive to the capital. Separate numbers with spaces.

## 输入输出样例

### 输入样例 #1

```cpp
4
40 10 30 20
1 2 1
2 3 1
4 2 1

```
### 输出样例 #1

```cpp
0 1 3 2 
```


### 输入样例 #2

```cpp
5
5 4 3 2 1
1 2 1
2 3 1
2 4 1
4 5 1

```
### 输出样例 #2

```cpp
0 1 4 2 3 
```


