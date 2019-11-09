# The Elder Trolls IV: Oblivon

## 题意翻译

### 题目描述

瓦西亚被要求杀死一个怪物。怪物的形状非常有趣，看起来像一个大小为 $x \times y \times z$ 的长方体，由不可破坏的 $1 \times 1 \times 1$ 大小的单元组成。

瓦西亚可以沿着假想的网格切割怪物，即从平行于平行六面体一侧的平面切割怪物。

每次切割后，怪物的所有部分均不会掉落，它们会完全保留在其位置上。也就是说瓦西亚可以同时切割多次。

瓦西亚想知道他切割 $k$ 次后最多可以将怪物切成的最大块数。

我们认为瓦西亚使用无限长和无限细的剑。

### 输入格式

输入共一行，包含四个整数 $x,y,z,k$ $(1 \leqslant x,y,z \leqslant 10^{6},0 \leqslant k \leqslant 10^{9})$ ，意义如题面所述。

### 输出格式

输出共一行，一个整数表示问题的答案。

## 题目描述

Vasya plays The Elder Trolls IV: Oblivon. Oh, those creators of computer games! What they do not come up with! Absolutely unique monsters have been added to the The Elder Trolls IV: Oblivon. One of these monsters is Unkillable Slug. Why it is "Unkillable"? Firstly, because it can be killed with cutting weapon only, so lovers of two-handed amber hammers should find suitable knife themselves. Secondly, it is necessary to make so many cutting strokes to Unkillable Slug. Extremely many. Too many!

Vasya has already promoted his character to 80-th level and in order to gain level 81 he was asked to kill Unkillable Slug. The monster has a very interesting shape. It looks like a rectangular parallelepiped with size $ x×y×z $ , consisting of undestructable cells $ 1×1×1 $ . At one stroke Vasya can cut the Slug along an imaginary grid, i.e. cut with a plane parallel to one of the parallelepiped side. Monster dies when amount of parts it is divided reaches some critical value.

All parts of monster do not fall after each cut, they remains exactly on its places. I. e. Vasya can cut several parts with one cut.

Vasya wants to know what the maximum number of pieces he can cut the Unkillable Slug into striking him at most $ k $ times.

Vasya's character uses absolutely thin sword with infinite length.

## 输入输出格式

### 输入格式

The first line of input contains four integer numbers $ x,y,z,k $ ( $ 1<=x,y,z<=10^{6},0<=k<=10^{9} $ ).

### 输出格式

Output the only number — the answer for the problem.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
2 2 2 3

```
### 输出样例 #1

```cpp
8
```


### 输入样例 #2

```cpp
2 2 2 1

```
### 输出样例 #2

```cpp
2
```


## 说明

In the first sample Vasya make 3 pairwise perpendicular cuts. He cuts monster on two parts with the first cut, then he divides each part on two with the second cut, and finally he divides each of the 4 parts on two.

