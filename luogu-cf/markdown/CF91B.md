# Queue

## 题意翻译

有n个人在队列中等待。假如某个人前面有一个人年龄比他小，那他就会不高兴；定义他的“不高兴度”为他前面留他最远的年龄比他小的人与他的距离，求每个人的不高兴度。 n<=10^5

## 题目描述

There are $ n $ walruses standing in a queue in an airport. They are numbered starting from the queue's tail: the $ 1 $ -st walrus stands at the end of the queue and the $ n $ -th walrus stands at the beginning of the queue. The $ i $ -th walrus has the age equal to $ a_{i} $ .

The $ i $ -th walrus becomes displeased if there's a younger walrus standing in front of him, that is, if exists such $ j $ ( $ ia_{j} $ . The displeasure of the $ i $ -th walrus is equal to the number of walruses between him and the furthest walrus ahead of him, which is younger than the $ i $ -th one. That is, the further that young walrus stands from him, the stronger the displeasure is.

The airport manager asked you to count for each of $ n $ walruses in the queue his displeasure.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 2<=n<=10^{5} $ ) — the number of walruses in the queue. The second line contains integers $ a_{i} $ ( $ 1<=a_{i}<=10^{9} $ ).

Note that some walruses can have the same age but for the displeasure to emerge the walrus that is closer to the head of the queue needs to be strictly younger than the other one.

### 输出格式

Print $ n $ numbers: if the $ i $ -th walrus is pleased with everything, print "-1" (without the quotes). Otherwise, print the $ i $ -th walrus's displeasure: the number of other walruses that stand between him and the furthest from him younger walrus.

## 输入输出样例

### 输入样例 #1

```cpp
6
10 8 5 3 50 45

```
### 输出样例 #1

```cpp
2 1 0 -1 0 -1 
```


### 输入样例 #2

```cpp
7
10 4 6 3 2 8 15

```
### 输出样例 #2

```cpp
4 2 1 0 -1 -1 -1 
```


### 输入样例 #3

```cpp
5
10 3 1 10 11

```
### 输出样例 #3

```cpp
1 0 -1 -1 -1 
```


