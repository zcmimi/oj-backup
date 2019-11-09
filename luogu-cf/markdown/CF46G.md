# Emperor&#039;s Problem

## 题目描述

It happened at the times of the Great Berland Empire. Once the Emperor dreamt that the Messenger from the gods ordered to build a temple whose base would be a convex polygon with $ n $ angles. Next morning the Emperor gave the command to build a temple whose base was a regular polygon with $ n $ angles. The temple was built but soon the Empire was shaken with disasters and crop failures. After an earthquake destroyed the temple, the Emperor understood that he somehow caused the wrath of gods to fall on his people. He ordered to bring the wise man. When the wise man appeared, the Emperor retold the dream to him and asked "Oh the wisest among the wisest, tell me how could I have infuriated the Gods?". "My Lord," the wise man answered. "As far as I can judge, the gods are angry because you were too haste to fulfill their order and didn't listen to the end of the message".

Indeed, on the following night the Messenger appeared again. He reproached the Emperor for having chosen an imperfect shape for the temple. "But what shape can be more perfect than a regular polygon!?" cried the Emperor in his dream. To that the Messenger gave a complete and thorough reply.

- All the vertices of the polygon should be positioned in the lattice points.

- All the lengths of its sides should be different.

- From the possible range of such polygons a polygon which maximum side is minimal possible must be chosen.

You are an obedient architect who is going to make the temple's plan. Note that the polygon should be simple (having a border without self-intersections and overlapping) and convex, however, it is acceptable for three consecutive vertices to lie on the same line.

## 输入输出格式

### 输入格式

The first line contains the single number $ n $ ( $ 3<=n<=10000 $ ).

### 输出格式

Print "YES" (without quotes) in the first line if it is possible to build a polygon possessing the needed qualities. In the next $ n $ lines print integer coordinates of the polygon vertices in the order in which they would be passed counter clockwise. The absolute value of the coordinates shouldn't exceed $ 10^{9} $ . No two vertices can coincide. It is permitted to print any of the possible solutions. Print "NO" if to build the polygon is impossible.

## 输入输出样例

### 输入样例 #1

```cpp
3

```
### 输出样例 #1

```cpp
YES
0 0
1 0
0 2

```
### 输入样例 #2

```cpp
3

```
### 输出样例 #2

```cpp
YES
0 1
-1 0
-1 -1

```
