# Fish

## 题意翻译

题目描述

有n条鱼，编号从1到n，住在湖里。每天有一对鱼相遇，

彼此相遇的概率是一样的。如果两条标号为i和j的鱼见面，第一只吃了第二只的概率为$a_{i,j}$，第二只会吃了第一只的概率为$a_{j,i}$=$1-a_{i,j}$。 所描述的过程继续进行，直到湖里只剩下一条鱼。请你算出每只鱼最后存活在湖里的可能性。

输入格式

第一行包含整数n( 1<=n<=18)--湖里的鱼数量。接下来n行为实数矩阵a，其中$a_{i,j}$代表相遇时第i条鱼吃掉第j条的概率。数据保证主对角线上只包含0，且$a_{j,i}$=$1-a_{i,j}$。每个实数小数点后只有6位。

输出格式

输出n个六位小数，以空格隔开，其中第i个表示第i条鱼存活到最后的概率。

## 题目描述

 $ n $ fish, numbered from $ 1 $ to $ n $ , live in a lake. Every day right one pair of fish meet, and the probability of each other pair meeting is the same. If two fish with indexes i and j meet, the first will eat up the second with the probability $ a_{ij} $ , and the second will eat up the first with the probability $ a_{ji}=1-a_{ij} $ . The described process goes on until there are at least two fish in the lake. For each fish find out the probability that it will survive to be the last in the lake.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=18 $ ) — the amount of fish in the lake. Then there follow $ n $ lines with $ n $ real numbers each — matrix $ a $ . $ a_{ij} $ ( $ 0<=a_{ij}<=1 $ ) — the probability that fish with index $ i $ eats up fish with index $ j $ . It's guaranteed that the main diagonal contains zeros only, and for other elements the following is true: $ a_{ij}=1-a_{ji} $ . All real numbers are given with not more than 6 characters after the decimal point.

### 输出格式

Output $ n $ space-separated real numbers accurate to not less than 6 decimal places. Number with index $ i $ should be equal to the probability that fish with index $ i $ will survive to be the last in the lake.

## 输入输出样例

### 输入样例 #1

```cpp
2
0 0.5
0.5 0

```
### 输出样例 #1

```cpp
0.500000 0.500000 
```


### 输入样例 #2

```cpp
5
0 1 1 1 1
0 0 0.5 0.5 0.5
0 0.5 0 0.5 0.5
0 0.5 0.5 0 0.5
0 0.5 0.5 0.5 0

```
### 输出样例 #2

```cpp
1.000000 0.000000 0.000000 0.000000 0.000000 
```


