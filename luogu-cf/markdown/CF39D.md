# Cubical Planet

## 题意翻译

银河系中没有你找不到的东西！有一颗形状为立方体的的行星正在绕着一颗形状为二十面体的恒星运转。现在我们让这颗行星的两个在同一条体对角线上的顶点置于(0,0,0)和(1,1,1)上。有两只苍蝇住在行星上。这俩家伙分别坐在这颗行星的两个不同的顶点上。

问题是：你需要确定，这俩可怜虫会不会见面。前提是：如果他俩所在的顶点位于这颗行星的同一个面上（六个面），他们就算见到彼此了。

输入格式：

第一行包括三个用空格分开的整数，表示第一只苍蝇的坐标。

第二行也包括三个用空格分开的整数，表示第二只苍蝇所在的坐标。

输出格式：

如果这两只可怜虫能见到彼此，则输出：“YES”。

否则，输出“NO”。

（不带引号）

## 题目描述

You can find anything whatsoever in our Galaxy! A cubical planet goes round an icosahedral star. Let us introduce a system of axes so that the edges of the cubical planet are parallel to the coordinate axes and two opposite vertices lay in the points $ (0,0,0) $ and $ (1,1,1) $ . Two flies live on the planet. At the moment they are sitting on two different vertices of the cubical planet. Your task is to determine whether they see each other or not. The flies see each other when the vertices they occupy lie on the same face of the cube.

## 输入输出格式

### 输入格式

The first line contains three space-separated integers ( $ 0 $ or $ 1 $ ) — the coordinates of the first fly, the second line analogously contains the coordinates of the second fly.

### 输出格式

Output "YES" (without quotes) if the flies see each other. Otherwise, output "NO".

## 输入输出样例

### 输入样例 #1

```cpp
0 0 0
0 1 0

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
1 1 0
0 1 0

```
### 输出样例 #2

```cpp
YES

```
### 输入样例 #3

```cpp
0 0 0
1 1 1

```
### 输出样例 #3

```cpp
NO

```
