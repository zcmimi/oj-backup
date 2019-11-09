# Moon Craters

## 题意翻译

在一条直线上有n个圆，分别以c[i]为圆心，r[i]为半径。

如果两个圆属于相离、相切、包含关系时，这两个圆可以放在一起，求最多能有多少个圆同时放在一起，输出个数，并在第二行分别输出它们的序号，序号无需排序。

## 题目描述

There are lots of theories concerning the origin of moon craters. Most scientists stick to the meteorite theory, which says that the craters were formed as a result of celestial bodies colliding with the Moon. The other version is that the craters were parts of volcanoes.

An extraterrestrial intelligence research specialist professor Okulov (the namesake of the Okulov, the author of famous textbooks on programming) put forward an alternate hypothesis. Guess what kind of a hypothesis it was –– sure, the one including extraterrestrial mind involvement. Now the professor is looking for proofs of his hypothesis.

Professor has data from the moon robot that moves linearly in one direction along the Moon surface. The moon craters are circular in form with integer-valued radii. The moon robot records only the craters whose centers lay on his path and sends to the Earth the information on the distance from the centers of the craters to the initial point of its path and on the radii of the craters.

According to the theory of professor Okulov two craters made by an extraterrestrial intelligence for the aims yet unknown either are fully enclosed one in the other or do not intersect at all. Internal or external tangency is acceptable. However the experimental data from the moon robot do not confirm this theory! Nevertheless, professor Okulov is hopeful. He perfectly understands that to create any logical theory one has to ignore some data that are wrong due to faulty measuring (or skillful disguise by the extraterrestrial intelligence that will be sooner or later found by professor Okulov!) That’s why Okulov wants to choose among the available crater descriptions the largest set that would satisfy his theory.

## 输入输出格式

### 输入格式

The first line has an integer $ n $ ( $ 1<=n<=2000 $ ) — the number of discovered craters. The next $ n $ lines contain crater descriptions in the " $ c_{i} $ $ r_{i} $ " format, where $ c_{i} $ is the coordinate of the center of the crater on the moon robot’s path, $ r_{i} $ is the radius of the crater. All the numbers $ c_{i} $ and $ r_{i} $ are positive integers not exceeding $ 10^{9} $ . No two craters coincide.

### 输出格式

In the first line output the number of craters in the required largest set. In the next line output space-separated numbers of craters that this set consists of. The craters are numbered from $ 1 $ to $ n $ in the order in which they were given in the input data. The numbers may be output in any order. If the result is not unique, output any.

## 输入输出样例

### 输入样例 #1

```cpp
4
1 1
2 2
4 1
5 1

```
### 输出样例 #1

```cpp
3
1 2 4

```
