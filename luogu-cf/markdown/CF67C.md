# Sequence of Balls

## 题意翻译

### 题意

有两个字符串$A$ ，$B$ ，每次可以进行$4$ 种操作

1. 插入一个字符，花费$t_i$ 元

2. 删除一个字符，花费$t_d$ 元

3. 替换一个字符，花费$t_r$ 元

4. 交换相邻的两个字符，花费$t_e$ 元

**※保证费用都是$(0,100]$ 之间的正整数， 且$2t_e≥t_i+t_d$ **

现在对$A$ 进行若干次操作，求变成$B$ 最少需要多少元

### 输入

第一行$4$ 个数$t_i$ 、$t_d$ 、$t_r$ 、$t_e$ 。

接下来两行，两个字符串$A$ 、$B$ ，保证它们长度都不超过$4000$ 。

### 输出

仅一行，一个非负整数表示最小费用

感谢@C20191629 提供的翻译

## 题目描述

You are given a sequence of balls $ A $ by your teacher, each labeled with a lowercase Latin letter 'a'-'z'. You don't like the given sequence. You want to change it into a new sequence, $ B $ that suits you better. So, you allow yourself four operations:

- You can insert any ball with any label into the sequence at any position.

- You can delete (remove) any ball from any position.

- You can replace any ball with any other ball.

- You can exchange (swap) two adjacent balls.

Your teacher now places time constraints on each operation, meaning that an operation can only be performed in certain time. So, the first operation takes time $ t_{i} $ , the second one takes $ t_{d} $ , the third one takes $ t_{r} $ and the fourth one takes $ t_{e} $ . Also, it is given that $ 2·t_{e}>=t_{i}+t_{d} $ .

Find the minimal time to convert the sequence $ A $ to the sequence $ B $ .

## 输入输出格式

### 输入格式

The first line contains four space-separated integers $ t_{i},t_{d},t_{r},t_{e} $ ( $ 0<t_{i},t_{d},t_{r},t_{e}<=100 $ ). The following two lines contain sequences $ A $ and $ B $ on separate lines. The length of each line is between 1 and 4000 characters inclusive.

### 输出格式

Print a single integer representing minimum time to convert $ A $ into $ B $ .

## 输入输出样例

### 输入样例 #1

```cpp
1 1 1 1
youshouldnot
thoushaltnot

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
2 4 10 3
ab
ba

```
### 输出样例 #2

```cpp
3

```
### 输入样例 #3

```cpp
1 10 20 30
a
za

```
### 输出样例 #3

```cpp
1

```
## 说明

In the second sample, you could delete the ball labeled 'a' from the first position and then insert another 'a' at the new second position with total time 6. However exchanging the balls give total time 3.

