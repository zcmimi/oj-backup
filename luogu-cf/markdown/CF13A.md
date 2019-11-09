# Numbers

## 题意翻译

给出一整数n，计算用2~n-1进制表示n时，每一个进制下所有位上的数字的和的平均数（结果用分数表示）

注意，中间过程及输出均采用10进制

3<=N<=1000

## 题目描述

Little Petya likes numbers a lot. He found that number 123 in base 16 consists of two digits: the first is 7 and the second is 11. So the sum of digits of 123 in base 16 is equal to 18.

Now he wonders what is an average value of sum of digits of the number $ A $ written in all bases from $ 2 $ to $ A-1 $ .

Note that all computations should be done in base 10. You should find the result as an irreducible fraction, written in base 10.

## 输入输出格式

### 输入格式

Input contains one integer number $ A $ ( $ 3<=A<=1000 $ ).

### 输出格式

Output should contain required average value in format «X/Y», where X is the numerator and Y is the denominator.

## 输入输出样例

### 输入样例 #1

```cpp
5

```
### 输出样例 #1

```cpp
7/3

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
2/1

```
## 说明

In the first sample number 5 written in all bases from 2 to 4 looks so: 101, 12, 11. Sums of digits are 2, 3 and 2, respectively.

