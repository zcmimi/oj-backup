# Genetic engineering

## 题意翻译

我们定义一个 DNA 序列为仅有 `ATCG` 四个字母的字符串。

给出 $m(1 \le m \le 10)$ 个 DNA 序列模式串 $s_i$，每个长度均不超过 $10$ ，我们定义一个 DNA 序列 $w$ 是好的，当且仅当对于 $w$ 的每一个位置 $i$ ，都存在至少一个模式串 $s_j$ ， 使得 $w[l...r] = s_j$（ $w[l...r]$ 表示一个原字符串的一个子串） ， 其中 $1 \le l \le i \le r \le |w|$（ $|w|$ 为 DNA序列 $w$ 的长度） 。

请你计算出所有长度为 $n(1 \le n \le 1000)$ 的好的 DNA 序列的个数。

答案对 $1000000009(10^9+9)$ 取模。

## 题目描述

"Multidimensional spaces are completely out of style these days, unlike genetics problems" — thought physicist Woll and changed his subject of study to bioinformatics. Analysing results of sequencing he faced the following problem concerning DNA sequences. We will further think of a DNA sequence as an arbitrary string of uppercase letters "A", "C", "G" and "T" (of course, this is a simplified interpretation).

Let $ w $ be a long DNA sequence and $ s_{1},s_{2},...,s_{m} $ — collection of short DNA sequences. Let us say that the collection filters $ w $ iff $ w $ can be covered with the sequences from the collection. Certainly, substrings corresponding to the different positions of the string may intersect or even cover each other. More formally: denote by $ |w| $ the length of $ w $ , let symbols of $ w $ be numbered from $ 1 $ to $ |w| $ . Then for each position $ i $ in $ w $ there exist pair of indices $ l,r $ ( $ 1<=l<=i<=r<=|w| $ ) such that the substring $ w[l ... r] $ equals one of the elements $ s_{1},s_{2},...,s_{m} $ of the collection.

Woll wants to calculate the number of DNA sequences of a given length filtered by a given collection, but he doesn't know how to deal with it. Help him! Your task is to find the number of different DNA sequences of length $ n $ filtered by the collection $ {s_{i}} $ .

Answer may appear very large, so output it modulo $ 1000000009 $ .

## 输入输出格式

### 输入格式

First line contains two integer numbers $ n $ and $ m $ ( $ 1<=n<=1000,1<=m<=10 $ ) — the length of the string and the number of sequences in the collection correspondently.

Next $ m $ lines contain the collection sequences $ s_{i} $ , one per line. Each $ s_{i} $ is a nonempty string of length not greater than $ 10 $ . All the strings consist of uppercase letters "A", "C", "G", "T". The collection may contain identical strings.

### 输出格式

Output should contain a single integer — the number of strings filtered by the collection modulo $ 1000000009 $ ( $ 10^{9}+9 $ ).

## 输入输出样例

### 输入样例 #1

```cpp
2 1
A

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
6 2
CAT
TACT

```
### 输出样例 #2

```cpp
2

```
## 说明

In the first sample, a string has to be filtered by "A". Clearly, there is only one such string: "AA".

In the second sample, there exist exactly two different strings satisfying the condition (see the pictures below).

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF86C/a2747d198b5b8c3f293a2427e852f84624a28036.png) ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF86C/305d8cf545ebc4a6c53c7d783f927c1d0b9d6efd.png)

