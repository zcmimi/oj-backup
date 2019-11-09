# Army

## 题意翻译

题目描述

在北爱尔兰军队的行政系统中有n个军衔，其中1最低，n最高。

你需要d[i]年来从i级升到i+1级。在你升到i级时必须已经到达前面所有等级。

Vasya刚刚达到a级，但他想达到b级。请问他至少还要再参军多少年。

输入输出格式

输入：

第一行：n（2≤n≤100）；

第二行：d[1]，d[2]，d[3]，……，d[n-1]（1≤d[i]≤100）；

第三行：a，b（1≤a＜b≤n）。

输出：仅一行：从a级升到b级所需的年数。

## 题目描述

The Berland Armed Forces System consists of $ n $ ranks that are numbered using natural numbers from $ 1 $ to $ n $ , where $ 1 $ is the lowest rank and $ n $ is the highest rank.

One needs exactly $ d_{i} $ years to rise from rank $ i $ to rank $ i+1 $ . Reaching a certain rank $ i $ having not reached all the previous $ i-1 $ ranks is impossible.

Vasya has just reached a new rank of $ a $ , but he dreams of holding the rank of $ b $ . Find for how many more years Vasya should serve in the army until he can finally realize his dream.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ ( $ 2<=n<=100 $ ). The second line contains $ n-1 $ integers $ d_{i} $ ( $ 1<=d_{i}<=100 $ ). The third input line contains two integers $ a $ and $ b $ ( $ 1<=a<b<=n $ ). The numbers on the lines are space-separated.

### 输出格式

Print the single number which is the number of years that Vasya needs to rise from rank $ a $ to rank $ b $ .

## 输入输出样例

### 输入样例 #1

```cpp
3
5 6
1 2

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
3
5 6
1 3

```
### 输出样例 #2

```cpp
11

```
