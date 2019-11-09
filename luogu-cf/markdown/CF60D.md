# Savior

## 题意翻译

题目描述：有 $n$ 块草坪，草坪 $i$ 上有整数 $a_i$ 。草坪 $i$ 可以向草坪 $j$ 传播 Laugh ，当且仅当存在整数 b 使得 $a_i, a_j, b$ 的某个排列构成的三元组是美丽的。称三元组 $(x, y, z)$ 是美丽的当且仅当 $x, y, z$ 两两互素且 $x^2 + y^2 = z^2$ 。问至少需要在多少个草坪上提供 Laugh ，才可以使全部的 $n$ 块草坪都得到 Laugh 。

输入格式：第一行包含一个整数 $n (1 \le n \le 10^6)$ ，表示草坪的数量。下一行包含 $n$ 个整数， $a_i (1 \le a_i \le 10^7)$ 表示第 $i$ 块草坪上的整数。所有的 $a_i$ 两两不同。

输出格式：输出一个整数，表示至少需要在多少个草坪上提供 Laugh ，才可以使全部草坪都得到 Laugh 。

## 题目描述

Misha decided to help Pasha and Akim be friends again. He had a cunning plan — to destroy all the laughy mushrooms. He knows that the laughy mushrooms can easily burst when they laugh. Mushrooms grow on the lawns. There are $ a[t] $ mushrooms on the $ t $ -th lawn.

Misha knows that the lawns where the mushrooms grow have a unique ability. A lawn (say, $ i $ ) can transfer laugh to other lawn (say, $ j $ ) if there exists an integer (say, $ b $ ) such, that some permutation of numbers $ a[i],a[j] $ and $ b $ is a beautiful triple ( $ i≠j $ ). A beautiful triple is such three pairwise coprime numbers $ x,y,z $ , which satisfy the following condition: $ x^{2}+y^{2}=z^{2} $ .

Misha wants to know on which minimal number of lawns he should laugh for all the laughy mushrooms to burst.

## 输入输出格式

### 输入格式

The first line contains one integer $ n $ ( $ 1<=n<=10^{6} $ ) which is the number of lawns. The next line contains $ n $ integers $ a_{i} $ which are the number of mushrooms on the $ i $ -lawn ( $ 1<=a_{i}<=10^{7} $ ). All the numbers are different.

### 输出格式

Print a single number — the minimal number of lawns on which Misha should laugh for all the mushrooms to burst.

## 输入输出样例

### 输入样例 #1

```cpp
1
2

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
2
1 2

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
2
3 5

```
### 输出样例 #3

```cpp
1

```
