# Sequence of points

## 题意翻译

输入一个点 M0 和 n 个点 N0, N1, ... N(n-1) (1 <= n <= 1e5,且 n 是一个奇数)。其中 M1 和 M0 关于 N0 对称, M2 和 M1 关于 N1 对称 即 Mj 和 M(j-1) 关于 N(j-1) 对称。问 Mx 是多少 (1 <= x <= 1e18)

感谢 @zhaohuhao 提供的翻译。

## 题目描述

You are given the following points with integer coordinates on the plane: $ M_{0},A_{0},A_{1},...,A_{n-1} $ , where $ n $ is odd number. Now we define the following infinite sequence of points $ M_{i} $ : $ M_{i} $ is symmetric to $ M_{i-1} $ according ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF24C/66e749d7ac58d430b20796b255ca8fcf1e6de8d5.png) (for every natural number $ i $ ). Here point $ B $ is symmetric to $ A $ according $ M $ , if $ M $ is the center of the line segment $ AB $ . Given index $ j $ find the point $ M_{j} $ .

## 输入输出格式

### 输入格式

On the first line you will be given an integer $ n $ ( $ 1<=n<=10^{5} $ ), which will be odd, and $ j $ ( $ 1<=j<=10^{18} $ ), where $ j $ is the index of the desired point. The next line contains two space separated integers, the coordinates of $ M_{0} $ . After that $ n $ lines follow, where the $ i $ -th line contain the space separated integer coordinates of the point $ A_{i-1} $ . The absolute values of all input coordinates will not be greater then $ 1000 $ .

### 输出格式

On a single line output the coordinates of $ M_{j} $ , space separated.

## 输入输出样例

### 输入样例 #1

```cpp
3 4
0 0
1 1
2 3
-5 3

```
### 输出样例 #1

```cpp
14 0

```
### 输入样例 #2

```cpp
3 1
5 5
1000 1000
-1000 1000
3 100

```
### 输出样例 #2

```cpp
1995 1995

```
