# Help Victoria the Wise

## 题目描述

Vasilisa the Wise from a far away kingdom got a present from her friend Helga the Wise from a farther away kingdom. The present is a surprise box, yet Vasilisa the Wise doesn't know yet what the surprise actually is because she cannot open the box. She hopes that you can help her in that.

The box's lock is constructed like that. The box itself is represented by an absolutely perfect black cube with the identical deepening on each face (those are some foreign nanotechnologies that the far away kingdom scientists haven't dreamt of). The box is accompanied by six gems whose form matches the deepenings in the box's faces. The box can only be opened after it is correctly decorated by the gems, that is, when each deepening contains exactly one gem. Two ways of decorating the box are considered the same if they can be obtained one from the other one by arbitrarily rotating the box (note that the box is represented by a perfect nanotechnological cube)

Now Vasilisa the Wise wants to know by the given set of colors the following: in how many ways would she decorate the box in the worst case to open it? To answer this question it is useful to know that two gems of one color are indistinguishable from each other. Help Vasilisa to solve this challenging problem.

## 输入输出格式

### 输入格式

The first line contains exactly $ 6 $ characters without spaces from the set {R, O, Y, G, B, V} — they are the colors of gems with which the box should be decorated.

### 输出格式

Print the required number of different ways to decorate the box.

## 输入输出样例

### 输入样例 #1

```cpp
YYYYYY

```
### 输出样例 #1

```cpp
1

```
### 输入样例 #2

```cpp
BOOOOB

```
### 输出样例 #2

```cpp
2

```
### 输入样例 #3

```cpp
ROYGBV

```
### 输出样例 #3

```cpp
30

```
