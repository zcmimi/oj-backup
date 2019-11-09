# Serial Time!

## 题意翻译

#### 给出一个六面体分为k层，每层n行m列，每个小立方体有'.'(空）与'#'（障碍）的状态，第一层某个空的位置有一个水龙头，水流每次往六个方向流动。求最少时间水流能把立方体空的部分填满。

---by qihongzhou2

## 题目描述

The Cereal Guy's friend Serial Guy likes to watch soap operas. An episode is about to start, and he hasn't washed his plate yet. But he decided to at least put in under the tap to be filled with water. The plate can be represented by a parallelepiped $ k×n×m $ , that is, it has $ k $ layers (the first layer is the upper one), each of which is a rectangle $ n×m $ with empty squares ('.') and obstacles ('#'). The water can only be present in the empty squares. The tap is positioned above the square $ (x,y) $ of the first layer, it is guaranteed that this square is empty. Every minute a cubical unit of water falls into the plate. Find out in how many minutes the Serial Guy should unglue himself from the soap opera and turn the water off for it not to overfill the plate. That is, you should find the moment of time when the plate is absolutely full and is going to be overfilled in the next moment.

Note: the water fills all the area within reach (see sample 4). Water flows in each of the 6 directions, through faces of $ 1×1×1 $ cubes.

## 输入输出格式

### 输入格式

The first line contains three numbers $ k $ , $ n $ , $ m $ ( $ 1<=k,n,m<=10 $ ) which are the sizes of the plate. Then follow $ k $ rectangles consisting of $ n $ lines each containing $ m $ characters '.' or '#', which represents the "layers" of the plate in the order from the top to the bottom. The rectangles are separated by empty lines (see the samples). The last line contains $ x $ and $ y $ ( $ 1<=x<=n,1<=y<=m $ ) which are the tap's coordinates. $ x $ is the number of the line and $ y $ is the number of the column. Lines of each layer are numbered from left to right by the integers from $ 1 $ to $ n $ , columns of each layer are numbered from top to bottom by the integers from $ 1 $ to $ m $ .

### 输出格式

The answer should contain a single number, showing in how many minutes the plate will be filled.

## 输入输出样例

### 输入样例 #1

```cpp
1 1 1
.
1 1

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
2 1 1
.
#
1 1

```
### 输出样例 #2

```cpp
1

```
### 输入样例 #3

```cpp
2 2 2
.#
##
..
..
1 1

```
### 输出样例 #3

```cpp
5

```
### 输入样例 #4

```cpp
3 2 2
#.
##
#.
.#
..
..
1 2

```
### 输出样例 #4

```cpp
7

```
### 输入样例 #5

```cpp
3 3 3
.#.
###
##.
.##
###
##.
...
...
...
1 1

```
### 输出样例 #5

```cpp
13

```
