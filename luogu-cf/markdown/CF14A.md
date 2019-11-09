# Letter

## 题意翻译

给定一N\* M规模的矩阵，输出最小的包含所有"\* "的矩阵

1<=n,m

感谢 @ 稀神探女 提供的翻译。

## 题目描述

A boy Bob likes to draw. Not long ago he bought a rectangular graph (checked) sheet with $ n $ rows and $ m $ columns. Bob shaded some of the squares on the sheet. Having seen his masterpiece, he decided to share it with his elder brother, who lives in Flatland. Now Bob has to send his picture by post, but because of the world economic crisis and high oil prices, he wants to send his creation, but to spend as little money as possible. For each sent square of paper (no matter whether it is shaded or not) Bob has to pay 3.14 burles. Please, help Bob cut out of his masterpiece a rectangle of the minimum cost, that will contain all the shaded squares. The rectangle's sides should be parallel to the sheet's sides.

## 输入输出格式

### 输入格式

The first line of the input data contains numbers $ n $ and $ m $ ( $ 1<=n,m<=50 $ ), $ n $ — amount of lines, and $ m $ — amount of columns on Bob's sheet. The following $ n $ lines contain $ m $ characters each. Character «.» stands for a non-shaded square on the sheet, and «\*» — for a shaded square. It is guaranteed that Bob has shaded at least one square.

### 输出格式

Output the required rectangle of the minimum cost. Study the output data in the sample tests to understand the output format better.

## 输入输出样例

### 输入样例 #1

```cpp
6 7
.......
..***..
..*....
..***..
..*....
..***..

```
### 输出样例 #1

```cpp
***
*..
***
*..
***

```
### 输入样例 #2

```cpp
3 3
***
*.*
***

```
### 输出样例 #2

```cpp
***
*.*
***

```
