# Geometrical problem

## 题意翻译

题目描述：

Polycarp 热爱几何级数以至于他爱好收集它们。但是，由于这类级数很少出现，他也喜欢仅仅删除一个元素就能得到几何级数的数字序列。

在这个任务中，我们定义满足任意一项ai都能表示为

$ c\cdot b^{i-1} $

的数列为几何级数的有限序列（b、c为实数）。

例如，[2, -4, 8]、 [0, 0, 0, 0]、 [199] 为几何级数而 [0, 1, 2, 3] 不是。

现在请你帮助Polycarp判断他最近找到的一个他不能马上确定是否满足上述条件的序列是否为几何级数的有限序列；如果不是，请你检查该序列是否能在删掉其中的一个元素后满足上述条件。

输入格式：

输入共两行，

第一行：一个数n（序列总元素数）；

第二行：n个数，$a_{1}$ 到$a_{n}$。

满足$1\le n\le10^{5}$，$1\le a_{i}\le10^{4}$

输出格式：

输出共一行，

第一行：一个数（0或1或2）

如果输入数据构成几何级数，输出0；

如果该序列能在删掉其中的一个元素后构成几何级数，输出1；

如果该序列不能在删掉其中的一个元素后构成几何级数，输出2。

## 题目描述

Polycarp loves geometric progressions — he collects them. However, as such progressions occur very rarely, he also loves the sequences of numbers where it is enough to delete a single element to get a geometric progression.

In this task we shall define geometric progressions as finite sequences of numbers $ a_{1},a_{2},...,a_{k} $ , where $ a_{i}=c·b^{i-1} $ for some real numbers $ c $ and $ b $ . For example, the sequences \[2, -4, 8\], \[0, 0, 0, 0\], \[199\] are geometric progressions and \[0, 1, 2, 3\] is not.

Recently Polycarp has found a sequence and he can't classify it. Help him to do it. Determine whether it is a geometric progression. If it is not, check if it can become a geometric progression if an element is deleted from it.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=10^{5} $ ) — the number of elements in the given sequence. The second line contains the given sequence. The numbers are space-separated. All the elements of the given sequence are integers and their absolute value does not exceed $ 10^{4} $ .

### 输出格式

Print 0, if the given sequence is a geometric progression. Otherwise, check if it is possible to make the sequence a geometric progression by deleting a single element. If it is possible, print 1. If it is impossible, print 2.

## 输入输出样例

### 输入样例 #1

```cpp
4
3 6 12 24

```
### 输出样例 #1

```cpp
0

```
### 输入样例 #2

```cpp
4
-8 -16 24 -32

```
### 输出样例 #2

```cpp
1

```
### 输入样例 #3

```cpp
4
0 1 2 3

```
### 输出样例 #3

```cpp
2

```
