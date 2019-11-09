# Next Test

## 题意翻译

给出n个互不相同的整数a[i]，从小到大找第一个没有出现过的整数。

输入:第一行一个正整数n，之后是n个整数a[i];

输出:一个整数x，即第一个没有出现过的整数。

1<=n

1<=a[i]

translated by 稀神探女

## 题目描述

«Polygon» is a system which allows to create programming tasks in a simple and professional way. When you add a test to the problem, the corresponding form asks you for the test index. As in most cases it is clear which index the next test will have, the system suggests the default value of the index. It is calculated as the smallest positive integer which is not used as an index for some previously added test.

You are to implement this feature. Create a program which determines the default index of the next test, given the indexes of the previously added tests.

## 输入输出格式

### 输入格式

The first line contains one integer $ n $ ( $ 1<=n<=3000 $ ) — the amount of previously added tests. The second line contains $ n $ distinct integers $ a_{1},a_{2},...,a_{n} $ ( $ 1<=a_{i}<=3000 $ ) — indexes of these tests.

### 输出格式

Output the required default value for the next test index.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 7 2

```
### 输出样例 #1

```cpp
3

```
