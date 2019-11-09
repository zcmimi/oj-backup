# Password

## 题意翻译

你有$n$个灯泡，一开始都未点亮

同时你有$l$个长度，分别为$a_1 \sim a_l$

每次你可以选择一段连续的子序列，且长度为某个$a_i$，并将这些灯泡的明灭状态取反

你可以做任意多次，使得最后有且仅有$k$个位置是亮的，这些位置已经给定，为$x_1 \sim x_k$

## 题目描述

Finally Fox Ciel arrived in front of her castle!

She have to type a password to enter her castle. An input device attached to her castle is a bit unusual.

The input device is a $ 1×n $ rectangle divided into $ n $ square panels. They are numbered $ 1 $ to $ n $ from left to right. Each panel has a state either ON or OFF. Initially all panels are in the OFF state. She can enter her castle if and only if $ x_{1} $ -th, $ x_{2} $ -th, $ ... $ , $ x_{k} $ -th panels are in the ON state and other panels are in the OFF state.

She is given an array $ a_{1} $ , $ ... $ , $ a_{l} $ . In each move, she can perform the following operation: choose an index $ i $ ( $ 1<=i<=l $ ), choose consecutive $ a_{i} $ panels, and flip the states of those panels (i.e. ON $ → $ OFF, OFF $ → $ ON).

Unfortunately she forgets how to type the password with only above operations. Determine the minimal number of operations required to enter her castle.

## 输入输出格式

### 输入格式

The first line contains three integers $ n $ , $ k $ and $ l $ ( $ 1<=n<=10000,1<=k<=10,1<=l<=100 $ ), separated by single spaces.

The second line contains $ k $ integers $ x_{1} $ , ..., $ x_{k} $ ( $ 1<=x_{1}&lt;x_{2}&lt;...&lt;x_{k}<=n $ ), separated by single spaces.

The third line contains $ l $ integers $ a_{1} $ , ..., $ a_{l} $ ( $ 1<=a_{i}<=n $ ), separated by single spaces. It is possible that some elements of the array $ a_{i} $ are equal value.

### 输出格式

Print the minimal number of moves required to type the password. If it's impossible, print -1.

## 输入输出样例

### 输入样例 #1

```cpp
10 8 2
1 2 3 5 6 7 8 9
3 5

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
3 2 1
1 2
3

```
### 输出样例 #2

```cpp
-1

```
## 说明

One possible way to type the password in the first example is following: In the first move, choose 1st, 2nd, 3rd panels and flip those panels. In the second move, choose 5th, 6th, 7th, 8th, 9th panels and flip those panels.

