# Black and White

## 题意翻译

题目大意：用如下图的a（全黑），b（全白），c（一个角黑，一个角白）三种1×1大小瓷砖铺一个N×M大小的地板，要求一条地板内部格子边的两边必须同黑或同白。

![](www.luogu.org/upload/pic/16880.png)

瓷砖的输出方法：

全黑：

```

##

##

```

全白：

```

..

..

```

半黑半白：

```

\#

.\

./

/#

\.

#\

#/

/.

```

（依次对应图片中的从左至右6个图案）

输入格式

第一行：两个数，表示地面的长和宽。

第二行：三个数，表示a,b,c三种瓷砖的个数。

输出格式

按要求方法将整个地板输出。

感谢@JXPGSWT_54088 提供的翻译

## 题目描述

According to the legends the king of Berland Berl I was noted for his love of beauty and order. One day he ordered to tile the palace hall's floor where balls and receptions used to take place with black and white tiles according to a regular geometrical pattern invented by him. However, as is after the case, due to low financing there were only $ a $ black and $ b $ white tiles delivered to the palace. The other $ c $ tiles were black and white (see the picture).

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF48H/9c65623eb9b5bf5301cdf29083a6378da5565d98.png)The initial plan failed! Having learned of that, the king gave a new command: tile the floor with the available tiles so that no black side of a tile touched a white one. The tiles are squares of one size $ 1×1 $ , every black and white tile can be rotated in one of the four ways.

The court programmer was given the task to work out the plan of tiling and he coped with the task and didn't suffer the consequences of disobedience. And can you cope with it?

## 输入输出格式

### 输入格式

The first line contains given integers $ n $ and $ m $ ( $ 1<=n,m=m $ .

### 输出格式

Print $ 2n $ lines containing $ 2m $ characters each — the tiling scheme. Every tile is represented by a square $ 2×2 $ in the following manner (the order corresponds to the order of the picture above):

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF48H/16fe8d02c27ac02343bfdffde6c8e84222147844.png) If multiple solutions exist, output any.

## 输入输出样例

### 输入样例 #1

```cpp
2 2
0 0 4

```
### 输出样例 #1

```cpp
&lt;span class=&quot;tex-span&quot;&gt;\&lt;/span&gt;../
#&lt;span class=&quot;tex-span&quot;&gt;\&lt;/span&gt;/#
&lt;span class=&quot;tex-span&quot;&gt;\&lt;/span&gt;##/
.&lt;span class=&quot;tex-span&quot;&gt;\&lt;/span&gt;/.

```
### 输入样例 #2

```cpp
2 3
1 2 3

```
### 输出样例 #2

```cpp
###/&lt;span class=&quot;tex-span&quot;&gt;\&lt;/span&gt;#
##/..&lt;span class=&quot;tex-span&quot;&gt;\&lt;/span&gt;
#/....
/.....

```
