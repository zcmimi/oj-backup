# Spreadsheets

## 题意翻译

人们常用的电子表格软件(比如: Excel)采用如下所述的坐标系统:

第一列被标为A，第二列为B，以此类推，第26列为Z。接下来为由两个字母构成的列号: 第27列为AA，第28列为AB...在标为ZZ的列之后则由三个字母构成列号，如此类推。

行号为从1开始的整数。

单元格的坐标由列号和行号连接而成。比如，BC23表示位于第55列23行的单元格。

有时也会采用被称为RXCY的坐标系统，其中X与Y为整数，坐标(X,Y)直接描述了对应单元格的位置。比如，R23C55即为前面所述的单元格。

您的任务是编写一个程序，将所给的单元格坐标转换为另一种坐标系统下面的形式。

### 输入

第一行一个整数n(1<=n<=10^5)，表示将会输入的坐标的数量。

接下来n行，每行一个坐标。

注意: 每个坐标都是正确的。此外不会出现行号或列号大于10^6的单元格。

### 输出

n行，每行一个被转换的坐标。

## 题目描述

In the popular spreadsheets systems (for example, in Excel) the following numeration of columns is used. The first column has number A, the second — number B, etc. till column 26 that is marked by Z. Then there are two-letter numbers: column 27 has number AA, 28 — AB, column 52 is marked by AZ. After ZZ there follow three-letter numbers, etc.

The rows are marked by integer numbers starting with 1. The cell name is the concatenation of the column and the row numbers. For example, BC23 is the name for the cell that is in column 55, row 23.

Sometimes another numeration system is used: RXCY, where X and Y are integer numbers, showing the column and the row numbers respectfully. For instance, R23C55 is the cell from the previous example.

Your task is to write a program that reads the given sequence of cell coordinates and produce each item written according to the rules of another numeration system.

## 输入输出格式

### 输入格式

The first line of the input contains integer number $ n $ ( $ 1<=n<=10^{5} $ ), the number of coordinates in the test. Then there follow $ n $ lines, each of them contains coordinates. All the coordinates are correct, there are no cells with the column and/or the row numbers larger than $ 10^{6} $ .

### 输出格式

Write $ n $ lines, each line should contain a cell coordinates in the other numeration system.

## 输入输出样例

### 输入样例 #1

```cpp
2
R23C55
BC23

```
### 输出样例 #1

```cpp
BC23
R23C55

```
