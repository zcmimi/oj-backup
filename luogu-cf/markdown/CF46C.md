# Hamsters and Tigers

## 题意翻译

**题目大意：**

给你个**环**，环上有$n(2<=n<=1000)$个点，每个点为黑色（题目中的仓鼠）或白色（题目中的老虎），你每次可以交换两个点的位置，求最少交换次数使得黑点白点分离（即黑点连续，中间没有白点）

**输入格式**

第一行为一个整数$n$，表示点数

第二行为一个长度为$n$的字符串，其中$H$表示黑点，$T$表示白点

**输出格式：**

一个整数，即最少交换次数

感谢@守望 提供翻译

## 题目描述

Today there is going to be an unusual performance at the circus — hamsters and tigers will perform together! All of them stand in circle along the arena edge and now the trainer faces a difficult task: he wants to swap the animals' positions so that all the hamsters stood together and all the tigers also stood together. The trainer swaps the animals in pairs not to create a mess. He orders two animals to step out of the circle and swap places. As hamsters feel highly uncomfortable when tigers are nearby as well as tigers get nervous when there's so much potential prey around (consisting not only of hamsters but also of yummier spectators), the trainer wants to spend as little time as possible moving the animals, i.e. he wants to achieve it with the minimal number of swaps. Your task is to help him.

## 输入输出格式

### 输入格式

The first line contains number $ n $ ( $ 2<=n<=1000 $ ) which indicates the total number of animals in the arena. The second line contains the description of the animals' positions. The line consists of $ n $ symbols "H" and "T". The "H"s correspond to hamsters and the "T"s correspond to tigers. It is guaranteed that at least one hamster and one tiger are present on the arena. The animals are given in the order in which they are located circle-wise, in addition, the last animal stands near the first one.

### 输出格式

Print the single number which is the minimal number of swaps that let the trainer to achieve his goal.

## 输入输出样例

### 输入样例 #1

```cpp
3
HTH

```
### 输出样例 #1

```cpp
0

```
### 输入样例 #2

```cpp
9
HTHTHTHHT

```
### 输出样例 #2

```cpp
2

```
## 说明

In the first example we shouldn't move anybody because the animals of each species already stand apart from the other species. In the second example you may swap, for example, the tiger in position $ 2 $ with the hamster in position $ 5 $ and then — the tiger in position $ 9 $ with the hamster in position $ 7 $ .

