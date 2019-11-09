# Little Frog

## 题意翻译

 从前一个名叫Vasya的小青蛙决定环游沼泽。沼泽里有n个位于同一行的土堆。相邻的土堆之间的距离是1米。Vasya想要使每一个土堆恰好只访问一次。为此，它制定了一个路线计划。Vasya可以选择任何土丘作为起点。同时，它想要连续两次跳跃的路径的长度不同。帮助Vasya青蛙,完成它的计划。

输入格式：一行，包含一个数字n(1<=n<=10^4),即土堆的数量。

输出格式：一行，输出n个整数p(1<=p<=n),这是小青蛙的路线计划。所有的p互不相同。所有相邻两个p应该互不相同。如果有多种解决方案,输出任何一个。

感谢@少谷 提供的翻译

## 题目描述

Once upon a time a little frog whose name was Vasya decided to travel around his home swamp. Overall there are $ n $ mounds on the swamp, located on one line. The distance between the neighboring mounds is one meter. Vasya wants to visit all the mounds in one day; besides, he wants to visit each one exactly once. For that he makes a route plan, to decide the order in which to jump on the mounds. Vasya can pick any mound as the first one. He thinks it boring to jump two times at the same distance. That's why he wants any two jumps on his route to have different lengths. Help Vasya the Frog and make the plan for him.

## 输入输出格式

### 输入格式

The single line contains a number $ n $ ( $ 1<=n<=10^{4} $ ) which is the number of mounds.

### 输出格式

Print $ n $ integers $ p_{i} $ ( $ 1<=p_{i}<=n $ ) which are the frog's route plan.

- All the $ p_{i} $ 's should be mutually different.

- All the $ |p_{i}–p_{i+1}| $ 's should be mutually different ( $ 1<=i<=n-1 $ ).

If there are several solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
1 2 
```


### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
1 3 2 
```


