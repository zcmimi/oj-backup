# Flag 2

## 题意翻译

题目描述:

根据一项新的ISO标准，每一个国家都应该有国旗，将一个国旗比作一个格点网n×m，每个小格都要画成26个颜色之一。ISO标准设置了以下限制：

每行最多可使用两种不同的颜色。

相邻的小格不能是同一种颜色。 请注意，在一列中可以使用多于两种不同的颜色。

伯兰政府决定改变他们国家的国旗以按照新的标准，同时他们希望使变化最小。

输入输出格式

输入格式：

输入的第一行包含2个整数n和m( 1<=n,m<=500 1<=n,m<=500 )分别为伯兰政府的国旗的行数和列数。 伯兰政府给出的国旗，为一个n*m的字符矩阵。对于每一个小格的颜色都用26个字母表示。

输出格式：

第一行：需要改变的小格颜色最少数目使得新国旗符合ISO标准。 接下来给出一个n*m的矩阵描绘国旗。注意，您给出的为符合新ISO标准的最小变化形式。

Translated by @Douglas 

## 题目描述

According to a new ISO standard, a flag of every country should have, strangely enough, a chequered field $ n×m $ , each square should be wholly painted one of 26 colours. The following restrictions are set:

- In each row at most two different colours can be used.

- No two adjacent squares can be painted the same colour.

Pay attention, please, that in one column more than two different colours can be used.

Berland's government took a decision to introduce changes into their country's flag in accordance with the new standard, at the same time they want these changes to be minimal. By the given description of Berland's flag you should find out the minimum amount of squares that need to be painted different colour to make the flag meet the new ISO standard. You are as well to build one of the possible variants of the new Berland's flag.

## 输入输出格式

### 输入格式

The first input line contains 2 integers $ n $ and $ m $ ( $ 1<=n,m<=500 $ ) — amount of rows and columns in Berland's flag respectively. Then there follows the flag's description: each of the following $ n $ lines contains $ m $ characters. Each character is a letter from a to z, and it stands for the colour of the corresponding square.

### 输出格式

In the first line output the minimum amount of squares that need to be repainted to make the flag meet the new ISO standard. The following $ n $ lines should contain one of the possible variants of the new flag. Don't forget that the variant of the flag, proposed by you, should be derived from the old flag with the minimum amount of repainted squares. If the answer isn't unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
3 4
aaaa
bbbb
cccc

```
### 输出样例 #1

```cpp
6
abab
baba
acac

```
### 输入样例 #2

```cpp
3 3
aba
aba
zzz

```
### 输出样例 #2

```cpp
4
aba
bab
zbz

```
