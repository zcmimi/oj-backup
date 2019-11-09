# Mushroom Gnomes

## 题意翻译

### 题目描述

很久以前，在蘑菇森林的灌木丛中生活着蘑菇地精。它们以神奇的蘑菇而在邻居中闻名。它们的神奇特性使得它们每分钟可以在相邻的两个蘑菇之间长出另一个蘑菇，而该蘑菇的重量等于两个相邻蘑菇的重量之和。

蘑菇地精喜欢一切都井井有条的，这就是为什么它们总是按照重量递增的顺序将蘑菇种成一行。

地精们种下蘑菇后就去吃饭了。 $x$ 分钟后，他们返回，发现新的蘑菇长大了，因此打破了递增的顺序。

地精们按照正确的顺序重新种植了所有蘑菇，也就是说，他们按照重量递增的顺序重新对蘑菇进行了排序。然后又去吃饭了（地精们是食量很大的）。 再过 $y$ 分钟，蘑菇总重量对 $p$ 取模的值是多少？

### 输入格式

第一行包含四个整数 $n$ ， $x$ ， $y$ ， $p$ （ $1 \leqslant n \leqslant 10^6,0 \leqslant x,y \leqslant 10^{18},x+y>0,2 \leqslant p \leqslant 10^9$ ），分别表示蘑菇的数量、第一次种植后的分钟数、第二次重新种植后的分钟数和模数。

第二行包含 $n$ 个整数 $a_i$ ，按非降序排列表示蘑菇的重量（$ 0 \leqslant a_i \leqslant 10^9$ ）。

### 输出格式

答案应包含一个数字，即蘑菇在 $x+y$ 分钟后的总重量对 $p$ 取模的值。

## 题目描述

Once upon a time in the thicket of the mushroom forest lived mushroom gnomes. They were famous among their neighbors for their magic mushrooms. Their magic nature made it possible that between every two neighboring mushrooms every minute grew another mushroom with the weight equal to the sum of weights of two neighboring ones.

The mushroom gnomes loved it when everything was in order, that's why they always planted the mushrooms in one line in the order of their weights' increasing. Well... The gnomes planted the mushrooms and went to eat. After $ x $ minutes they returned and saw that new mushrooms had grown up, so that the increasing order had been violated. The gnomes replanted all the mushrooms in the correct order, that is, they sorted the mushrooms in the order of the weights' increasing. And went to eat again (those gnomes were quite big eaters). What total weights modulo $ p $ will the mushrooms have in another $ y $ minutes?

## 输入输出格式

### 输入格式

The first line contains four integers $ n $ , $ x $ , $ y $ , $ p $ ( $ 1<=n<=10^{6},0<=x,y<=10^{18},x+y&gt;0,2<=p<=10^{9} $ ) which represent the number of mushrooms, the number of minutes after the first replanting, the number of minutes after the second replanting and the module. The next line contains $ n $ integers $ a_{i} $ which represent the mushrooms' weight in the non-decreasing order ( $ 0<=a_{i}<=10^{9} $ ).

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cin (also you may use %I64d).

### 输出格式

The answer should contain a single number which is the total weights of the mushrooms modulo $ p $ in the end after $ x+y $ minutes.

## 输入输出样例

### 输入样例 #1

```cpp
2 1 0 657276545
1 2

```
### 输出样例 #1

```cpp
6

```
### 输入样例 #2

```cpp
2 1 1 888450282
1 2

```
### 输出样例 #2

```cpp
14

```
### 输入样例 #3

```cpp
4 5 0 10000
1 2 3 4

```
### 输出样例 #3

```cpp
1825

```
