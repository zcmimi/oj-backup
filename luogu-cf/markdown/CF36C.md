# Bowls

## 题意翻译

## 题目描述

有一次Petya心情特别好以至于他想帮妈妈洗碗。水槽中有n个脏的碗。从几何角度看，每个碗都像一个钝头的圆锥。我们可以忽略碗壁和底的厚度。Petya自然地将碗一个个碟起来，也就是说它们的中轴重合（见图）。你将得到Petya洗碗的顺序。请求出碗碟的高度，也就是从最底下的碗的底到最顶上的碗的顶的距离。

![CF36C Bowls](https://cdn.luogu.org/upload/vjudge_pic/CF36C/efa1edfc5c322f108d0b1dc2cca2e87816dc54d2.png)

## 输入输出格式

### 输入格式：

第一行输入包含整数n ( 1<=n<=3000 )。接着的n行包含三个整数h，r和R( 1<=h<=10000,1<=r<R<=10000 )。它们分别是单个碗的高度，碗底的半径和碗顶的半径。碗是以Petya将它们放在桌上的顺序给出。 ### 输出格式： 输出碗碟的高度并且至少精确到 $10^{-6}$ (注：题目中大部分时候用的是"bowl"这个词，指的是碗，但在最后变为了"plate",指的是盘子、我默认全部按碗翻译，请问是否需改变还是题目有误？)

## 题目描述

Once Petya was in such a good mood that he decided to help his mum with the washing-up. There were $ n $ dirty bowls in the sink. From the geometrical point of view each bowl looks like a blunted cone. We can disregard the width of the walls and bottom. Petya puts the clean bowls one on another naturally, i. e. so that their vertical axes coincide (see the picture). You will be given the order in which Petya washes the bowls. Determine the height of the construction, i.e. the distance from the bottom of the lowest bowl to the top of the highest one.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF36C/efa1edfc5c322f108d0b1dc2cca2e87816dc54d2.png)

## 输入输出格式

### 输入格式

The first input line contains integer $ n $ ( $ 1<=n<=3000 $ ). Each of the following $ n $ lines contains 3 integers $ h $ , $ r $ and $ R $ ( $ 1<=h<=10000,1<=r&lt;R<=10000 $ ). They are the height of a bowl, the radius of its bottom and the radius of its top. The plates are given in the order Petya puts them on the table.

### 输出格式

Output the height of the plate pile accurate to at least $ 10^{-6} $ .

## 输入输出样例

### 输入样例 #1

```cpp
2
40 10 50
60 20 30

```
### 输出样例 #1

```cpp
70.00000000

```
### 输入样例 #2

```cpp
3
50 30 80
35 25 70
40 10 90

```
### 输出样例 #2

```cpp
55.00000000

```
