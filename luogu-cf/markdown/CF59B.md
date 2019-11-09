# Fortune Telling

## 题意翻译

题目描述 玛丽娜喜欢萨沙。但她一直在想萨沙是否爱她。当然，知道的最好方法就是去占卜。占卜的方法有很多，但是玛丽娜选择了最简单的一个方法。她拿起一只或几只甘菊，一个接一个地掰下花瓣。在每个花瓣之后，她说出“爱”或“不爱”，第一个掰的花瓣后先说“爱”。有n 朵甘菊在田间生长，它们的花瓣数等于a1，a2，... an。玛丽娜想挑一束可能有最大花瓣总数的花束，且结果仍然是“爱”。帮她做到这一点：找到花瓣的最大数量可能在哪一个花束中。 输入输出格式 输入格式：

第一行包含一个整数 n（1 ≤ n ≤ 1 0 0），这是在田间种植的甘菊数量。第二行包含n个整数ai（ 1 ≤ ai ≤1 00），表示第i朵甘菊的花瓣数量。 输出格式：

输出一个数字，代表花束中最大的花瓣数量，这就会导致“爱”。如果没有这样的花束，请输出0。花束可能只由一朵花组成。

感谢@MarshalKen 提供的翻译

## 题目描述

Marina loves Sasha. But she keeps wondering whether Sasha loves her. Of course, the best way to know it is fortune telling. There are many ways of telling fortune, but Marina has picked the easiest one. She takes in her hand one or several camomiles and tears off the petals one by one. After each petal she pronounces alternatively "Loves" and "Doesn't love", at that Marina always starts with "Loves". There are $ n $ camomiles growing in the field, possessing the numbers of petals equal to $ a_{1},a_{2},...\ a_{n} $ . Marina wants to pick a bouquet with the maximal possible total number of petals so that the result would still be "Loves". Help her do that; find the maximal number of petals possible in the bouquet.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ), which is the number of flowers growing in the field. The second line contains $ n $ integers $ a_{i} $ ( $ 1<=a_{i}<=100 $ ) which represent the number of petals on a given $ i $ -th camomile.

### 输出格式

Print a single number which is the maximal number of petals in the bouquet, the fortune telling on which would result in "Loves". If there are no such bouquet, print $ 0 $ instead. The bouquet may consist of a single flower.

## 输入输出样例

### 输入样例 #1

```cpp
1
1

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
1
2

```
### 输出样例 #2

```cpp
0

```
### 输入样例 #3

```cpp
3
5 6 7

```
### 输出样例 #3

```cpp
13

```
