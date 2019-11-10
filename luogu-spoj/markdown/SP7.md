# BULK - The Bulk!

## 题意翻译

ACM使用一种新的特殊技术来建造它的无线电收发站。这项技术被称为模块化长方体建筑(MCA)，并被乐高公司的专利所覆盖。收发器的所有部分都以相同大小的立方体的形式在单元块中运输。立方体可以相互连接。MCA是模块化架构，这意味着我们可以选择首选的收发器配置，只购买我们需要的组件。

立方体必须始终与“面对面”连接，即一个立方体的整个侧面与另一个立方体的整个侧面相连。一个立方体可以与至多六个其他单位相连。由此产生的设备，由单位立方体组成，在通信技术俚语中称为批量。

有时，一个旧的、不需要的大货被报废了，放到一个存放处，然后换成新的。最近发现，ACM有许多这样的老家伙，它们只是占据了空间，不再需要了。导演已经决定，所有这些大件必须拆卸下来，以节省一些空间。遗憾的是，没有关于旧的bulks的文档，也没有人知道它们的确切数量。您要编写一个计算机程序，该程序接受批量描述并计算单元数据集的数量。

每一大块都由它的面(边)来描述。一种特殊的x射线机被构造出来，它能够将空间中所有的面，甚至是内部的面都定位，因为体积可以部分是空心的(里面可以包含空的空间)。但是任何体积都必须是连接的(也就是说它不能分成两部分)并且由整个单元的立方体组成。

Translated by @菜鸟君 

## 题目描述

ACM uses a new special technology of building its transceiver stations. This technology is called _Modular Cuboid Architecture_ (_MCA_) and is covered by a patent of Lego company. All parts of the transceiver are shipped in unit blocks that have the form of cubes of exactly the same size. The cubes can be then connected to each other. The MCA is modular architecture, that means we can select preferred transceiver configuration and buy only those components we need .

The cubes must be always connected "face-to-face", i.e. the whole side of one cube is connected to the whole side of another cube. One cube can be thus connected to at most six other units. The resulting equipment, consisting of unit cubes is called _The Bulk_ in the communication technology slang.

Sometimes, an old and unneeded bulk is condemned, put into a storage place, and replaced with a new one. It was recently found that ACM has many of such old bulks that just occupy space and are no longer needed. The director has decided that all such bulks must be disassembled to single pieces to save some space. Unfortunately, there is no documentation for the old bulks and nobody knows the exact number of pieces that form them. You are to write a computer program that takes the bulk description and computes the number of unit cubes.

Each bulk is described by its faces (sides). A special X-ray based machine was constructed that is able to localise all faces of the bulk in the space, even the inner faces, because the bulk can be partially hollow (it can contain empty spaces inside). But any bulk must be connected (i.e. it cannot drop into two pieces) and composed of whole unit cubes.

## 输入输出格式

### 输入格式

There is a single positive integer T on the first line of input (equal to about 1000). It stands for the number of bulks to follow. Each bulk description begins with a line containing single positive integer F, 6 <= F <= 250, stating the number of faces. Then there are F lines, each containing one face description. All faces of the bulk are always listed, in any order. Any face may be divided into several distinct parts and described like if it was more faces. Faces do not overlap. Every face has one inner side and one outer side. No side can be "partially inner and partially outer".

Each face is described on a single line. The line begins with an integer number P stating the number of points that determine the face, 4 <= P <= 200. Then there are 3 x P numbers, coordinates of the points. Each point is described by three coordinates X,Y,Z (0 <= X,Y,Z <= 1000) separated by spaces. The points are separated from each other and from the number P by two space characters. These additional spaces were added to make the input more human readable. The face can be constructed by connecting the points in the specified order, plus connecting the last point with the first one.

The face is always composed of "unit squares", that means every edge runs either in X, Y or Z-axis direction. If we take any two neighbouring points X $ _{1} $ ,Y $ _{1} $ ,Z $ _{1} $ and X $ _{2} $ ,Y $ _{2} $ ,Z $ _{2} $ , then the points will always differ in exactly one of the three coordinates. I.e. it is either X $ _{1} $  X $ _{2} $ , or Y $ _{1} $  Y $ _{2} $ , or Z $ _{1} $  Z $ _{2} $ , other two coordinates are the same. Every face lies in an orthogonal plane, i.e. exactly one coordinate is always the same for all points of the face. The face outline will never touch nor cross itself.

### 输出格式

Your program must print a single line for every test case. The line must contain the sentence The bulk is composed of V units., where V is the volume of the bulk.

## 输入输出样例

### 输入样例 #1

```cpp
2
12
4  10 10 10  10 10 20  10 20 20  10 20 10
4  20 10 10  20 10 20  20 20 20  20 20 10
4  10 10 10  10 10 20  20 10 20  20 10 10
4  10 20 10  10 20 20  20 20 20  20 20 10
4  10 10 10  10 20 10  20 20 10  20 10 10
5  10 10 20  10 20 20  20 20 20  20 15 20  20 10 20
4  14 14 14  14 14 16  14 16 16  14 16 14
4  16 14 14  16 14 16  16 16 16  16 16 14
4  14 14 14  14 14 16  16 14 16  16 14 14
4  14 16 14  14 16 16  16 16 16  16 16 14
4  14 14 14  14 16 14  16 16 14  16 14 14
4  14 14 16  14 16 16  16 16 16  16 14 16
12
4  20 20 30  20 30 30  30 30 30  30 20 30
4  10 10 10  10 40 10  40 40 10  40 10 10
6  10 10 20  20 10 20  20 30 20  30 30 20  30 40 20  10 40 20
6  20 10 20  20 20 20  30 20 20  30 40 20  40 40 20  40 10 20
4  10 10 10  40 10 10  40 10 20  10 10 20
4  10 40 10  40 40 10  40 40 20  10 40 20
4  20 20 20  30 20 20  30 20 30  20 20 30
4  20 30 20  30 30 20  30 30 30  20 30 30
4  10 10 10  10 40 10  10 40 20  10 10 20
4  40 10 10  40 40 10  40 40 20  40 10 20
4  20 20 20  20 30 20  20 30 30  20 20 30
4  30 20 20  30 30 20  30 30 30  30 20 30
```


### 输出样例 #1

```cpp
The bulk is composed of 992 units.
The bulk is composed of 10000 units.
```


## 说明

**Warning: large Input/Output data, be careful with certain languages**

