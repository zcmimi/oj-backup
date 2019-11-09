# Sets

## 题目描述

Little Vasya likes very much to play with sets consisting of positive integers. To make the game more interesting, Vasya chose $ n $ non-empty sets in such a way, that no two of them have common elements.

One day he wanted to show his friends just how interesting playing with numbers is. For that he wrote out all possible unions of two different sets on $ n·(n-1)/2 $ pieces of paper. Then he shuffled the pieces of paper. He had written out the numbers in the unions in an arbitrary order.

For example, if $ n=4 $ , and the actual sets have the following form $ {1,3} $ , $ {5} $ , $ {2,4} $ , $ {7} $ , then the number of set pairs equals to six. The six pieces of paper can contain the following numbers:

- $ 2,7,4 $ .

- $ 1,7,3 $ ;

- $ 5,4,2 $ ;

- $ 1,3,5 $ ;

- $ 3,1,2,4 $ ;

- $ 5,7 $ .

Then Vasya showed the pieces of paper to his friends, but kept the $ n $ sets secret from them. His friends managed to calculate which sets Vasya had thought of in the first place. And how about you, can you restore the sets by the given pieces of paper?

## 输入输出格式

### 输入格式

The first input file line contains a number $ n $ ( $ 2<=n<=200 $ ), $ n $ is the number of sets at Vasya's disposal. Then follow sets of numbers from the pieces of paper written on $ n·(n-1)/2 $ lines. Each set starts with the number $ k_{i} $ ( $ 2<=k_{i}<=200 $ ), which is the number of numbers written of the $ i $ -th piece of paper, and then follow $ k_{i} $ numbers $ a_{ij} $ ( $ 1<=a_{ij}<=200 $ ). All the numbers on the lines are separated by exactly one space. It is guaranteed that the input data is constructed according to the above given rules from $ n $ non-intersecting sets.

### 输出格式

Print on $ n $ lines Vasya's sets' description. The first number on the line shows how many numbers the current set has. Then the set should be recorded by listing its elements. Separate the numbers by spaces. Each number and each set should be printed exactly once. Print the sets and the numbers in the sets in any order. If there are several answers to that problem, print any of them.

It is guaranteed that there is a solution.

## 输入输出样例

### 输入样例 #1

```cpp
4
3 2 7 4
3 1 7 3
3 5 4 2
3 1 3 5
4 3 1 2 4
2 5 7

```
### 输出样例 #1

```cpp
1 7 
2 2 4 
2 1 3 
1 5 

```
### 输入样例 #2

```cpp
4
5 6 7 8 9 100
4 7 8 9 1
4 7 8 9 2
3 1 6 100
3 2 6 100
2 1 2

```
### 输出样例 #2

```cpp
3 7 8 9 
2 6 100 
1 1 
1 2 

```
### 输入样例 #3

```cpp
3
2 1 2
2 1 3
2 2 3

```
### 输出样例 #3

```cpp
1 1 
1 2 
1 3 

```
