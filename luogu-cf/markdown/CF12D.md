# Ball

## 题意翻译

有N个女士去参加舞会。每个女士有三个值a[i],b[i],c[i]。如果一位女士发现有其它女士的这三个值都比自己高的话就会去跳楼.求有多少跳楼的女士。

读入:第一行为$N$，第二行为每个人的$B_i$值，第三行为每个人的$I_i$值，第四行为每个人的$R_i$值。

输出：一个整数，代表问题的答案

数据范围：

1 ≤ N ≤ 500000

0<=a[i],b[i],c[i]<=10^9

## 题目描述

 $ N $ ladies attend the ball in the King's palace. Every lady can be described with three values: beauty, intellect and richness. King's Master of Ceremonies knows that ladies are very special creatures. If some lady understands that there is other lady at the ball which is more beautiful, smarter and more rich, she can jump out of the window. He knows values of all ladies and wants to find out how many probable self-murderers will be on the ball. Lets denote beauty of the $ i $ -th lady by $ B_{i} $ , her intellect by $ I_{i} $ and her richness by $ R_{i} $ . Then $ i $ -th lady is a probable self-murderer if there is some $ j $ -th lady that $ B_{i}<B_{j},I_{i}<I_{j},R_{i}<R_{j} $ . Find the number of probable self-murderers.

## 输入输出格式

### 输入格式

The first line contains one integer $ N $ ( $ 1<=N<=500000 $ ). The second line contains $ N $ integer numbers $ B_{i} $ , separated by single spaces. The third and the fourth lines contain sequences $ I_{i} $ and $ R_{i} $ in the same format. It is guaranteed that $ 0<=B_{i},I_{i},R_{i}<=10^{9} $ .

### 输出格式

Output the answer to the problem.

## 输入输出样例

### 输入样例 #1

```cpp
3
1 4 2
4 3 2
2 5 3

```
### 输出样例 #1

```cpp
1

```
