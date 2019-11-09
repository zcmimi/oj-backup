# Round Table Knights

## 题目描述

There are $ n $ knights sitting at the Round Table at an equal distance from each other. Each of them is either in a good or in a bad mood.

Merlin, the wizard predicted to King Arthur that the next month will turn out to be particularly fortunate if the regular polygon can be found. On all vertices of the polygon knights in a good mood should be located. Otherwise, the next month will bring misfortunes.

A convex polygon is regular if all its sides have same length and all his angles are equal. In this problem we consider only regular polygons with at least 3 vertices, i. e. only nondegenerated.

On a picture below some examples of such polygons are present. Green points mean knights in a good mood. Red points mean ones in a bad mood.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF71C/05771d25f3570e788948383d5e55e90ca186c9da.png)King Arthur knows the knights' moods. Help him find out if the next month will be fortunate or not.

## 输入输出格式

### 输入格式

The first line contains number $ n $ , which is the number of knights at the round table ( $ 3<=n<=10^{5} $ ). The second line contains space-separated moods of all the $ n $ knights in the order of passing them around the table. "1" means that the knight is in a good mood an "0" means that he is in a bad mood.

### 输出格式

Print "YES" without the quotes if the following month will turn out to be lucky. Otherwise, print "NO".

## 输入输出样例

### 输入样例 #1

```cpp
3
1 1 1

```
### 输出样例 #1

```cpp
YES
```


### 输入样例 #2

```cpp
6
1 0 1 1 1 0

```
### 输出样例 #2

```cpp
YES
```


### 输入样例 #3

```cpp
6
1 0 0 1 0 1

```
### 输出样例 #3

```cpp
NO
```


