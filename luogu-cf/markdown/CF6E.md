# Exposition

## 题意翻译

题意：

给一个n个元素的序列，从中挑出最长的子序列，要求子序列中元素差的最大值不超过k。问有几个最长子序列，子序列长度，以及这几个子序起始、终止位置。

输入

输入数据的第一行n(1≤n≤$10^5$)表示有n个元素，k(0≤k≤$10^6$)是最大允许的差；第二行包含由空格隔开的n个整数。每个数字hi(1≤hi≤$10^6$)是第i个元素的值

输出

第一行两个数字是其中最长的序列长度a 和 序列的个数b（用空格分隔）。

然后下面的b行，输出表示每个序列的起始与终止的位置(空格分隔)，每一组数据一换行。

Translated by @liyifeng 

## 题目描述

There are several days left before the fiftieth birthday of a famous Berland's writer Berlbury. In this connection the local library decided to make an exposition of the works of this famous science-fiction writer. It was decided as well that it is necessary to include into the exposition only those books that were published during a particular time period. It is obvious that if the books differ much in size, the visitors will not like it. That was why the organizers came to the opinion, that the difference between the highest and the lowest books in the exposition should be not more than $ k $ millimeters.

The library has $ n $ volumes of books by Berlbury, arranged in chronological order of their appearance. The height of each book in millimeters is know, it is $ h_{i} $ . As Berlbury is highly respected in the city, the organizers want to include into the exposition as many books as possible, and to find out what periods of his creative work they will manage to cover. You are asked to help the organizers cope with this hard task.

## 输入输出格式

### 输入格式

The first line of the input data contains two integer numbers separated by a space $ n $ ( $ 1<=n<=10^{5} $ ) and $ k $ ( $ 0<=k<=10^{6} $ ) — the amount of books by Berlbury in the library, and the maximum allowed height difference between the lowest and the highest books. The second line contains $ n $ integer numbers separated by a space. Each number $ h_{i} $ ( $ 1<=h_{i}<=10^{6} $ ) is the height of the $ i $ -th book in millimeters.

### 输出格式

In the first line of the output data print two numbers $ a $ and $ b $ (separate them by a space), where $ a $ is the maximum amount of books the organizers can include into the exposition, and $ b $ — the amount of the time periods, during which Berlbury published $ a $ books, and the height difference between the lowest and the highest among these books is not more than $ k $ milllimeters.

In each of the following $ b $ lines print two integer numbers separated by a space — indexes of the first and the last volumes from each of the required time periods of Berlbury's creative work.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
14 12 10

```
### 输出样例 #1

```cpp
2 2
1 2
2 3

```
### 输入样例 #2

```cpp
2 0
10 10

```
### 输出样例 #2

```cpp
2 1
1 2

```
### 输入样例 #3

```cpp
4 5
8 19 10 13

```
### 输出样例 #3

```cpp
2 1
3 4

```
