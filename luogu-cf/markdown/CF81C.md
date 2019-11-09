# Average Score

## 题目描述

After the educational reform Polycarp studies only two subjects at school, Safety Studies and PE (Physical Education). During the long months of the fourth term, he received $ n $ marks in them. When teachers wrote a mark in the journal, they didn't write in what subject the mark was for, they just wrote the mark.

Now it's time to show the journal to his strict parents. Polycarp knows that recently at the Parent Meeting the parents were told that he received $ a $ Safety Studies marks and $ b $ PE marks ( $ a+b=n $ ). Now Polycarp wants to write a subject's name in front of each mark so that:

- there are exactly $ a $ Safety Studies marks,

- there are exactly $ b $ PE marks,

- the total average score in both subjects is maximum.

An average subject grade is the sum of all marks in it, divided by the number of them. Of course, the division is performed in real numbers without rounding up or down. Polycarp aims to maximize the $ x_{1}+x_{2} $ , where $ x_{1} $ is the average score in the first subject (Safety Studies), and $ x_{2} $ is the average score in the second one (Physical Education).

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 2<=n<=10^{5} $ ), $ n $ is the number of marks in Polycarp's Journal. The second line contains two positive integers $ a,b $ ( $ 1<=a,b<=n-1,a+b=n $ ). The third line contains a sequence of integers $ t_{1},t_{2},...,t_{n} $ ( $ 1<=t_{i}<=5 $ ), they are Polycarp's marks.

### 输出格式

Print the sequence of integers $ f_{1},f_{2},...,f_{n} $ , where $ f_{i} $ ( $ 1<=f_{i}<=2 $ ) is the number of a subject to which the $ i $ -th mark should be attributed. If there are several possible solutions, then print such that the sequence $ f_{1},f_{2},...,f_{n} $ is the smallest lexicographically.

The sequence $ p_{1},p_{2},...,p_{n} $ is lexicographically less than $ q_{1},q_{2},...,q_{n} $ if there exists such $ j $ ( $ 1<=j<=n $ ) that $ p_{i}=q_{i} $ for all $ 1<=i&lt;j $ , аnd $ p_{j}&lt;q_{j} $ .

## 输入输出样例

### 输入样例 #1

```cpp
5
3 2
4 4 5 4 4

```
### 输出样例 #1

```cpp
1 1 2 1 2 
```


### 输入样例 #2

```cpp
4
2 2
3 5 4 5

```
### 输出样例 #2

```cpp
1 1 2 2 
```


### 输入样例 #3

```cpp
6
1 5
4 4 4 5 4 4

```
### 输出样例 #3

```cpp
2 2 2 1 2 2 
```


## 说明

In the first sample the average score in the first subject is equal to 4, and in the second one — to 4.5. The total average score is 8.5.

