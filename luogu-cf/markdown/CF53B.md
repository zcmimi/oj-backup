# Blog Photo

## 题意翻译

题目描述

某博客的照片上传功能如下：

对于一张原照片，系统会裁剪其中的一个矩形部分上传，这个矩形部分被称为“上传矩形”。上传矩形的宽高比的合法取值范围为0.8至1.25。另外，上传矩形至少要有一条边的长度等于2^x（x为整数）且各边长度都为正整数。

现在给出原照片的高度h和宽度w，请你求出一个最大面积合法上传矩形，并给出它的高和宽。

输入输出格式

输入格式：

一行，两个整数h和w，分别表示原照片的高和宽。(1<=h,w<=10^9)

输出格式：

一行，两个整数，分别表示上传矩形的高和宽。

Translated by John_Fu

## 题目描述

One popular blog site edits the uploaded photos like this. It cuts a rectangular area out of them so that the ratio of height to width (i.e. the $ height/width $ quotient) can vary from 0.8 to 1.25 inclusively. Besides, at least one side of the cut area should have a size, equal to some power of number 2 ( $ 2^{x} $ for some integer $ x $ ). If those rules don't indicate the size of the cut are clearly, then the way with which the cut part possesses the largest area is chosen. Of course, both sides of the cut area should be integer. If there are several answers to this problem, you should choose the answer with the maximal height.

## 输入输出格式

### 输入格式

The first line contains a pair of integers $ h $ and $ w $ ( $ 1<=h,w<=10^{9} $ ) which are the height and width of the uploaded photo in pixels.

### 输出格式

Print two integers which are the height and width of the cut area.

## 输入输出样例

### 输入样例 #1

```cpp
2 1

```
### 输出样例 #1

```cpp
1 1

```
### 输入样例 #2

```cpp
2 2

```
### 输出样例 #2

```cpp
2 2

```
### 输入样例 #3

```cpp
5 5

```
### 输出样例 #3

```cpp
5 4

```
