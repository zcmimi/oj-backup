# Comb

## 题意翻译

### 题面描述

克服所有困难以后，劳拉发现她在一间有宝藏的屋子里。令她惊讶的是，那里没有堆积成山的金子。环顾四周，她注意到在地面上有一个大小为 $n\times m$ 个格子的桌子，桌子的每个格子上有一个数字。墙边有无数石头。桌边的柱子上有一条告示。告示上说，为了拿到宝藏，对桌子的每一行都必须选择从第一个格子开始连续的几个格子（不能为0）并且将石头放在上面，将这些格子压下去。那之后她会得到很多金币，数目等同于所有压下去的格子上的数字之和。劳拉很快决定了如何放置石头，但在她开始之前她注意到了告示下面的一行小字。根据这行字，为了不让天花板掉下来并砸死探险者，探险者选择的格子要形成一个`Comb`。如果令 $c_i$ 表示第 $i$ 行选择的格子数量，那么选择的格子能形成一个`Comb`当且仅当 $c_1>c_2c_4\ldots$ ，就是相邻的不等号方向不同。现在劳拉很迷惑，停止了思考，不知道要怎么做。帮她判断她最多能获得多少金币，同时活下来。

### 简要题意

有 $n\times m$ 个数组成一个矩阵，第 $i$ 行选择前 $c_i>0$ 个数 $a_{i,1},a_{i,2},\ldots,a_{i,c_i}$ ，问满足 $c_1>c_2c_4\ldots$ 的前提下 $\sum_{i=1}^n\sum_{j=1}^{c_i}a_{i,j}$ 的最大值是多少。

### 输入格式

第一行两个数 $n,m(n,m\leq 1500)$ ，描述矩阵大小。

接下来 $n$ 行，每行 $m$ 个数，描述这个矩阵。出现的每个数字不超过 $10000$ 。

### 输出格式

一行一个整数，表示简要题意中式子的最大值。

## 题目描述

Having endured all the hardships, Lara Croft finally found herself in a room with treasures. To her surprise she didn't find golden mountains there. Lara looked around and noticed on the floor a painted table $ n×m $ panels in size with integers written on the panels. There also was a huge number of stones lying by the wall. On the pillar near the table Lara found a guidance note which said that to get hold of the treasures one has to choose some non-zero number of the first panels in each row of the table and put stones on all those panels to push them down. After that she will receive a number of golden coins equal to the sum of numbers written on the chosen panels. Lara quickly made up her mind on how to arrange the stones and was about to start when she noticed an addition to the note in small font below. According to the addition, for the room ceiling not to crush and smash the adventurer, the chosen panels should form a comb. It was explained that the chosen panels form a comb when the sequence $ c_{1},c_{2},...,c_{n} $ made from the quantities of panels chosen in each table line satisfies the following property: $ c_{1}&gt;c_{2}&lt;c_{3}&gt;c_{4}&lt;... $ , i.e. the inequation mark interchanges between the neighboring elements. Now Lara is bewildered and doesn't know what to do. Help her to determine the largest number of coins she can get and survive at the same time.

## 输入输出格式

### 输入格式

The first line contains a pair of integers $ n,m $ ( $ 2<=n,m<=1500 $ ). Next $ n $ lines contain $ m $ integers each — that is the table itself. The absolute value of the numbers in the table does not exceed $ 10000 $ .

### 输出格式

Print the single number — the maximum number of coins Lara can get.

## 输入输出样例

### 输入样例 #1

```cpp
2 2
-1 2
1 3

```
### 输出样例 #1

```cpp
2

```
