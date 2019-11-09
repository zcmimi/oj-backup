# Testing

## 题意翻译

# 题目描述

你参与了一种新武器的测试。测试需要一个 $n×m$ 的网格，每个小网格长宽为 $1×1$。网格中包含了 $k$ 个物品，每个物品都是矩形的，物品的四条边平行于网格的边缘。任意两个物品不会相互覆盖，也不会相互接触。

武器的工作原理是机密。你只知道新武器可以攻击任意一个在网格内且面积不为 $0$ 的矩形区域，目标区域的四条边平行于网格的四条边。该区域必须完全覆盖一些物品，而且其他物品不能和目标区域相交。

你应该攻击至少 $1$ 个，至多 $3$ 个物品。任意一个物品必须完全位于目标区域内（击中了），或者完全位于目标区域外（没击中）。

你需要输出攻击方法的总数。

# 输入输出格式

## 输入格式

第一行三个整数 $n$,$m$,$k$ ($1<=n,m<=1000;1<=k<=90$)

，分别表示网格的宽和高，物品的个数。

接下来 $n$ 行，每行 $m$ 个字符，`*`表示这个位置被物品占用，`.`表示这个位置是空的。

## 输出格式

一行，一个正整数，表示攻击方法的总数。

## 题目描述

You take part in the testing of new weapon. For the testing a polygon was created. The polygon is a rectangular field $ n×m $ in size, divided into unit squares $ 1×1 $ in size. The polygon contains $ k $ objects, each of which is a rectangle with sides, parallel to the polygon sides and entirely occupying several unit squares. The objects don't intersect and don't touch each other.

The principle according to which the weapon works is highly secret. You only know that one can use it to strike any rectangular area whose area is not equal to zero with sides, parallel to the sides of the polygon. The area must completely cover some of the unit squares into which the polygon is divided and it must not touch the other squares. Of course the area mustn't cross the polygon border. Your task is as follows: you should hit no less than one and no more than three rectangular objects. Each object must either lay completely inside the area (in that case it is considered to be hit), or lay completely outside the area.

Find the number of ways of hitting.

## 输入输出格式

### 输入格式

The first line has three integers $ n $ , $ m $ и $ k $ ( $ 1<=n,m<=1000 $ , $ 1<=k<=90 $ ) — the sizes of the polygon and the number of objects on it respectively. Next $ n $ lines contain $ m $ symbols each and describe the polygon. The symbol "\*" stands for a square occupied an object, whereas the symbol "." stands for an empty space. The symbols "\*" form exactly $ k $ rectangular connected areas that meet the requirements of the task.

### 输出格式

Output a single number — the number of different ways to hit a target.

## 输入输出样例

### 输入样例 #1

```cpp
3 3 3
*.*
...
*..

```
### 输出样例 #1

```cpp
21

```
### 输入样例 #2

```cpp
4 5 4
.*.**
...**
**...
...**

```
### 输出样例 #2

```cpp
38

```
### 输入样例 #3

```cpp
2 2 1
.*
..

```
### 输出样例 #3

```cpp
4

```
