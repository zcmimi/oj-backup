# Map

## 题意翻译

题目描述：小P要在某个n*m规模的矩阵上建大小为a*b的房子，已知这个矩阵每一点上的数值h[i][j]代表开始时地面的高度。若建造a*b房子的地面不一致，则要把选取的a*b大的矩阵中所有地面都挖低使得和其中一块最低的地面高度一样，花费是挖的高度和。

小P会重复如下的步骤直至无法再建造更多的房子：

1.找到n*m矩阵中建造房子花费最少的a*b矩阵，优先选择左上角的矩阵。

2.输出左上角的位置，并输出在这里建房子的花费

3.已经建过房子的地面不能再建房子

输入:第一行四个整数n,m,a,b

之后n行每行m个整数，表示地面的初始高度h[i][j]

输出:第一行一颗整数k，表示能建造的房子个数

之后k行如题面所示

1<=a<=n<=1000 1<=b<=m<=1000

h[i][j]<=10^9

Translated by 稀神探女

## 题目描述

There is an area map that is a rectangular matrix $ n×m $ , each cell of the matrix contains the average height of a corresponding area part. Peter works for a company that has to build several cities within this area, each of the cities will occupy a rectangle $ a×b $ cells on the map. To start construction works in a particular place Peter needs to remove excess ground from the construction site where a new city will be built. To do so he chooses a cell of the minimum height within this site, and removes excess ground from other cells of the site down to this minimum level. Let's consider that to lower the ground level from $ h_{2} $ to $ h_{1} $ ( $ h_{1}<=h_{2} $ ) they need to remove $ h_{2}-h_{1} $ ground units.

Let's call a site's position optimal, if the amount of the ground removed from this site is minimal compared to other possible positions. Peter constructs cities according to the following algorithm: from all the optimum site's positions he chooses the uppermost one. If this position is not unique, he chooses the leftmost one. Then he builds a city on this site. Peter repeats this process untill he can build at least one more city. For sure, he cannot carry out construction works on the occupied cells. Would you, please, help Peter place cities according to the algorithm?

## 输入输出格式

### 输入格式

The first line contains four space-separated integers: map sizes $ n $ , $ m $ and city sizes $ a $ , $ b $ ( $ 1<=a<=n<=1000 $ , $ 1<=b<=m<=1000 $ ). Then there follow $ n $ lines, each contains $ m $ non-negative space-separated numbers, describing the height matrix. Each number doesn't exceed $ 10^{9} $ .

### 输出格式

In the first line output $ k $ — the amount of constructed cities. In each of the following $ k $ lines output 3 space-separated numbers — the row number and the column number of the upper-left corner of a subsequent construction site, and the amount of the ground to remove from it. Output the sites in the order of their building up.

## 输入输出样例

### 输入样例 #1

```cpp
2 2 1 2
1 2
3 5

```
### 输出样例 #1

```cpp
2
1 1 1
2 1 2

```
### 输入样例 #2

```cpp
4 4 2 2
1 5 3 4
2 7 6 1
1 1 2 2
2 2 1 2

```
### 输出样例 #2

```cpp
3
3 1 2
3 3 3
1 2 9

```
