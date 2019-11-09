# Martian Architecture

## 题意翻译

## CF57B 火星文明的建筑

### 题目描述

一只名为克里斯的兔子发现了远古时期的火星文明存在过的证据。他作为一个勇敢的天文学家通过一个小型天文望远镜看到了火星上的古文明制造的宏伟建筑——“通往烈阳之路”。这个建筑的底座是一些相同大小的方形石块。底座将建筑的“路”（通往烈阳之**路**）定位成了一个个小格子，那样这些方形石块就可以在这些小格子中被定义坐标了。

在火星文明中，如果你想当整个部族的首领，那个火星人就需要建造一条“通往烈阳之路”，也就是通过之前所说的那些方形小石块来造一个楼梯。这个楼梯可以通过它最下一节的阶梯和最上一节的阶梯来进行坐标的定义。每上一节楼梯，那节阶梯搭建所需的方形小石块就需要比之前一节都一块。如果那个坐标上在搭建之前已经有石块了，那么那些石块的个数就不用算进建造的石块总数了。可以直接在那上面搭建阶梯。也就是说，这个阶梯的起始坐标为$l$，终止坐标为$r$，还有在建造之前就有的石块的坐标$x$。那就是说，$x$块方形小石块会被在$l$坐标中被搭建，$x+1$块方形小石块会在$l+1$坐标中被搭建$,...,x+r-l$块方形小石块会在坐标$r$的地方被搭建。

克里斯找到了一段远古时期火星人对这段阶梯的描述。现在他想确认他是不是真的找到了“通往烈阳之路”。为了达成这个目标，他选取了一些坐标，并数了数在整个火星文明的历史上被搭建的所有方形石块，并让你计算一下“通往烈阳之路”理论上应该由多少石块组成。

小提示

请不要使用`%lld`的辨识符去在C++中读入或者输出64位整数。你可以使用`cin`或者`%I64d`。

## 题目描述

Chris the Rabbit found the traces of an ancient Martian civilization. The brave astronomer managed to see through a small telescope an architecture masterpiece — "A Road to the Sun". The building stands on cubical stones of the same size. The foundation divides the entire "road" into cells, into which the cubical stones are fit tightly. Thus, to any cell of the foundation a coordinate can be assigned. To become the leader of the tribe, a Martian should build a Road to the Sun, that is to build from those cubical stones on a given foundation a stairway. The stairway should be described by the number of stones in the initial coordinate and the coordinates of the stairway's beginning and end. Each following cell in the coordinate's increasing order should contain one cubical stone more than the previous one. At that if the cell has already got stones, they do not count in this building process, the stairways were simply built on them. In other words, let us assume that a stairway is built with the initial coordinate of $ l $ , the final coordinate of $ r $ and the number of stones in the initial coordinate $ x $ . That means that $ x $ stones will be added in the cell $ l $ , $ x+1 $ stones will be added in the cell $ l+1 $ , ..., $ x+r-l $ stones will be added in the cell $ r $ .

Chris managed to find an ancient manuscript, containing the descriptions of all the stairways. Now he wants to compare the data to be sure that he has really found "A Road to the Sun". For that he chose some road cells and counted the total number of cubical stones that has been accumulated throughout the Martian history and then asked you to count using the manuscript to what the sum should ideally total.

## 输入输出格式

### 输入格式

The first line contains three space-separated integers: $ n,m,k $ ( $ 1<=n,m<=10^{5},1<=k<=min(n,100) $ ) which is the number of cells, the number of "Roads to the Sun" and the number of cells in the query correspondingly. Each of the following $ m $ roads contain three space-separated integers: $ a_{i},b_{i},c_{i} $ ( $ 1<=a_{i}<=b_{i}<=n,1<=c_{i}<=1000 $ ) which are the stairway's description, its beginning, end and the initial cell's height. Then follow a line, containing $ k $ different space-separated integers $ b_{i} $ . All these numbers ranging from $ 1 $ to $ n $ are cells, the number of stones in which interests Chris.

### 输出格式

You have to print a single number on a single line which is the sum of stones in all the cells Chris is interested in.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cin (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
5 2 1
1 5 1
2 4 1
3

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
3 2 1
1 3 1
1 3 1
2

```
### 输出样例 #2

```cpp
4

```
### 输入样例 #3

```cpp
3 2 1
1 3 1
1 3 1
3

```
### 输出样例 #3

```cpp
6

```
