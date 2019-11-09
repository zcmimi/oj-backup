# Cutting Jigsaw Puzzle

## 题意翻译

## 题目翻译

刺猬最近记得他最喜欢的童年活动之一 - 解决谜题，并以新的活力进入它。他每天都会和他的朋友一起坐在成千上万的小片中，一个接一个地寻找所需物品。

不久，刺猬想出了一个绝妙的主意：不是购买现成的拼图，而是可以将自己的大纸张带上一些图片并将其切成许多小矩形块，然后将它们混合并解决由此产生的拼图，试图拼凑图片。由此产生的任务比经典谜题更具挑战性：现在所有碎片都具有相同的矩形形状，并且可以仅依靠在碎片上绘制的图片来组装谜题。

所有拼图都是相同的尺寸 X×Y，因为图像首先通过水平切割以间距切割 X X，然后垂直切割，间距为 Y。如果我们将图片的初始大小表示为 A×B，然后 一个 A必须可被整除X和B必须可被整除Y（X和Y是整数）。

然而，并非每次切割图片都会产生很好的拼图。刺猬发现一个谜题很好，如果其中没有两个相同（比较它们时允许旋转它们，但是禁止将它们翻过来）。

你的任务是计算给定图片你可以从中制作的好谜题的数量，并找到最小尺寸的谜题。

## 输入格式

第一行包含两个数字一个A和B是图片的大小。它们是不超过20的正整数，然后跟着实际图片，图片中只包含大写英文字母。

## 输出格式

在第一行打印可能的好谜题的数量（换句话说，对的数量 （X，Y）使得具有相应元素大小的拼图将是好的）。这个数字应该总是正数，因为整个画面本身就是一个很好的拼图。

在第二行打印两个数字 - 大小X和Y所有好谜题中最小可能元素的Y.比较首先由该面积进行XY一个元素的，其次是长度X。

翻译者：ryan_liu

## 题目描述

The Hedgehog recently remembered one of his favorite childhood activities, — solving puzzles, and got into it with new vigor. He would sit day in, day out with his friend buried into thousands of tiny pieces of the picture, looking for the required items one by one.

Soon the Hedgehog came up with a brilliant idea: instead of buying ready-made puzzles, one can take his own large piece of paper with some picture and cut it into many small rectangular pieces, then mix them and solve the resulting puzzle, trying to piece together the picture. The resulting task is even more challenging than the classic puzzle: now all the fragments have the same rectangular shape, and one can assemble the puzzle only relying on the picture drawn on the pieces.

All puzzle pieces turn out to be of the same size $ X×Y $ , because the picture is cut first by horizontal cuts with the pitch of $ X $ , then with vertical cuts with the pitch of $ Y $ . If we denote the initial size of the picture as $ A×B $ , then $ A $ must be divisible by $ X $ and $ B $ must be divisible by $ Y $ ( $ X $ and $ Y $ are integer numbers).

However, not every such cutting of the picture will result in a good puzzle. The Hedgehog finds a puzzle good if no two pieces in it are the same (It is allowed to rotate the pieces when comparing them, but it is forbidden to turn them over).

Your task is to count for a given picture the number of good puzzles that you can make from it, and also to find the puzzle with the minimal piece size.

## 输入输出格式

### 输入格式

The first line contains two numbers $ A $ and $ B $ which are the sizes of the picture. They are positive integers not exceeding 20.

Then follow $ A $ lines containing $ B $ symbols each, describing the actual picture. The lines only contain uppercase English letters.

### 输出格式

In the first line print the number of possible good puzzles (in other words, the number of pairs $ (X,Y) $ such that the puzzle with the corresponding element sizes will be good). This number should always be positive, because the whole picture is a good puzzle itself.

In the second line print two numbers — the sizes $ X $ and $ Y $ of the smallest possible element among all good puzzles. The comparison is made firstly by the area $ XY $ of one element and secondly — by the length $ X $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 4
ABDC
ABDC

```
### 输出样例 #1

```cpp
3
2 1

```
### 输入样例 #2

```cpp
2 6
ABCCBA
ABCCBA

```
### 输出样例 #2

```cpp
1
2 6

```
## 说明

The picture in the first sample test has the following good puzzles: $ (2,1) $ , $ (2,2) $ , $ (2,4) $ .

