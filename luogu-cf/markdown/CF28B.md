# pSort

## 题意翻译

给定一个含有n个元素的数列，第i号元素开始时数值为i,元素i可以与距离为d[i]的元素进行交换。再给定一个1-n的全排列，问初始的数列可否交换成给定的样式。

输入:第一行一个整数n，第二行n个互不相同的整数表示目标数列，第三行n个整数表示d[i];

输出:如果能交换到给定样式，输出"YES"，否则输出"NO"。

1<=n<=100

感谢@稀神探女 提供的翻译

## 题目描述

One day $ n $ cells of some array decided to play the following game. Initially each cell contains a number which is equal to it's ordinal number (starting from $ 1 $ ). Also each cell determined it's favourite number. On it's move $ i $ -th cell can exchange it's value with the value of some other $ j $ -th cell, if $ |i-j|=d_{i} $ , where $ d_{i} $ is a favourite number of $ i $ -th cell. Cells make moves in any order, the number of moves is unlimited.

The favourite number of each cell will be given to you. You will also be given a permutation of numbers from $ 1 $ to $ n $ . You are to determine whether the game could move to this state.

## 输入输出格式

### 输入格式

The first line contains positive integer $ n $ ( $ 1<=n<=100 $ ) — the number of cells in the array. The second line contains $ n $ distinct integers from $ 1 $ to $ n $ — permutation. The last line contains $ n $ integers from $ 1 $ to $ n $ — favourite numbers of the cells.

### 输出格式

If the given state is reachable in the described game, output YES, otherwise NO.

## 输入输出样例

### 输入样例 #1

```cpp
5
5 4 3 2 1
1 1 1 1 1

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
7
4 3 5 1 2 7 6
4 6 6 1 6 6 1

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
7
4 2 5 1 3 7 6
4 6 6 1 6 6 1

```
### 输出样例 #3

```cpp
YES

```
