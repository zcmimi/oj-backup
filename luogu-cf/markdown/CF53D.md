# Physical Education

## 题意翻译

## 题目描述

$Vasya$是一名学校体育老师。与其他体育老师不同的是，$Vasya$并不喜欢学生按身高排队。相反，他要求孩子们按以下顺序排列：$ a_1,a_2,...,a_n $ （$a_i$是直线上第i个学生的高度，$n$是直线上的学生个数）。孩子们很难记住这样的安排，所以他们今天按照这样的顺序排列：$ b_1,b_2,...,b_n $。这让$Vasya$非常震惊。现在他想重新排列孩子，以便重新得到$ a_1,a_2,...,a_n $的顺序。每次$Vasya$可以交换队伍中相邻的两个人。帮助$Vasya$找到正确的移动顺序。不需要最小化移动次数。

感谢@M_sea 提供的翻译

## 题目描述

Vasya is a school PE teacher. Unlike other PE teachers, Vasya doesn't like it when the students stand in line according to their height. Instead, he demands that the children stand in the following order: $ a_{1},a_{2},...,a_{n} $ , where $ a_{i} $ is the height of the $ i $ -th student in the line and $ n $ is the number of students in the line. The children find it hard to keep in mind this strange arrangement, and today they formed the line in the following order: $ b_{1},b_{2},...,b_{n} $ , which upset Vasya immensely. Now Vasya wants to rearrange the children so that the resulting order is like this: $ a_{1},a_{2},...,a_{n} $ . During each move Vasya can swap two people who stand next to each other in the line. Help Vasya, find the sequence of swaps leading to the arrangement Vasya needs. It is not required to minimize the number of moves.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=300 $ ) which is the number of students. The second line contains $ n $ space-separated integers $ a_{i} $ ( $ 1<=a_{i}<=10^{9} $ ) which represent the height of the student occupying the $ i $ -th place must possess. The third line contains $ n $ space-separated integers $ b_{i} $ ( $ 1<=b_{i}<=10^{9} $ ) which represent the height of the student occupying the $ i $ -th place in the initial arrangement. It is possible that some students possess similar heights. It is guaranteed that it is possible to arrange the children in the required order, i.e. $ a $ and $ b $ coincide as multisets.

### 输出格式

In the first line print an integer $ k $ ( $ 0<=k<=10^{6} $ ) which is the number of moves. It is not required to minimize $ k $ but it must not exceed $ 10^{6} $ . Then print $ k $ lines each containing two space-separated integers. Line $ p_{i} $ , $ p_{i}+1 $ ( $ 1<=p_{i}<=n-1 $ ) means that Vasya should swap students occupying places $ p_{i} $ and $ p_{i+1} $ .

## 输入输出样例

### 输入样例 #1

```cpp
4
1 2 3 2
3 2 1 2

```
### 输出样例 #1

```cpp
4
2 3
1 2
3 4
2 3

```
### 输入样例 #2

```cpp
2
1 100500
1 100500

```
### 输出样例 #2

```cpp
0

```
