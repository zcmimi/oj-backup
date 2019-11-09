# Dividing Island

## 题目描述

A revolution took place on the Buka Island. New government replaced the old one. The new government includes $ n $ parties and each of them is entitled to some part of the island according to their contribution to the revolution. However, they can't divide the island.

The island can be conventionally represented as two rectangles $ a×b $ and $ c×d $ unit squares in size correspondingly. The rectangles are located close to each other. At that, one of the sides with the length of $ a $ and one of the sides with the length of $ c $ lie on one line. You can see this in more details on the picture.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF63D/d0dfe8fb20d3bd76651bd208632c7ccbf8e3af11.png)The $ i $ -th party is entitled to a part of the island equal to $ x_{i} $ unit squares. Every such part should fully cover several squares of the island (it is not allowed to cover the squares partially) and be a connected figure. A "connected figure" presupposes that from any square of this party one can move to any other square of the same party moving through edge-adjacent squares also belonging to that party.

Your task is to divide the island between parties.

## 输入输出格式

### 输入格式

The first line contains 5 space-separated integers — $ a $ , $ b $ , $ c $ , $ d $ and $ n $ ( $ 1<=a,b,c,d<=50 $ , $ b≠d $ , $ 1<=n<=26 $ ). The second line contains $ n $ space-separated numbers. The $ i $ -th of them is equal to number $ x_{i} $ ( $ 1<=x_{i}<=a×b+c×d $ ). It is guaranteed that ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF63D/e1826e0bca0e4aef8f77e22fd146f0cb74f4209c.png).

### 输出格式

If dividing the island between parties in the required manner is impossible, print "NO" (without the quotes). Otherwise, print "YES" (also without the quotes) and, starting from the next line, print $ max(b,d) $ lines each containing $ a+c $ characters. To mark what square should belong to what party, use lowercase Latin letters. For the party that is first in order in the input data, use "a", for the second one use "b" and so on. Use "." for the squares that belong to the sea. The first symbol of the second line of the output data should correspond to the square that belongs to the rectangle $ a×b $ . The last symbol of the second line should correspond to the square that belongs to the rectangle $ c×d $ .

If there are several solutions output any.

## 输入输出样例

### 输入样例 #1

```cpp
3 4 2 2 3
5 8 3

```
### 输出样例 #1

```cpp
YES
aaabb
aabbb
cbb..
ccb..

```
### 输入样例 #2

```cpp
3 2 1 4 4
1 2 3 4

```
### 输出样例 #2

```cpp
YES
abbd
cccd
...d
...d

```
