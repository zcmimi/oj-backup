# Number Table

## 题意翻译

**问题描述**

有一个n 行m 列的棋盘，现在棋盘上的每个位置需要填上1 或-1 。

其中有k 个位置已经填上了数，而其它的位置则是空的。

定义一个棋盘是好的当且仅当其每一行、每一列都满足所有数的乘积是−1 。

你需要计算有多少种填数的方案是好的，答案对p 取模。

$0~\leq~k~<~\max\{n,m\}$

## 题目描述

As it has been found out recently, all the Berland's current economical state can be described using a simple table $ n×m $ in size. $ n $ — the number of days in each Berland month, $ m $ — the number of months. Thus, a table cell corresponds to a day and a month of the Berland's year. Each cell will contain either 1, or -1, which means the state's gains in a particular month, on a particular day. 1 corresponds to profits, -1 corresponds to losses. It turned out important for successful development to analyze the data on the state of the economy of the previous year, however when the treasurers referred to the archives to retrieve the data, it turned out that the table had been substantially damaged. In some table cells the number values had faded and were impossible to be deciphered. It is known that the number of cells in which the data had been preserved is strictly less than $ max(n,m) $ . However, there is additional information — the product of the numbers in each line and column equaled -1. Your task is to find out how many different tables may conform to the preserved data. As the answer to the task can be quite large, you have to find it modulo $ p $ .

## 输入输出格式

### 输入格式

The first line contains integers $ n $ and $ m $ ( $ 1<=n,m<=1000 $ ). The second line contains the integer $ k $ ( $ 0<=k&lt;max(n,m) $ ) — the number of cells in which the data had been preserved. The next $ k $ lines contain the data on the state of the table in the preserved cells. Each line is of the form " $ a $ $ b $ $ c $ ", where $ a $ ( $ 1<=a<=n $ ) — the number of the table row, $ b $ ( $ 1<=b<=m $ ) — the number of the column, $ c $ — the value containing in the cell (1 or -1). They are numbered starting from $ 1 $ . It is guaranteed that no two lines with same $ a $ and $ b $ values exist. The last line contains an integer $ p $ ( $ 2<=p<=10^{9}+7 $ ).

### 输出格式

Print the number of different tables that could conform to the preserved data modulo $ p $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 2
0
100

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
2 2
1
1 1 -1
100

```
### 输出样例 #2

```cpp
1

```
