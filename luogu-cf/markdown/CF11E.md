# Forward, march!

## 题意翻译

杰克现在成了一名士兵。不幸的是，他在演习中遇到了麻烦。他没有按照先迈出左脚再不断交换迈脚的顺序前进，而是不断地重复一系列的步骤序列，有时他会做出错误的步骤或者停一会儿。例如，如果杰克使用序列“右，左，休息”，当中士喊道：“左！右!左！右!左！右！”杰克先用右脚迈出了一步，然后用左脚迈出了一步，然后他感到很迷惑，停了一会儿，然后又一次按照他自己的顺序——用右脚开始，然后用左脚，接着让中士恼怒的是——他又停下来喘口气，又不正确地用右脚开始…这样子行军，杰克会在只有三分之一的时间迈出正确的步伐。

当警官说服他应该改掉这个毛病的时候，杰克决定修改他重复的步骤。然而，为了不太累，他决定他唯一要做的就是在原始序列中的任何位置添加任意数量的中断（中断对应于一步的停顿）。当然，如果这些步骤之间没有停顿，杰克就不能连续的迈出同一只脚。需要注意的是，他目前使用的步骤有可能是不正确的。

帮助士兵杰克！给出他开始时不断重复的步骤，计算出在他计划中增加一些休息时间后他能正确行进的时间占行军时间的最大百分比。

输入输出格式

输入格式：

输入的第一行包含一个只包含字符“L”、“r”和“x”的序列，其中“L”对应的是左脚的一步，"R"代表的是右脚的一步，"X"代表一次休息.

输出格式：

输出杰克能正确行进的最大时间百分比，保留到小数点后六位数。

说明 在第二个例子中，如果我们在lxxrxr序列中增加两次停顿，杰克将这样行军：lxxrxrlxxrxrl…而不是lrlrlrlrlrlrl…这样他在一半的情况下会走出正确的步伐。如果我们不加任何休息，这个顺序就不正确了——杰克不能连续两次地迈右脚

感谢 @稀神探女 和 @MaWenXin 提供的翻译。

## 题目描述

Jack has become a soldier now. Unfortunately, he has trouble with the drill. Instead of marching beginning with the left foot and then changing legs with each step, as ordered, he keeps repeating a sequence of steps, in which he sometimes makes the wrong steps or — horror of horrors! — stops for a while. For example, if Jack uses the sequence 'right, left, break', when the sergeant yells: 'Left! Right! Left! Right! Left! Right!', Jack first makes a step with the right foot, then one with the left foot, then he is confused and stops for a moment, then again - this time according to the order - starts with the right foot, then uses the left foot, then - to the sergeant's irritation - he stops to catch his breath, to incorrectly start with the right foot again... Marching this way, Jack will make the step that he is supposed to in the given moment in only one third of cases.

When the officers convinced him he should do something about it, Jack decided to modify the basic sequence of steps that he repeats. However, in order not to get too tired, he has decided that the only thing he'll do is adding any number of breaks in any positions of the original sequence (a break corresponds to stopping for the duration of one step). Of course, Jack can't make a step on the same foot twice in a row, if there is no pause between these steps. It is, however, not impossible that the sequence of steps he used so far is incorrect (it would explain a lot, actually).

Help Private Jack! Given the sequence of steps he keeps repeating, calculate the maximal percentage of time that he can spend marching correctly after adding some breaks to his scheme.

## 输入输出格式

### 输入格式

The first line of input contains a sequence consisting only of characters 'L', 'R' and 'X', where 'L' corresponds to a step with the left foot, 'R' — with the right foot, and 'X' — to a break. The length of the sequence will not exceed $ 10^{6} $ .

### 输出格式

Output the maximum percentage of time that Jack can spend marching correctly, rounded down to exactly six digits after the decimal point.

## 输入输出样例

### 输入样例 #1

```cpp
X

```
### 输出样例 #1

```cpp
0.000000

```
### 输入样例 #2

```cpp
LXRR

```
### 输出样例 #2

```cpp
50.000000

```
## 说明

In the second example, if we add two breaks to receive LXXRXR, Jack will march: LXXRXRLXXRXRL... instead of LRLRLRLRLRLRL... and will make the correct step in half the cases. If we didn't add any breaks, the sequence would be incorrect — Jack can't step on his right foot twice in a row.

