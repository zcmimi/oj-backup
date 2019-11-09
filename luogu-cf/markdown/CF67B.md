# Restoration of the Permutation

## 题目描述

Let $ A={a_{1},a_{2},...,a_{n}} $ be any permutation of the first $ n $ natural numbers $ {1,2,...,n} $ . You are given a positive integer $ k $ and another sequence $ B={b_{1},b_{2},...,b_{n}} $ , where $ b_{i} $ is the number of elements $ a_{j} $ in $ A $ to the left of the element $ a_{t}=i $ such that $ a_{j}>=(i+k) $ .

For example, if $ n=5 $ , a possible $ A $ is $ {5,1,4,2,3} $ . For $ k=2 $ , $ B $ is given by $ {1,2,1,0,0} $ . But if $ k=3 $ , then $ B={1,1,0,0,0} $ .

For two sequences $ X={x_{1},x_{2},...,x_{n}} $ and $ Y={y_{1},y_{2},...,y_{n}} $ , let $ i $ -th elements be the first elements such that $ x_{i}≠y_{i} $ . If $ x_{i}&lt;y_{i} $ , then $ X $ is lexicographically smaller than $ Y $ , while if $ x_{i}&gt;y_{i} $ , then $ X $ is lexicographically greater than $ Y $ .

Given $ n $ , $ k $ and $ B $ , you need to determine the lexicographically smallest $ A $ .

## 输入输出格式

### 输入格式

The first line contains two space separated integers $ n $ and $ k $ ( $ 1<=n<=1000 $ , $ 1<=k<=n $ ). On the second line are $ n $ integers specifying the values of $ B={b_{1},b_{2},...,b_{n}} $ .

### 输出格式

Print on a single line $ n $ integers of $ A={a_{1},a_{2},...,a_{n}} $ such that $ A $ is lexicographically minimal. It is guaranteed that the solution exists.

## 输入输出样例

### 输入样例 #1

```cpp
5 2
1 2 1 0 0

```
### 输出样例 #1

```cpp
4 1 5 2 3 
```


### 输入样例 #2

```cpp
4 2
1 0 0 0

```
### 输出样例 #2

```cpp
2 3 1 4 
```


