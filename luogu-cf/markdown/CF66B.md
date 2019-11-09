# Petya and Countryside

## 题意翻译

Little Petya需要给花园浇水。花园是$1\times n (1\leq n\leq 1000)$的长方形。每块地有一个高度。他会选择一块地方浇水，如果与这块地相邻的区域的高度小于等于这块地的高度，水就可以流过去，直到不能流为止。求他一次最多可以浇灌多少块地。

## 题目描述

Little Petya often travels to his grandmother in the countryside. The grandmother has a large garden, which can be represented as a rectangle $ 1×n $ in size, when viewed from above. This rectangle is divided into $ n $ equal square sections. The garden is very unusual as each of the square sections possesses its own fixed height and due to the newest irrigation system we can create artificial rain above each section.

Creating artificial rain is an expensive operation. That's why we limit ourselves to creating the artificial rain only above one section. At that, the water from each watered section will flow into its neighbouring sections if their height does not exceed the height of the section. That is, for example, the garden can be represented by a $ 1×5 $ rectangle, where the section heights are equal to 4, 2, 3, 3, 2. Then if we create an artificial rain over any of the sections with the height of 3, the water will flow over all the sections, except the ones with the height of 4. See the illustration of this example at the picture:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF66B/9a7bf3e55f07a79a8c55bac4c2b87a72e9e3e5af.png)As Petya is keen on programming, he decided to find such a section that if we create artificial rain above it, the number of watered sections will be maximal. Help him.

## 输入输出格式

### 输入格式

The first line contains a positive integer $ n $ ( $ 1<=n<=1000 $ ). The second line contains $ n $ positive integers which are the height of the sections. All the numbers are no less than 1 and not more than 1000.

### 输出格式

Print a single number, the maximal number of watered sections if we create artificial rain above exactly one section.

## 输入输出样例

### 输入样例 #1

```cpp
1
2

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
5
1 2 1 2 1

```
### 输出样例 #2

```cpp
3

```
### 输入样例 #3

```cpp
8
1 2 1 1 1 3 3 4

```
### 输出样例 #3

```cpp
6

```
