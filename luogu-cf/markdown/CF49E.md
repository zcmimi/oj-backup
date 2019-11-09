# Common ancestor

## 题意翻译

## 题目描述：

Berland的每一个生物的DNA序列可以被表示成一个由小写字母组成的非空字符串。Berland的科学家们发现所有生物都是一步一步进化来的。在其中的每一步，DNA序列的一个字符会被替换成另外的两个。总共有$n$种允许的变化。变化$a_i\rightarrow b_ic_i$表示一个字符$a_i$可以被替换成两个字符$b_ic_i$。每一种变化均可以无限次发生。

科学家们表示，如果一个DNA序列$s_3$在整个进化过程中可以最终变为$s_1$和$s_2$，或许是经过了不同的步骤数，那么DNA序列分别为$s_1$和$s_2$的两个生物就会有一个共同祖先。现在给出$s_1$和$s_2$，你的任务是弄清楚分别拥有这两种DNA序列的生物是否有共同祖先。如果存在，你需要找出所有共同祖先中长度最短的DNA序列。

## 输入格式：

第一、二行分别包含一个非空字符串，即$s_1$和$s_2$。这两个字符串长度不超过50且只包含小写字母。第三行包含一个整数$n$，$0\leq n\leq50$，表示变化的种类数。随后的$n$行，每一行描述了一个变化形式$a_i\rightarrow b_ic_i$。$a_i$、$b_i$和$c_i$都是小写字母。$s_1$和$s_2$可能相同，给出的变化中可能包含有相似的变化。

## 输出格式：

如果$s_1$和$s_2$没有共同祖先，输出-1。否则输出最短的共同祖先$s_3$的序列长度。

## 题目描述

The DNA sequence for every living creature in Berland can be represented as a non-empty line consisting of lowercase Latin letters. Berland scientists found out that all the creatures evolve by stages. During one stage exactly one symbol of the DNA line is replaced by exactly two other ones. At that overall there are $ n $ permissible substitutions. The substitution $ a_{i} $ -> $ b_{i}c_{i} $ means that any one symbol $ a_{i} $ can be replaced with two symbols $ b_{i}c_{i} $ . Every substitution could happen an unlimited number of times.

They say that two creatures with DNA sequences $ s_{1} $ and $ s_{2} $ can have a common ancestor if there exists such a DNA sequence $ s_{3} $ that throughout evolution it can result in $ s_{1} $ and $ s_{2} $ , perhaps after a different number of stages. Your task is to find out by the given $ s_{1} $ and $ s_{2} $ whether the creatures possessing such DNA sequences can have a common ancestor. If the answer is positive, you have to find the length of the shortest sequence of the common ancestor’s DNA.

## 输入输出格式

### 输入格式

The first line contains a non-empty DNA sequence $ s_{1} $ , the second line contains a non-empty DNA sequence $ s_{2} $ . The lengths of these lines do not exceed 50, the lines contain only lowercase Latin letters. The third line contains an integer $ n $ ( $ 0<=n $ b_{i}c_{i} $ . The characters $ a_{i} $ , $ b_{i} $ , and $ c_{i} $ are lowercase Latin letters. Lines $ s_{1} $ and $ s_{2} $ can coincide, the list of substitutions can contain similar substitutions.

### 输出格式

If $ s_{1} $ and $ s_{2} $ cannot have a common ancestor, print -1. Otherwise print the length of the shortest sequence $ s_{3} $ , from which $ s_{1} $ and $ s_{2} $ could have evolved.

## 输入输出样例

### 输入样例 #1

```cpp
ababa
aba
2
c-&amp;gt;ba
c-&amp;gt;cc

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
ababa
aba
7
c-&amp;gt;ba
c-&amp;gt;cc
e-&amp;gt;ab
z-&amp;gt;ea
b-&amp;gt;ba
d-&amp;gt;dd
d-&amp;gt;ab

```
### 输出样例 #2

```cpp
1

```
### 输入样例 #3

```cpp
ababa
aba
1
c-&amp;gt;ba

```
### 输出样例 #3

```cpp
-1

```
