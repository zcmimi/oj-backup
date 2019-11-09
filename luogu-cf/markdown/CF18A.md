# Triangle

## 题意翻译

在几何课鲍伯知道一个三角形是直角如果是非简并和它的一个角是正确的。鲍伯决定立即画出这样一个三角形：他在一张纸上用整数坐标画了三个点，然后用直线段连接起来，然后把三角形给彼得看。彼得说鲍伯的三角形不是直角，但几乎是直角：三角形本身不是直角，但可以用距离1精确移动其中一个点，所以所有的坐标都保持整数，三角形变成直角。鲍伯请你帮他，看看彼得是不是骗了他。根据三角形的给定坐标，你应该知道它是直角的，几乎是直角的，或者两者都不是。 第一行输入包含三角形顶点坐标的6个空间分隔的整数。所有坐标都是整数，绝对值不超过100。这是保证三角形非退化，即它的总面积是不是零。 如果给定的三角形是直角，输出"RIGHT"，如果它几乎是直角，输出"ALMOST"，如果不是这些，输出"NEITHER"。

翻译贡献者UID：77612

## 题目描述

At a geometry lesson Bob learnt that a triangle is called right-angled if it is nondegenerate and one of its angles is right. Bob decided to draw such a triangle immediately: on a sheet of paper he drew three points with integer coordinates, and joined them with segments of straight lines, then he showed the triangle to Peter. Peter said that Bob's triangle is not right-angled, but is almost right-angled: the triangle itself is not right-angled, but it is possible to move one of the points exactly by distance 1 so, that all the coordinates remain integer, and the triangle become right-angled. Bob asks you to help him and find out if Peter tricks him. By the given coordinates of the triangle you should find out if it is right-angled, almost right-angled, or neither of these.

## 输入输出格式

### 输入格式

The first input line contains 6 space-separated integers $ x_{1},y_{1},x_{2},y_{2},x_{3},y_{3} $ — coordinates of the triangle's vertices. All the coordinates are integer and don't exceed 100 in absolute value. It's guaranteed that the triangle is nondegenerate, i.e. its total area is not zero.

### 输出格式

If the given triangle is right-angled, output RIGHT, if it is almost right-angled, output ALMOST, and if it is neither of these, output NEITHER.

## 输入输出样例

### 输入样例 #1

```cpp
0 0 2 0 0 1

```
### 输出样例 #1

```cpp
RIGHT

```
### 输入样例 #2

```cpp
2 3 4 5 6 6

```
### 输出样例 #2

```cpp
NEITHER

```
### 输入样例 #3

```cpp
-1 0 2 0 0 1

```
### 输出样例 #3

```cpp
ALMOST

```
