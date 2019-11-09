# Domino Carpet

## 题目描述

...Mike the TV greets you again!

Tired of the monotonous furniture? Sick of gray routine? Dreaming about dizzying changes in your humble abode? We have something to offer you!

This domino carpet for only $99.99 will change your life! You can lay it on the floor, hang it on the wall or even on the ceiling! Among other things ...

Having watched the commercial, virus Hexadecimal also wanted to get a Domino Carpet and wanted badly to be photographed in front of it. But of course, a virus will never consent to buying a licensed Carpet! So she ordered a truck of dominoes and decided to make such a Carpet herself.

The original Domino Carpet is a field of squares $ n×m $ in size. Each square is half of a domino, and can be rotated either vertically or horizontally, independently from its neighbors. Vertically rotated domino halves look like this:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF77D/24b223911e7d414b4105f5f7b384a2c2404033bc.png)And horizontally rotated halves look like this:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF77D/2e953cc07e102d1dc6925e21d1623a202ee1f98f.png)Notice, that some halves looks the same in both rotations, but other halves differ.

Dominoes bought by Hexadecimal are represented by uncuttable chips $ 1×2 $ in size, which can be laid either vertically or horizontally. If the chip is laid vertically, then both of it's halves should be laid vertically orientated; if the chip is laid horizontally, then both of it's halves should be laid horizontally.

The samples of valid and invalid dominoes laid vertically and horizontally are:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF77D/5374017256a96c5a451a244dd383a369135da2b6.png)Virus Hexadecimal assembles her own Domino Carpet so that the following conditions are satisfied:

- each carpet square is covered by a domino chip, i.e. there are no empty squares;

- all domino chips lie entirely within the carpet and don't overlap with each other;

- if there is a horizontal domino chip with its left half in column $ j $ then there are no horizontal domino chips with their left halves in columns $ j-1 $ or $ j+1 $ .

Before starting to assemble her own Domino Carpet, the virus wants to know the number of ways to achieve the intended purpose modulo $ 10^{9}+7 $ .

You can assume that the virus has an infinitely large number of dominoes of each type.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ , separated by a space — the size of the Domino Carpet ( $ 1<=n,m<=250 $ ). Next $ 4n+1 $ lines contain $ 4m+1 $ symbols.

Each square of the Domino Carpet, which is a domino half, is described by a $ 3×3 $ square. Symbol 'O' in this square indicates the presence of a point, symbol '.' — its absence.

Each $ 3×3 $ square is delineated from adjacent squares by symbols '#' as shown in the examples.

It is guaranteed that every box describes the correct half of a domino.

In all pretests the Domino Carpets have the size of $ 2×2 $ and $ 4×4 $ .

### 输出格式

Print a single number, the number of ways to assemble the Domino Carpet modulo $ 10^{9}+7 $ , using only standard dominoes of size $ 1×2 $ .

## 输入输出样例

### 输入样例 #1

```cpp
3 4
#################
#O..#...#O.O#...#
#.O.#.O.#.O.#...#
#..O#...#O.O#...#
#################
#O.O#OOO#O.O#...#
#.O.#...#...#.O.#
#O.O#OOO#O.O#...#
#################
#O.O#...#O.O#...#
#...#...#...#.O.#
#O.O#...#O.O#...#
#################

```
### 输出样例 #1

```cpp
3
```


### 输入样例 #2

```cpp
2 2
#########
#O.O#O.O#
#.O.#...#
#O.O#O.O#
#########
#...#O.O#
#...#...#
#...#O.O#
#########

```
### 输出样例 #2

```cpp
2
```


### 输入样例 #3

```cpp
2 2
#########
#..O#O..#
#...#...#
#O..#..O#
#########
#O..#..O#
#...#...#
#..O#O..#
#########

```
### 输出样例 #3

```cpp
0
```


## 说明

A note to the first example: all correct ways to make Domino Carpet are represented below:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF77D/981dbdf83cacdc8575134f74d310175de347a9dc.png)And this way is incorrect:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF77D/e27d2b360b8d6e5a93ae8ba6b82c2ca4f625b27b.png)

