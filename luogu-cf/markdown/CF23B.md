# Party

## 题意翻译

现在聚会上有n个人参加，然后依次按照规律离开，第一次是有0个朋友的人离开，第二次是有1个朋友的人离开，第三次是有2个朋友的人离开，之后依次是有3,4,5,6。。n-1个朋友的一次离开，求最后聚会会剩下多少人

输入:第一行一个整数t，表示数据组数，之后t行每行一个整数n

输出:对于每组数据，输出一个答案

1<=t<=100000

1<=n<=100000

Translated by 稀神探女

## 题目描述

 $ n $ people came to a party. Then those, who had no friends among people at the party, left. Then those, who had exactly 1 friend among those who stayed, left as well. Then those, who had exactly $ 2,3,...,n-1 $ friends among those who stayed by the moment of their leaving, did the same.

What is the maximum amount of people that could stay at the party in the end?

## 输入输出格式

### 输入格式

The first input line contains one number $ t $ — amount of tests ( $ 1<=t<=10^{5} $ ). Each of the following $ t $ lines contains one integer number $ n $ ( $ 1<=n<=10^{5} $ ).

### 输出格式

For each test output in a separate line one number — the maximum amount of people that could stay in the end.

## 输入输出样例

### 输入样例 #1

```cpp
1
3

```
### 输出样例 #1

```cpp
1

```
