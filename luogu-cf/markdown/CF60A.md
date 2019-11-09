# Where Are My Flakes?

## 题意翻译

一天早上，麦片仔发现他所有的麦片都不见了(天哪)。他发现了一张纸条而不是他的麦片。原来他聪明(xie e)的室友把雪花藏在了n个盒子里。这些盒子排成一排，从左到右编号从1到n。室友留下一些提示，像"隐藏在第i个盒子的左边"("To the left of i")，"隐藏在第i个盒子的右边"("To the right of i")。这样的提示意味着 **在i个盒子中也没有麦片**。斟酌所有的提示，麦片仔想要知道他需要检查多少个盒子才能找到麦片。或者他想知道这些暗示是矛盾的，室友对他撒谎，也就是说，盒子里没有麦片(麦片机惨)。

### 输入输出格式

#### 输入格式:

第一行包含两个整数n和m (1<=n<=1000,0<=m<=1000)(真小)，分别表示盒子的数量和提示的数量。接下来的m 行包含"To the left of i"和"To the right of i"这样的提示，其中i是整数(1<=i<=n)。这些提示可能同时出现。

#### 输出格式:

答案应该只包含一个整数(就是要检查的盒子数),如果提示是矛盾的,就输出-1。

## 题目描述

 ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF60A/7396aad68949de55b5273216065ac626c9178d96.png)One morning the Cereal Guy found out that all his cereal flakes were gone. He found a note instead of them. It turned out that his smart roommate hid the flakes in one of $ n $ boxes. The boxes stand in one row, they are numbered from $ 1 $ to $ n $ from the left to the right. The roommate left hints like "Hidden to the left of the $ i $ -th box" ("To the left of $ i $ "), "Hidden to the right of the $ i $ -th box" ("To the right of $ i $ "). Such hints mean that there are no flakes in the $ i $ -th box as well. The Cereal Guy wants to know the minimal number of boxes he necessarily needs to check to find the flakes considering all the hints. Or he wants to find out that the hints are contradictory and the roommate lied to him, that is, no box has the flakes.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 1<=n<=1000,0<=m<=1000 $ ) which represent the number of boxes and the number of hints correspondingly. Next $ m $ lines contain hints like "To the left of $ i $ " and "To the right of $ i $ ", where $ i $ is integer ( $ 1<=i<=n $ ). The hints may coincide.

### 输出格式

The answer should contain exactly one integer — the number of boxes that should necessarily be checked or "-1" if the hints are contradictory.

## 输入输出样例

### 输入样例 #1

```cpp
2 1
To the left of 2

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
3 2
To the right of 1
To the right of 2

```
### 输出样例 #2

```cpp
1

```
### 输入样例 #3

```cpp
3 1
To the left of 3

```
### 输出样例 #3

```cpp
2

```
### 输入样例 #4

```cpp
3 2
To the left of 2
To the right of 1

```
### 输出样例 #4

```cpp
-1

```
