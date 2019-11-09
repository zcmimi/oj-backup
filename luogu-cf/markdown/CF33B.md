# String Problem

## 题意翻译

小男孩Valera喜欢字符串。当它们是相同的时候，他会更喜欢它们。这就是为什么Valera会在空闲时间玩下面这个游戏。

他有两个由小写字母组成的字符串，根据游戏规则，Valera每次可以将其中一个字符串中的任何一个字母 $A_i$ 变为$B_i$ ，但要支付$W_i$ 的代价。请你输出让两个字符串相同的最小代价，无解输出-1。

### 输入格式

第1、2行两个字符串。

第3行一个整数n，表示可能的变化的个数。

接下来n行，每行两个字符一个整数分别表示$A_i$ ，$B_i$ ，与$W_i$ 。

### 输出格式

无解输出-1。

有解一共2行，第1行一个整数表示最小代价；第2行一个字符串表示最后相同的串。

感谢MloVtry 提供的翻译

## 题目描述

Boy Valera likes strings. And even more he likes them, when they are identical. That's why in his spare time Valera plays the following game. He takes any two strings, consisting of lower case Latin letters, and tries to make them identical. According to the game rules, with each move Valera can change one arbitrary character $ A_{i} $ in one of the strings into arbitrary character $ B_{i} $ , but he has to pay for every move a particular sum of money, equal to $ W_{i} $ . He is allowed to make as many moves as he needs. Since Valera is a very economical boy and never wastes his money, he asked you, an experienced programmer, to help him answer the question: what minimum amount of money should Valera have to get identical strings.

## 输入输出格式

### 输入格式

The first input line contains two initial non-empty strings $ s $ and $ t $ , consisting of lower case Latin letters. The length of each string doesn't exceed $ 10^{5} $ . The following line contains integer $ n $ ( $ 0<=n<=500 $ ) — amount of possible changings. Then follow $ n $ lines, each containing characters $ A_{i} $ and $ B_{i} $ (lower case Latin letters) and integer $ W_{i} $ ( $ 0<=W_{i}<=100 $ ), saying that it's allowed to change character $ A_{i} $ into character $ B_{i} $ in any of the strings and spend sum of money $ W_{i} $ .

### 输出格式

If the answer exists, output the answer to the problem, and the resulting string. Otherwise output -1 in the only line. If the answer is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
uayd
uxxd
3
a x 8
x y 13
d c 3

```
### 输出样例 #1

```cpp
21
uxyd

```
### 输入样例 #2

```cpp
a
b
3
a b 2
a b 3
b a 5

```
### 输出样例 #2

```cpp
2
b

```
### 输入样例 #3

```cpp
abc
ab
6
a b 4
a b 7
b a 8
c b 11
c a 3
a c 0

```
### 输出样例 #3

```cpp
-1

```
