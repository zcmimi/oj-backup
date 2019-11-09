# Indian Summer

## 题意翻译

现有n(1<=n<=100)片叶子，要求从中选出一些叶子。如果现在的叶子与之前选过的某一片叶子完全相同（即从同一棵树上落下且颜色相同），它就不会被选中。编程找出一共选了多少片叶子。

Translated by Lolierl

## 题目描述

Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest and picking a bouquet from fallen leaves. Alyona is very choosy — she doesn't take a leaf if it matches the color and the species of the tree of one of the leaves she already has. Find out how many leaves Alyona has picked.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ) — the number of leaves Alyona has found. The next $ n $ lines contain the leaves' descriptions. Each leaf is characterized by the species of the tree it has fallen from and by the color. The species of the trees and colors are given in names, consisting of no more than $ 10 $ lowercase Latin letters. A name can not be an empty string. The species of a tree and the color are given in each line separated by a space.

### 输出格式

Output the single number — the number of Alyona's leaves.

## 输入输出样例

### 输入样例 #1

```cpp
5
birch yellow
maple red
birch yellow
maple yellow
maple green

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
3
oak yellow
oak yellow
oak yellow

```
### 输出样例 #2

```cpp
1

```
