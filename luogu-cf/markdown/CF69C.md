# Game

## 题目描述

In one school with Vasya there is a student Kostya. Kostya does not like physics, he likes different online games. Every day, having come home, Kostya throws his bag in the farthest corner and sits down at his beloved computer. Kostya even eats glued to the game. A few days ago Kostya bought a new RPG game "HaresButtle", which differs from all other games in this genre. It has a huge number of artifacts. As we know, artifacts are divided into basic and composite ones. Only the basic artifacts are available on sale. More powerful composite artifacts are collected from some number of basic artifacts.

After the composing composite artifact, all the components disappear.

Kostya is the head of the alliance, so he has to remember, what artifacts has not only himself, but also his allies. You must identify by sequence of artifacts purchased by Kostya and his allies, how many and which artifacts has been collected by each of them. It is believed that initially no one has any artifacts.

## 输入输出格式

### 输入格式

The first line has 4 natural numbers: $ k $ ( $ 1<=k<=100 $ ) — the number of Kostya's allies, $ n $ ( $ 1<=n<=50 $ ) — the number of basic artifacts, $ m $ ( $ 0<=m<=50 $ ) — the number of composite artifacts, $ q $ ( $ 1<=q<=500 $ ) — the number of his friends' purchases. The following $ n $ lines contain the names of basic artifacts. After them $ m $ lines contain the descriptions of composite artifacts in the following format:

:  ,  , ...  

All the numbers are natural numbers not exceeding 100 ( $ 1<=X

The names of all artifacts are different, they are composed of lowercase Latin letters, and the length of each name is from 1 to 100 characters inclusive. All the words in the format of the description of a composite artifact are separated by exactly one space. It is guaranteed that all components of the new artifact are different and have already been met in the input data as the names of basic artifacts.

Next, each of the following $ q $ lines is characterized by the number $ a_{i} $ , the number of a friend who has bought the artifact ( $ 1<=a_{i}<=k $ ), and the name of the purchased basic artifact. Let's assume that the backpacks of the heroes are infinitely large and any artifact bought later can fit in there.

It is guaranteed that after the $ i $ -th purchase no more than one opportunity to collect the composite artifact appears. If such an opportunity arose, the hero must take advantage of it.

### 输出格式

The output file should consist of $ k $ blocks. The first line should contain number $ b_{i} $ — the number of different artifacts the $ i $ -th ally has. Then the block should contain $ b_{i} $ lines with the names of these artifacts and the number of these artifacts. At that the lines should be printed in accordance with the lexicographical order of the names of the artifacts. In each block all the artifacts must be different, and all the numbers except the $ b_{i} $ should be positive.

## 输入输出样例

### 输入样例 #1

```cpp
2 3 2 5
desolator
refresher
perseverance
vanguard: desolator 1, refresher 1
maelstorm: perseverance 2
1 desolator
2 perseverance
1 refresher
2 desolator
2 perseverance

```
### 输出样例 #1

```cpp
1
vanguard 1
2
desolator 1
maelstorm 1

```
