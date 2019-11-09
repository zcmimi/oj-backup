# Lucky Numbers (easy)

## 题意翻译

super lucky number是只含有4，7且4的位数等于7的位数的数字；寻找大于等于n的super lucky number

## 题目描述

Petya loves lucky numbers. Everybody knows that positive integers are lucky if their decimal representation doesn't contain digits other than $ 4 $ and $ 7 $ . For example, numbers $ 47 $ , $ 744 $ , $ 4 $ are lucky and $ 5 $ , $ 17 $ , $ 467 $ are not.

Lucky number is super lucky if it's decimal representation contains equal amount of digits $ 4 $ and $ 7 $ . For example, numbers $ 47 $ , $ 7744 $ , $ 474477 $ are super lucky and $ 4 $ , $ 744 $ , $ 467 $ are not.

One day Petya came across a positive integer $ n $ . Help him to find the least super lucky number which is not less than $ n $ .

## 输入输出格式

### 输入格式

The only line contains a positive integer $ n $ ( $ 1<=n<=10^{9} $ ). This number doesn't have leading zeroes.

### 输出格式

Output the least super lucky number that is more than or equal to $ n $ .

Please, do not use the %lld specificator to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specificator.

## 输入输出样例

### 输入样例 #1

```cpp
4500

```
### 输出样例 #1

```cpp
4747

```
### 输入样例 #2

```cpp
47

```
### 输出样例 #2

```cpp
47

```
