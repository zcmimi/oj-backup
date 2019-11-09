# How Many Squares?

## 题意翻译

# 题目描述

你有一个01矩阵。里面有多少个正方形？其中正方形的边用1表示。我们现在只对这些正方形感兴趣：

第一种：每条边与矩阵的边平行的正方形；

第二种：每条边与矩阵的对角线平行的正方形。

例如下面的正方形有且只有一个正方形（第一种）:

```cpp

0000000

0111100

0100100

0100100

0111100

```

下面的正方形有且只有一个正方形（第二种）:

```cpp

0000000

0010000

0101000

0010000

0000000

```

一个正方形必须包含一个0而且边和角不能接触别的正方形。当然，这是一个**正方形**，每条边的长度应该相等。

矩阵里有多少个正方形？

# 输入输出格式

# 输入格式：

第一行是一个整数t(1<=t<=10000)，表示这个测试点测试数据的组数。接下来是每组测试数据。每组测试数据的第一行有两个整数n和m (2<=n,m<=250)，n是行数m是列数。接下来n行每行m 个字符(0或1)。

每组测试数据字符总数不超过$10^{6}$。

对任何测试点都适用。

# 输出格式：

输出正好t行，对应每组测试数据的答案。

# 输入输出样例

## 输入样例#1：

```cpp

2

8 8

00010001

00101000

01000100

10000010

01000100

00101000

11010011

11000011

10 10

1111111000

1000001000

1011001000

1011001010

1000001101

1001001010

1010101000

1001001000

1000001000

1111111000

```

## 输出样例#1：

```cpp

1

2

```

## 输入样例#2：

```cpp

1

12 11

11111111111

10000000001

10111111101

10100000101

10101100101

10101100101

10100000101

10100000101

10111111101

10000000001

11111111111

00000000000

```

## 输出样例#2：

```cpp

3

```

感谢@rose_ 提供的翻译

## 题目描述

You are given a 0-1 rectangular matrix. What is the number of squares in it? A square is a solid square frame (border) with linewidth equal to 1. A square should be at least $ 2×2 $ . We are only interested in two types of squares:

1. squares with each side parallel to a side of the matrix;

2. squares with each side parallel to a diagonal of the matrix.

For example the following matrix contains only one square of the first type:

```

0000000

0111100

0100100

0100100

0111100

```

The following matrix contains only one square of the second type:

```

0000000

0010000

0101000

0010000

0000000

```

Regardless of type, a square must contain at least one 1 and can't touch (by side or corner) any foreign 1. Of course, the lengths of the sides of each square should be equal.

How many squares are in the given matrix?

## 输入输出格式

### 输入格式

The first line contains integer $ t $ ( $ 1<=t<=10000 $ ), where $ t $ is the number of test cases in the input. Then test cases follow. Each case starts with a line containing integers $ n $ and $ m $ ( $ 2<=n,m<=250 $ ), where $ n $ is the number of rows and $ m $ is the number of columns. The following $ n $ lines contain $ m $ characters each (0 or 1).

The total number of characters in all test cases doesn't exceed $ 10^{6} $ for any input file.

### 输出格式

You should output exactly $ t $ lines, with the answer to the $ i $ -th test case on the $ i $ -th line.

## 输入输出样例

### 输入样例 #1

```cpp
2
8 8
00010001
00101000
01000100
10000010
01000100
00101000
11010011
11000011
10 10
1111111000
1000001000
1011001000
1011001010
1000001101
1001001010
1010101000
1001001000
1000001000
1111111000

```
### 输出样例 #1

```cpp
1
2

```
### 输入样例 #2

```cpp
1
12 11
11111111111
10000000001
10111111101
10100000101
10101100101
10101100101
10100000101
10100000101
10111111101
10000000001
11111111111
00000000000

```
### 输出样例 #2

```cpp
3

```
