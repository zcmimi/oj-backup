# Lucky Numbers

## 题意翻译

## 题目描述

Petya 非常喜爱幸运数字。大家都知道如果一个十进制正整数的各个数位中不包含除4或7以外的数，那么它就是幸运的。例如，47,774,4是幸运的，而5,17,467则不是。

当一个十进制幸运数字中含有4和7的数量相同时，这个幸运数字就是超级幸运的。例如，47,7744,474477是超级幸运的，而4,744,467则不是。

一天Petya偶然发现了一个正整数n。请帮他找出不小于n的最小的超级幸运数字。

## 输入输出格式

### 输入格式：

输入一个正整数n，这个数字没有先导0

### 输出格式：

输出大于或等于n的最小的超级幸运数字

感谢@EAT_NH4HCO3 提供翻译

## 题目描述

Petya loves lucky numbers. Everybody knows that positive integers are lucky if their decimal representation doesn't contain digits other than $ 4 $ and $ 7 $ . For example, numbers $ 47 $ , $ 744 $ , $ 4 $ are lucky and $ 5 $ , $ 17 $ , $ 467 $ are not.

Lucky number is super lucky if it's decimal representation contains equal amount of digits $ 4 $ and $ 7 $ . For example, numbers $ 47 $ , $ 7744 $ , $ 474477 $ are super lucky and $ 4 $ , $ 744 $ , $ 467 $ are not.

One day Petya came across a positive integer $ n $ . Help him to find the least super lucky number which is not less than $ n $ .

## 输入输出格式

### 输入格式

The only line contains a positive integer $ n $ ( $ 1<=n<=10^{100000} $ ). This number doesn't have leading zeroes.

### 输出格式

Output the least super lucky number that is more than or equal to $ n $ .

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
