# Trial for Chief

## 题意翻译

题意是给你一张N*M的图，每个点有黑色和白色，初始全为白色，每次可以把一个相同颜色的连续区域染色，求最少的染色次数；

## 题目描述

Having unraveled the Berland Dictionary, the scientists managed to read the notes of the chroniclers of that time. For example, they learned how the chief of the ancient Berland tribe was chosen.

As soon as enough pretenders was picked, the following test took place among them: the chief of the tribe took a slab divided by horizontal and vertical stripes into identical squares (the slab consisted of $ N $ lines and $ M $ columns) and painted every square black or white. Then every pretender was given a slab of the same size but painted entirely white. Within a day a pretender could paint any side-linked set of the squares of the slab some color. The set is called linked if for any two squares belonging to the set there is a path belonging the set on which any two neighboring squares share a side. The aim of each pretender is to paint his slab in the exactly the same way as the chief’s slab is painted. The one who paints a slab like that first becomes the new chief.

Scientists found the slab painted by the ancient Berland tribe chief. Help them to determine the minimal amount of days needed to find a new chief if he had to paint his slab in the given way.

## 输入输出格式

### 输入格式

The first line contains two integers $ N $ and $ M $ ( $ 1<=N,M<=50 $ ) — the number of lines and columns on the slab. The next $ N $ lines contain $ M $ symbols each — the final coloration of the slab. $ W $ stands for the square that should be painted white and $ B $ — for the square that should be painted black.

### 输出格式

In the single line output the minimal number of repaintings of side-linked areas needed to get the required coloration of the slab.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
WBW
BWB
WBW

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
2 3
BBB
BWB

```
### 输出样例 #2

```cpp
1

```
