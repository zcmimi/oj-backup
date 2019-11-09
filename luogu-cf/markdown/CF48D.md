# Permutations

## 题意翻译

题目描述

“排列”是指一个长度为n的序列，且其中1到n的每个数刚好出现一次。例如，(1) (4,3,5,1,2) (3,2,1)都是排列，而(1,1) (4,3,1) (2,3,4)则不是。

假设某人拿了几个排列（长度不一定相同），把它们连在一起写成了一个数列，并将这个数列打乱顺序。你的任务是将这个数列重新组成原来的几个排列（如果可能的话）。

输入输出格式

输入格式：

第1行是一个整数n（1<=n<=10^5）。下一行是这个打乱后的n个整数，用一个空格隔开。这个数列中的数在1到10^5的范围内。

输出格式：

如果这个数列能被分成若干的排列，且数列中的每个数恰好属于一个排列，请在第1行输出排列的个数。第2行有n个数，对应着给定数列的n个数：如果第i个元素属于第1个排列，输出的这一行的第i个数就是1，如果它属于第2个排列，那么它对应的输出中的数就是2，等等。这些排列的顺序无关紧要。

如果有多种答案，输出其中任意一个。如果没有答案，在第1行输出-1.

说明

在第1个样例中数组被分成了三个排列：(2,1) (3,2,1,4,5) (1,2)。第1个排列由原数列的第2和4个数组成，第2个排列由第3、5、6、7、9个元素组成，第3个排列由第1和8个元素组成。显然，还有另外几种分组的方式。

## 题目描述

A permutation is a sequence of integers from $ 1 $ to $ n $ of length $ n $ containing each number exactly once. For example, $ (1) $ , $ (4,3,5,1,2) $ , $ (3,2,1) $ are permutations, and $ (1,1) $ , $ (4,3,1) $ , $ (2,3,4) $ are not.

There are many tasks on permutations. Today you are going to solve one of them. Let’s imagine that somebody took several permutations (perhaps, with a different number of elements), wrote them down consecutively as one array and then shuffled the resulting array. The task is to restore the initial permutations if it is possible.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=10^{5} $ ). The next line contains the mixed array of $ n $ integers, divided with a single space. The numbers in the array are from $ 1 $ to $ 10^{5} $ .

### 输出格式

If this array can be split into several permutations so that every element of the array belongs to exactly one permutation, print in the first line the number of permutations. The second line should contain $ n $ numbers, corresponding to the elements of the given array. If the $ i $ -th element belongs to the first permutation, the $ i $ -th number should be $ 1 $ , if it belongs to the second one, then its number should be $ 2 $ and so on. The order of the permutations’ numbering is free.

If several solutions are possible, print any one of them. If there’s no solution, print in the first line $ -1 $ .

## 输入输出样例

### 输入样例 #1

```cpp
9
1 2 3 1 2 1 4 2 5

```
### 输出样例 #1

```cpp
3
3 1 2 1 2 2 2 3 2

```
### 输入样例 #2

```cpp
4
4 3 2 1

```
### 输出样例 #2

```cpp
1
1 1 1 1 
```


### 输入样例 #3

```cpp
4
1 2 2 3

```
### 输出样例 #3

```cpp
-1

```
## 说明

In the first sample test the array is split into three permutations: $ (2,1) $ , $ (3,2,1,4,5) $ , $ (1,2) $ . The first permutation is formed by the second and the fourth elements of the array, the second one — by the third, the fifth, the sixth, the seventh and the ninth elements, the third one — by the first and the eigth elements. Clearly, there are other splitting variants possible.

