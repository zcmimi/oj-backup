# Disposition

## 题意翻译

Vasya喜欢伯兰郡(???)一位著名的诗人Petya，今天Vasya买下了他的作品集。

Petya的作品集共有$n$卷，我们将其卷号编为$1$~$n$。由于Petya认为“如此伟大的作品，仅仅按照顺序来编排是远远不足的”.他将会按以下规则来编排该作品集：

对于第$i$卷作品，如果存在一个正整数$j(0<j<n + 1)$,满足以下$2$个规则: - $j$ $mod$ $i=0$ - $p(j)$ $mod$ $i=0$ 其中$p(j)$是按此规则排列好后的第$j$卷书的编号。 不难得出(QWQ又是这句话)**按此规则，至少有一组全排列满足要求**，现请你输出这个全排列。 ## 输入 一个正整数$n$，表示书的卷数。 ## 输出 $n$个正整数表示书卷的排列，若有多组满足要求的数据，输出任意一组。

## 题目描述

Vasya bought the collected works of a well-known Berland poet Petya in $ n $ volumes. The volumes are numbered from $ 1 $ to $ n $ . He thinks that it does not do to arrange the book simply according to their order. Vasya wants to minimize the number of the disposition’s divisors — the positive integers $ i $ such that for at least one $ j $ ( $ 1<=j<=n $ ) is true both: $ j $ $ mod $ $ i=0 $ and at the same time $ p(j) $ $ mod $ $ i=0 $ , where $ p(j) $ is the number of the tome that stands on the $ j $ -th place and $ mod $ is the operation of taking the division remainder. Naturally, one volume can occupy exactly one place and in one place can stand exactly one volume.

Help Vasya — find the volume disposition with the minimum number of divisors.

## 输入输出格式

### 输入格式

The first line contains number $ n $ ( $ 1<=n<=100000 $ ) which represents the number of volumes and free places.

### 输出格式

Print $ n $ numbers — the sought disposition with the minimum divisor number. The $ j $ -th number ( $ 1<=j<=n $ ) should be equal to $ p(j) $ — the number of tome that stands on the $ j $ -th place. If there are several solutions, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
2 1 

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
1 3 2 

```
