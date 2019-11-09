# Frames

## 题意翻译

## 题目描述

$Igor.$ $K$在D盘中有$n$个文件夹，分别以$1$~$n$编号。

他使用的$Pindows$ $XR$系统有一个参数$m$。

在D盘中，这些文件会排成 $\left\lceil\dfrac{n}{m}\right\rceil$ 行（每行$m$个文件夹，如果剩下的不到$m$个文件夹则另占一行）。

他想删除D盘中的第$a$~$b$个文件夹。

每次删除，他需要用一个矩形框出他要删除的一个文件夹矩阵。

$Igor.$ $K$想用最少的次数删除且仅删除第$a$~$b$个文件夹。输出最少的次数。

$Tip$：由于这是神奇的$Pindows$ $XR$系统，所以被删除的文件不会消失，还会占位（但它已经被删除了）

## 输入输出格式

### 输入格式：

一行，$n$, $m$, $a$, $b$（$1$ $<=$ $n$, $m$ $<=$ $10^9$, $1$ $<=$ $a$ $<=$ $b$ $<=$ $n$）

### 输入格式：

只有一个数，最小删除次数

$\color{white}\texttt{Pindows XR。。orz}$ 

## 题目描述

Throughout Igor K.'s life he has had many situations worthy of attention. We remember the story with the virus, the story of his mathematical career and of course, his famous programming achievements. However, one does not always adopt new hobbies, one can quit something as well.

This time Igor K. got disappointed in one of his hobbies: editing and voicing videos. Moreover, he got disappointed in it so much, that he decided to destroy his secret archive for good.

Igor K. use Pindows XR operation system which represents files and folders by small icons. At that, $ m $ icons can fit in a horizontal row in any window.

Igor K.'s computer contains $ n $ folders in the D: disk's root catalog. The folders are numbered from $ 1 $ to $ n $ in the order from the left to the right and from top to bottom (see the images). At that the folders with secret videos have numbers from $ a $ to $ b $ inclusive. Igor K. wants to delete them forever, at that making as few frame selections as possible, and then pressing Shift+Delete exactly once. What is the minimum number of times Igor K. will have to select the folder in order to select folders from $ a $ to $ b $ and only them? Let us note that if some selected folder is selected repeatedly, then it is deselected. Each selection possesses the shape of some rectangle with sides parallel to the screen's borders.

## 输入输出格式

### 输入格式

The only line contains four integers $ n $ , $ m $ , $ a $ , $ b $ ( $ 1<=n,m<=10^{9} $ , $ 1<=a<=b<=n $ ). They are the number of folders in Igor K.'s computer, the width of a window and the numbers of the first and the last folders that need to be deleted.

### 输出格式

Print a single number: the least possible number of times Igor K. will have to select the folders using frames to select only the folders with numbers from $ a $ to $ b $ .

## 输入输出样例

### 输入样例 #1

```cpp
11 4 3 9

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
20 5 2 20

```
### 输出样例 #2

```cpp
2

```
## 说明

The images below illustrate statement tests.

The first test:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF93A/1c9239631cfcd86d4b5368b11001ef55126dc57f.png)

In this test we can select folders 3 and 4 with out first selection, folders 5, 6, 7, 8 with our second selection and folder 9 with our third, last selection.

The second test:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF93A/4f25fb0d3ce6fbadae355cb89312c37858fa8dfe.png)

In this test we can first select all folders in the first row (2, 3, 4, 5), then — all other ones.

