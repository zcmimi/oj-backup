# Polycarp&#039;s Picture Gallery

## 题目描述

Polycarp loves not only to take pictures, but also to show his photos to friends. On his personal website he has recently installed a widget that can display $ n $ photos with the scroll option. At each moment of time the widget displays exactly one photograph with the option showing the previous/next one. From the first photo, you can switch to the second one or to the $ n $ -th one, from the second photo you can switch to the third one or to the first one, etc. Thus, navigation is performed in a cycle.

Polycarp's collection consists of $ m $ photo albums, the $ i $ -th album contains $ a_{i} $ photos. Polycarp wants to choose $ n $ photos and put them on a new widget. To make watching the photos interesting to the visitors, he is going to post pictures so that no two photos from one album were neighboring (each photo will have exactly two neighbors, the first photo's neighbors are the second and the $ n $ -th one).

Help Polycarp compile a photo gallery. Select $ n $ photos from his collection and put them in such order that no two photos from one album went one after the other.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 3<=n<=1000 $ , $ 1<=m<=40 $ ), where $ n $ is the number of photos on the widget, and $ m $ is the number of albums. The second line contains $ m $ integers $ a_{1},a_{2},...,a_{m} $ ( $ 1<=a_{i}<=1000 $ ), where $ a_{i} $ is the number of photos in the $ i $ -th album.

### 输出格式

Print the single number -1 if there is no solution. Otherwise, print $ n $ numbers $ t_{1},t_{2},...,t_{n} $ , where $ t_{i} $ represents the number of the album of the $ i $ -th picture in the widget. The albums are numbered from 1 in the order of their appearance in the input. If there are several solutions, print any of them.

## 输入输出样例

### 输入样例 #1

```cpp
4 3
1 3 5

```
### 输出样例 #1

```cpp
3 1 3 2

```
### 输入样例 #2

```cpp
10 2
5 5

```
### 输出样例 #2

```cpp
2 1 2 1 2 1 2 1 2 1

```
### 输入样例 #3

```cpp
10 3
1 10 3

```
### 输出样例 #3

```cpp
-1

```
