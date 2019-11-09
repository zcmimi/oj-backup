# Queue

## 题意翻译

【问题描述】 有n个人依次排队，每个人都有两个属性值 a[i] 、c[i] ，a[i]是重要性值，数值越大越重要，c[i]是良心值。假如前i-1人已经排好队后，第i个人来排队，初始时他在队尾，如果他的a[i]大于排在他前面那位的重要性值，那么两人可以交换位置，每次交换良心值减1，直到他前面的人的重要性值大于a[i]或者良心值为0的时候（即最多交换c[i]次），问最终n个人的队列次序。

【输入描述】 第一行一个整数n，表示队列人数。 接下来n行，每行两个整数ai,ci，表示第i个人的重要值和良心值。所有ai是不同的。

【输出描述】 输出队列最终的结果

感谢@包航 提供的翻译

## 题目描述

On a cold winter evening our hero Vasya stood in a railway queue to buy a ticket for Codeforces championship final. As it usually happens, the cashier said he was going to be away for 5 minutes and left for an hour. Then Vasya, not to get bored, started to analyze such a mechanism as a queue. The findings astonished Vasya.

Every man is characterized by two numbers: $ a_{i} $ , which is the importance of his current task (the greater the number is, the more important the task is) and number $ c_{i} $ , which is a picture of his conscience. Numbers $ a_{i} $ form the permutation of numbers from $ 1 $ to $ n $ .

Let the queue consist of $ n-1 $ people at the moment. Let's look at the way the person who came number $ n $ behaves. First, he stands at the end of the queue and the does the following: if importance of the task $ a_{i} $ of the man in front of him is less than $ a_{n} $ , they swap their places (it looks like this: the man number $ n $ asks the one before him: "Erm... Excuse me please but it's very important for me... could you please let me move up the queue?"), then he again poses the question to the man in front of him and so on. But in case when $ a_{i} $ is greater than $ a_{n} $ , moving up the queue stops. However, the man number $ n $ can perform the operation no more than $ c_{n} $ times.

In our task let us suppose that by the moment when the man number $ n $ joins the queue, the process of swaps between $ n-1 $ will have stopped. If the swap is possible it necessarily takes place.

Your task is to help Vasya model the described process and find the order in which the people will stand in queue when all the swaps stops.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ which is the number of people who has joined the queue ( $ 1<=n<=10^{5} $ ). In the next $ n $ lines descriptions of the people are given in order of their coming — space-separated integers $ a_{i} $ and $ c_{i} $ ( $ 1<=a_{i}<=n $ , $ 0<=c_{i}<=n $ ). Every description is located on s single line. All the $ a_{i} $ 's are different.

### 输出格式

Output the permutation of numbers from $ 1 $ to $ n $ , which signifies the queue formed according to the above described rules, starting from the beginning to the end. In this succession the $ i $ -th number stands for the number of a person who will stand in line on the place number $ i $ after the swaps ends. People are numbered starting with $ 1 $ in the order in which they were given in the input. Separate numbers by a space.

## 输入输出样例

### 输入样例 #1

```cpp
2
1 0
2 1

```
### 输出样例 #1

```cpp
2 1 
```


### 输入样例 #2

```cpp
3
1 3
2 3
3 3

```
### 输出样例 #2

```cpp
3 2 1 
```


### 输入样例 #3

```cpp
5
2 3
1 4
4 3
3 1
5 2

```
### 输出样例 #3

```cpp
3 1 5 4 2 
```


