# Page Numbers

## 题意翻译

《Bersoft》公司正在致力于开发一款新的编译器，当然，开发一款编译器有很多步骤，公司命令你完成接下来的任务。

用户会输入一串数字，用逗号分割，你的任务就是把这些数字统计出来（不考虑重复的数字），如果出现类似这样$a,a+1,a+2,a+3,\cdots ,a+n$ 的一串数字，你需要把它表示成a - a+n这种形式，单独的数字就不必处理了。

# 输入输出格式

### 输入格式

只有一行，用逗号分隔开的一串正整数序列。不会超过$100$ 个，每个数字大小不会超过$1000$

### 输出格式

也只有一行，输出经过统计的数列。

感谢@2016wudi 提供的翻译

## 题目描述

«Bersoft» company is working on a new version of its most popular text editor — Bord 2010. Bord, like many other text editors, should be able to print out multipage documents. A user keys a sequence of the document page numbers that he wants to print out (separates them with a comma, without spaces).

Your task is to write a part of the program, responsible for «standardization» of this sequence. Your program gets the sequence, keyed by the user, as input. The program should output this sequence in format $ l_{1} $ - $ r_{1} $ , $ l_{2} $ - $ r_{2} $ ,..., $ l_{k} $ - $ r_{k} $ , where $ r_{i}+1<l_{i+1} $ for all $ i $ from $ 1 $ to $ k-1 $ , and $ l_{i}<=r_{i} $ . The new sequence should contain all the page numbers, keyed by the user, and nothing else. If some page number appears in the input sequence several times, its appearances, starting from the second one, should be ignored. If for some element $ i $ from the new sequence $ l_{i}=r_{i} $ , this element should be output as $ l_{i} $ , and not as « $ l_{i}-l_{i} $ ». For example, sequence 1,2,3,1,1,2,6,6,2 should be output as 1-3,6.

## 输入输出格式

### 输入格式

The only line contains the sequence, keyed by the user. The sequence contains at least one and at most 100 positive integer numbers. It's guaranteed, that this sequence consists of positive integer numbers, not exceeding 1000, separated with a comma, doesn't contain any other characters, apart from digits and commas, can't end with a comma, and the numbers don't contain leading zeroes. Also it doesn't start with a comma or contain more than one comma in a row.

### 输出格式

Output the sequence in the required format.

## 输入输出样例

### 输入样例 #1

```cpp
1,2,3,1,1,2,6,6,2

```
### 输出样例 #1

```cpp
1-3,6

```
### 输入样例 #2

```cpp
3,2,1

```
### 输出样例 #2

```cpp
1-3

```
### 输入样例 #3

```cpp
30,20,10

```
### 输出样例 #3

```cpp
10,20,30

```
