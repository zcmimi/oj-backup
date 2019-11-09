# Petya and Java

## 题意翻译

有一个人想加入编程俱乐部，因为Java有BigInteger变量，所以ta选择了Java语言。

当然，不是每一次计算都要用到BigInteger，针对不同的数，可以用不同的变量类型储存，接下来ta会告诉你不同变量类型的储存范围，接下来再告诉你一个数$n$ ，要你求出能储存$n$ 的最小变量类型。

1. byte: -128~127

2. short: −32768~32767

3. int: −2147483648~2147483647

4. long:−9223372036854775808~9223372036854775807

5. BigInteger: $-∞$ ~$∞$

输入：$n$ ($-10^{100}<=n<=10^{100}$ )

输出：变量类型

感谢@____233____ 提供的翻译

## 题目描述

Little Petya has recently started attending a programming club. Naturally he is facing the problem of choosing a programming language. After long considerations he realized that Java is the best choice. The main argument in favor of choosing Java was that it has a very large integer data type, called BigInteger.

But having attended several classes of the club, Petya realized that not all tasks require using the BigInteger type. It turned out that in some tasks it is much easier to use small data types. That's why a question arises: "Which integer type to use if one wants to store a positive integer $ n $ ?"

Petya knows only 5 integer types:

1\) byte occupies 1 byte and allows you to store numbers from $ -128 $ to $ 127 $

2\) short occupies 2 bytes and allows you to store numbers from $ -32768 $ to $ 32767 $

3\) int occupies 4 bytes and allows you to store numbers from $ -2147483648 $ to $ 2147483647 $

4\) long occupies 8 bytes and allows you to store numbers from $ -9223372036854775808 $ to $ 9223372036854775807 $

5\) BigInteger can store any integer number, but at that it is not a primitive type, and operations with it are much slower.

For all the types given above the boundary values are included in the value range.

From this list, Petya wants to choose the smallest type that can store a positive integer $ n $ . Since BigInteger works much slower, Peter regards it last. Help him.

## 输入输出格式

### 输入格式

The first line contains a positive number $ n $ . It consists of no more than $ 100 $ digits and doesn't contain any leading zeros. The number $ n $ can't be represented as an empty string.

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).

### 输出格式

Print the first type from the list "byte, short, int, long, BigInteger", that can store the natural number $ n $ , in accordance with the data given above.

## 输入输出样例

### 输入样例 #1

```cpp
127

```
### 输出样例 #1

```cpp
byte

```
### 输入样例 #2

```cpp
130

```
### 输出样例 #2

```cpp
short

```
### 输入样例 #3

```cpp
123456789101112131415161718192021222324

```
### 输出样例 #3

```cpp
BigInteger

```
