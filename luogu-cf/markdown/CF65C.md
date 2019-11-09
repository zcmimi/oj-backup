# Harry Potter and the Golden Snitch

## 题目描述

Brothers Fred and George Weasley once got into the sporting goods store and opened a box of Quidditch balls. After long and painful experiments they found out that the Golden Snitch is not enchanted at all. It is simply a programmed device. It always moves along the same trajectory, which is a polyline with vertices at the points $ (x_{0},y_{0},z_{0}) $ , $ (x_{1},y_{1},z_{1}) $ , ..., $ (x_{n},y_{n},z_{n}) $ . At the beginning of the game the snitch is positioned at the point $ (x_{0},y_{0},z_{0}) $ , and then moves along the polyline at the constant speed $ v_{s} $ . The twins have not yet found out how the snitch behaves then. Nevertheless, they hope that the retrieved information will help Harry Potter and his team in the upcoming match against Slytherin. Harry Potter learned that at the beginning the game he will be at the point $ (P_{x},P_{y},P_{z}) $ and his super fast Nimbus 2011 broom allows him to move at the constant speed $ v_{p} $ in any direction or remain idle. $ v_{p} $ is not less than the speed of the snitch $ v_{s} $ . Harry Potter, of course, wants to catch the snitch as soon as possible. Or, if catching the snitch while it is moving along the polyline is impossible, he wants to hurry the Weasley brothers with their experiments. Harry Potter catches the snitch at the time when they are at the same point. Help Harry.

## 输入输出格式

### 输入格式

The first line contains a single integer $ n $ ( $ 1<=n<=10000 $ ). The following $ n+1 $ lines contain the coordinates $ x_{i} $ , $ y_{i} $ , $ z_{i} $ , separated by single spaces. The coordinates of any two consecutive points do not coincide. The next line contains the velocities $ v_{p} $ and $ v_{s} $ , the last line contains $ P_{x} $ , $ P_{y} $ , $ P_{z} $ , separated by single spaces. All the numbers in the input are integers, their absolute value does not exceed $ 10^{4} $ . The speeds are strictly positive. It is guaranteed that $ v_{s}<=v_{p} $ .

### 输出格式

If Harry Potter can catch the snitch while it is moving along the polyline (including the end $ (x_{n},y_{n},z_{n}) $ ), print "YES" in the first line (without the quotes). Print in the second line $ t $ , which is the earliest moment of time, when Harry will be able to catch the snitch. On the third line print three numbers $ X $ , $ Y $ , $ Z $ , the coordinates of the point at which this happens. The absolute or relative error in the answer should not exceed $ 10^{-6} $ . If Harry is not able to catch the snitch during its moving along the described polyline, print "NO".

## 输入输出样例

### 输入样例 #1

```cpp
4
0 0 0
0 10 0
10 10 0
10 0 0
0 0 0
1 1
5 5 25

```
### 输出样例 #1

```cpp
YES
25.5000000000
10.0000000000 4.5000000000 0.0000000000

```
### 输入样例 #2

```cpp
4
0 0 0
0 10 0
10 10 0
10 0 0
0 0 0
1 1
5 5 50

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
1
1 2 3
4 5 6
20 10
1 2 3

```
### 输出样例 #3

```cpp
YES
0.0000000000
1.0000000000 2.0000000000 3.0000000000

```
