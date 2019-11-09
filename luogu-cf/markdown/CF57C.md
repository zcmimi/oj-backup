# Array

## 题意翻译

描述

对于长度为n的数组A，A中只包含从1到n的整数（可重复）。如果A单调不上升或单调不下降，A就可称为美丽的。

找出在长度为n时，有几个美丽的A。

输入

一个整数n,(1<=n<=10^5)

输出

输出长度为n时，有几个美丽的A，由于答案可能非常的大，输出时需要将答案对1000000007取模.

Translated by KethGeorge

## 题目描述

Chris the Rabbit has been interested in arrays ever since he was a child. At the moment he is researching arrays with the length of $ n $ , containing only integers from $ 1 $ to $ n $ . He is not good at math, that's why some simple things drive him crazy. For example, yesterday he grew keen on counting how many different beautiful arrays there are. Chris thinks that an array is beautiful if it meets one of the two conditions:

- each elements, starting from the second one, is no more than the preceding one

- each element, starting from the second one, is no less than the preceding one

Having got absolutely mad at himself and at math, Chris came to Stewie and Brian to ask them for help. However, they only laughed at him and said that the answer is too simple and not interesting. Help Chris the Rabbit to find the answer at last.

## 输入输出格式

### 输入格式

The single line contains an integer $ n $ which is the size of the array ( $ 1<=n<=10^{5} $ ).

### 输出格式

You must print the answer on a single line. As it can be rather long, you should print it modulo $ 1000000007 $ .

## 输入输出样例

### 输入样例 #1

```cpp
2

```
### 输出样例 #1

```cpp
4

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
17

```
