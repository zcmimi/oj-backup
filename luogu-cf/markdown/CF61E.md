# Enemy is weak

## 题意翻译

## 题目描述

罗马人再次进攻波斯。这一次他们比波斯人强大，但沙普尔有信心战胜他们。他充满信心地说:“狮子不怕百只羊。”

不过，沙普尔必须找到罗马军队的弱点才能战胜他们。所以他给了军队一个弱点数字。

在他看来，军队的弱点数字等于三元组i，j，k的数量。比如:i<ja[j]>a[k].其中a[x]是站在x位置的人的力量，罗马军队有一个特别的地方——军队中所有人都有着不同的力量。

请你帮沙普尔找出这个弱点数字。

## 输入输出格式

### 输入格式

第一行一个n(3<=n<=10^6)，代表军人总数，第二行n个整数a[i] (1<=i<=n,1<=a[i]<=10^9)，代表军人的力量值。

### 输出格式

一行一个整数，代表罗马军队的弱点数字。

(在C++中，请不要用%lld输出长整型，建议使用cout，也可以用%l64d)。

## 题目描述

The Romans have attacked again. This time they are much more than the Persians but Shapur is ready to defeat them. He says: "A lion is never afraid of a hundred sheep".

Nevertheless Shapur has to find weaknesses in the Roman army to defeat them. So he gives the army a weakness number.

In Shapur's opinion the weakness of an army is equal to the number of triplets $ i,j,k $ such that $ i&lt;j&lt;k $ and $ a_{i}&gt;a_{j}&gt;a_{k} $ where $ a_{x} $ is the power of man standing at position $ x $ . The Roman army has one special trait — powers of all the people in it are distinct.

Help Shapur find out how weak the Romans are.

## 输入输出格式

### 输入格式

The first line of input contains a single number $ n $ ( $ 3<=n<=10^{6} $ ) — the number of men in Roman army. Next line contains $ n $ different positive integers $ a_{i} $ ( $ 1<=i<=n,1<=a_{i}<=10^{9} $ ) — powers of men in the Roman army.

### 输出格式

A single integer number, the weakness of the Roman army.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
3
3 2 1

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
3
2 3 1

```
### 输出样例 #2

```cpp
0

```
### 输入样例 #3

```cpp
4
10 8 3 1

```
### 输出样例 #3

```cpp
4

```
### 输入样例 #4

```cpp
4
1 5 4 3

```
### 输出样例 #4

```cpp
1

```
