# Petya and His Friends

## 题目描述

Little Petya has a birthday soon. Due this wonderful event, Petya's friends decided to give him sweets. The total number of Petya's friends equals to $ n $ .

Let us remind you the definition of the greatest common divisor: $ GCD(a_{1},...,a_{k})=d $ , where $ d $ represents such a maximal positive number that each $ a_{i} $ ( $ 1<=i<=k $ ) is evenly divisible by $ d $ . At that, we assume that all $ a_{i} $ 's are greater than zero.

Knowing that Petya is keen on programming, his friends has agreed beforehand that the $ 1 $ -st friend gives $ a_{1} $ sweets, the $ 2 $ -nd one gives $ a_{2} $ sweets, ..., the $ n $ -th one gives $ a_{n} $ sweets. At the same time, for any $ i $ and $ j $ ( $ 1<=i,j<=n $ ) they want the $ GCD(a_{i},a_{j}) $ not to be equal to $ 1 $ . However, they also want the following condition to be satisfied: $ GCD(a_{1},a_{2},...,a_{n})=1 $ . One more: all the $ a_{i} $ should be distinct.

Help the friends to choose the suitable numbers $ a_{1},...,a_{n} $ .

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 2<=n<=50 $ ).

### 输出格式

If there is no answer, print "-1" without quotes. Otherwise print a set of $ n $ distinct positive numbers $ a_{1},a_{2},...,a_{n} $ . Each line must contain one number. Each number must consist of not more than $ 100 $ digits, and must not contain any leading zeros. If there are several solutions to that problem, print any of them.

Do not forget, please, that all of the following conditions must be true:

- For every $ i $ and $ j $ ( $ 1<=i,j<=n $ ): $ GCD(a_{i},a_{j})≠1 $

- $ GCD(a_{1},a_{2},...,a_{n})=1 $

- For every $ i $ and $ j $ ( $ 1<=i,j<=n,i≠j $ ): $ a_{i}≠a_{j} $

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
3

```
### 输出样例 #1

```cpp
99
55
11115

```
### 输入样例 #2

```cpp
4

```
### 输出样例 #2

```cpp
385
360
792
8360

```
