# Multithreading

## 题意翻译

给定长度为n的正整数序列C. 设S = 2 ∗ sigma1≤i≤n(Ci). 要求找一个长度为S的正整数序

列A，满足：

- 序列每个数都在1和n之间。

- 序列恰好包含恰好2 ∗ Ci个数字i。 对任意1 ≤ i ≤ n。

这个序列将被当作指令序列执行。具体是这样的：

- 有一个长度为n的数组W ，初始值均为0。还有一个特殊变量Y ，初始值也是0。

- 令循环变量i = 1

- 如果第i个数之前有偶数个数的值也是Ai，执行：WAi = Y.否则执行：Y = WAi + 1

- 如果i > n退出否则i = i + 1,然后跳转到前一步。

求一个适当的序列A使得执行完成后Y的值是某个给定的值T.或说明不存在解。

n ≤ 100, S ≤ 100000

### 输入

第一行输入两个整数N(1≤N≤100)和W(-10^9 ≤ W ≤ 10^9)。在第二行有N个ni(1<=ni<=1000)。

### 输出

在输出的第一行，如果有可能在最后y = W，或者没有其他情况下。如果答案是No，否则答案是Yes，并且第二行输出一个空格分隔的整数列表，表示一些导致期望结果的时间表。见注释

Translated by liyifeng

## 题目描述

You are given the following concurrent program. There are $ N $ processes and the $ i $ -th process has the following pseudocode:

`repeat $ n_{i} $ times $ y_{i} $ := $ y $  $ y $ := $ y_{i}+1 $ end repeat`Here $ y $ is a shared variable. Everything else is local for the process. All actions on a given row are atomic, i.e. when the process starts executing a row it is never interrupted. Beyond that all interleavings are possible, i.e. every process that has yet work to do can be granted the rights to execute its next row. In the beginning $ y=0 $ . You will be given an integer $ W $ and $ n_{i} $ , for $ i=1,...\ ,N $ . Determine if it is possible that after all processes terminate, $ y=W $ , and if it is possible output an arbitrary schedule that will produce this final value.

## 输入输出格式

### 输入格式

In the first line of the input you will be given two space separated integers $ N $ ( $ 1<=N<=100 $ ) and $ W $ ( $ -10^{9}<=W<=10^{9} $ ). In the second line there are $ N $ space separated integers $ n_{i} $ ( $ 1<=n_{i}<=1000 $ ).

### 输出格式

On the first line of the output write Yes if it is possible that at the end $ y=W $ , or No otherwise. If the answer is No then there is no second line, but if the answer is Yes, then on the second line output a space separated list of integers representing some schedule that leads to the desired result. For more information see note.

## 输入输出样例

### 输入样例 #1

```cpp
1 10
11

```
### 输出样例 #1

```cpp
No

```
### 输入样例 #2

```cpp
2 3
4 4

```
### 输出样例 #2

```cpp
Yes
1 1 2 1 2 2 2 2 2 1 2 1 1 1 1 2

```
### 输入样例 #3

```cpp
3 6
1 2 3

```
### 输出样例 #3

```cpp
Yes
1 1 2 2 2 2 3 3 3 3 3 3

```
## 说明

For simplicity, assume that there is no repeat statement in the code of the processes, but the code from the loop is written the correct amount of times. The processes are numbered starting from 1. The list of integers represent which process works on its next instruction at a given step. For example, consider the schedule 1 2 2 1 3. First process 1 executes its first instruction, then process 2 executes its first two instructions, after that process 1 executes its second instruction, and finally process 3 executes its first instruction. The list must consists of exactly $ 2·Σ\ _{i=1...N}n_{i} $ numbers.

