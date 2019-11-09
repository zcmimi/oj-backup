# Wormhouse

## 题目描述

Arnie the Worm has finished eating an apple house yet again and decided to move. He made up his mind on the plan, the way the rooms are located and how they are joined by corridors. He numbered all the rooms from $ 1 $ to $ n $ . All the corridors are bidirectional.

Arnie wants the new house to look just like the previous one. That is, it should have exactly $ n $ rooms and, if a corridor from room $ i $ to room $ j $ existed in the old house, it should be built in the new one.

We know that during the house constructing process Arnie starts to eat an apple starting from some room and only stops when he eats his way through all the corridors and returns to the starting room. It is also known that Arnie eats without stopping. That is, until Arnie finishes constructing the house, he is busy every moment of his time gnawing a new corridor. Arnie doesn't move along the already built corridors.

However, gnawing out corridors in one and the same order any time you change a house is a very difficult activity. That's why Arnie, knowing the order in which the corridors were located in the previous house, wants to gnaw corridors in another order. It is represented as a list of rooms in the order in which they should be visited. The new list should be lexicographically smallest, but it also should be strictly lexicographically greater than the previous one. Help the worm.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 3<=n<=100,3<=m<=2000 $ ). It is the number of rooms and corridors in Arnie's house correspondingly. The next line contains $ m+1 $ positive integers that do not exceed $ n $ . They are the description of Arnie's old path represented as a list of rooms he visited during the gnawing. It is guaranteed that the last number in the list coincides with the first one.

The first room described in the list is the main entrance, that's why Arnie should begin gnawing from it.

You may assume that there is no room which is connected to itself and there is at most one corridor between any pair of rooms. However, it is possible to find some isolated rooms which are disconnected from others.

### 输出格式

Print $ m+1 $ positive integers that do not exceed $ n $ . Those numbers are the description of the new path, according to which Arnie should gnaw out his new house. If it is impossible to find new path you should print out No solution. The first number in your answer should be equal to the last one. Also it should be equal to the main entrance.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
1 2 3 1

```
### 输出样例 #1

```cpp
1 3 2 1 
```


### 输入样例 #2

```cpp
3 3
1 3 2 1

```
### 输出样例 #2

```cpp
No solution
```


