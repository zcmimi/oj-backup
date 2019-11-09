# What Has Dirichlet Got to Do with That?

## 题意翻译

众所周知，抽屉原理是如果有n个盒子，n+1个物品，则必有一个盒子装了至少2个物品。

我们8岁的Stas和Masha知道了这个原理，但并不懂，于是他们发明了一种游戏。有$a$个不同的盒子和$b$个不同的物品，每次可以加一个盒子或一个物品。如果一个玩家用了不少于n次才把b个物品放进a个盒子，则他输了。如果所有盒子和物品都不同，Stas先手，问谁会赢？

（注：盒子可以空）

## 题目描述

You all know the Dirichlet principle, the point of which is that if $ n $ boxes have no less than $ n+1 $ items, that leads to the existence of a box in which there are at least two items.

Having heard of that principle, but having not mastered the technique of logical thinking, 8 year olds Stas and Masha invented a game. There are $ a $ different boxes and $ b $ different items, and each turn a player can either add a new box or a new item. The player, after whose turn the number of ways of putting $ b $ items into $ a $ boxes becomes no less then a certain given number $ n $ , loses. All the boxes and items are considered to be different. Boxes may remain empty.

Who loses if both players play optimally and Stas's turn is first?

## 输入输出格式

### 输入格式

The only input line has three integers $ a,b,n $ ( $ 1<=a<=10000 $ , $ 1<=b<=30 $ , $ 2<=n<=10^{9} $ ) — the initial number of the boxes, the number of the items and the number which constrains the number of ways, respectively. Guaranteed that the initial number of ways is strictly less than $ n $ .

### 输出格式

Output "Stas" if Masha wins. Output "Masha" if Stas wins. In case of a draw, output "Missing".

## 输入输出样例

### 输入样例 #1

```cpp
2 2 10

```
### 输出样例 #1

```cpp
Masha

```
### 输入样例 #2

```cpp
5 5 16808

```
### 输出样例 #2

```cpp
Masha

```
### 输入样例 #3

```cpp
3 1 4

```
### 输出样例 #3

```cpp
Stas

```
### 输入样例 #4

```cpp
1 4 10

```
### 输出样例 #4

```cpp
Missing

```
## 说明

In the second example the initial number of ways is equal to $ 3125 $ .

- If Stas increases the number of boxes, he will lose, as Masha may increase the number of boxes once more during her turn. After that any Stas's move will lead to defeat.

- But if Stas increases the number of items, then any Masha's move will be losing.

