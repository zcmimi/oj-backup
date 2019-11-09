# Mutation

## 题意翻译

给出一个由前$k$个大写字母组成的字符串，每次可以花费$t_i$代价删去该字符串中所有的第$i$个大写字母，一个字符串的代价为该字符串每对相邻字符的代价，给出一$k×k$的矩阵表示两个相邻的大写字母的代价矩阵，问有多少种删除方案使得删除的代价以及剩余字符串的代价之和不超过$T$，注意剩余字符串需非空

**输入**

第一行三个整数$n,k,T$表示字符串长度，所用字母种类以及代价上限，之后输入一个由前$k$个大写字母组成的长度为$n$的字符串，以及$k$个整数$t_i$表示删去第$i$种字符的代价，最后输入一个$k×k$的矩阵$m_{x,y}$表示相邻两字母的代价矩阵

$(1≤n≤2⋅10^5,1≤k≤22,1≤T≤2⋅10^9,1≤t_i,a_{x,y}≤10^9)$

**输出**

输出满足条件的方案数

**样例解释**

下面是合法的方案：

BACAC (11), ACAC (10), BAA (5), B (6), AA (4)

## 题目描述

Scientists of planet Olympia are conducting an experiment in mutation of primitive organisms. Genome of organism from this planet can be represented as a string of the first $ K $ capital English letters. For each pair of types of genes they assigned $ a_{i,j} $ — a risk of disease occurence in the organism provided that genes of these types are adjacent in the genome, where $ i $ — the 1-based index of the first gene and $ j $ — the index of the second gene. The gene 'A' has index 1, 'B' has index 2 and so on. For example, $ a_{3,2} $ stands for the risk of 'CB' fragment. Risk of disease occurence in the organism is equal to the sum of risks for each pair of adjacent genes in the genome.

Scientists have already obtained a base organism. Some new organisms can be obtained by mutation of this organism. Mutation involves removal of all genes of some particular types. Such removal increases the total risk of disease occurence additionally. For each type of genes scientists determined $ t_{i} $ — the increasement of the total risk of disease occurence provided by removal of all genes having type with index $ i $ . For example, $ t_{4} $ stands for the value of additional total risk increasement in case of removing all the 'D' genes.

Scientists want to find a number of different organisms that can be obtained from the given one which have the total risk of disease occurence not greater than $ T $ . They can use only the process of mutation described above. Two organisms are considered different if strings representing their genomes are different. Genome should contain at least one gene.

## 输入输出格式

### 输入格式

The first line of the input contains three integer numbers $ N $ ( $ 1<=N<=200000 $ ) — length of the genome of base organism, $ K $ ( $ 1<=K<=22 $ ) — the maximal index of gene type in the genome and $ T $ ( $ 1<=T<=2·10^{9} $ ) — maximal allowable risk of disease occurence. The second line contains the genome of the given organism. It is a string of the first $ K $ capital English letters having length $ N $ .

The third line contains $ K $ numbers $ t_{1},t_{2},...,t_{K} $ , where $ t_{i} $ is additional risk value of disease occurence provided by removing of all genes of the $ i $ -th type.

The following $ K $ lines contain the elements of the given matrix $ a_{i,j} $ . The $ i $ -th line contains $ K $ numbers. The $ j $ -th number of the $ i $ -th line stands for a risk of disease occurence for the pair of genes, first of which corresponds to the $ i $ -th letter and second of which corresponds to the $ j $ -th letter. The given matrix is not necessarily symmetrical.

All the numbers in the input are integer, non-negative and all of them except $ T $ are not greater than $ 10^{9} $ . It is guaranteed that the maximal possible risk of organism that can be obtained from the given organism is strictly smaller than $ 2^{31} $ .

### 输出格式

Output the number of organisms that can be obtained from the base one and which have the total risk of disease occurence not greater than $ T $ .

## 输入输出样例

### 输入样例 #1

```cpp
5 3 13
BACAC
4 1 2
1 2 3
2 3 4
3 4 10

```
### 输出样例 #1

```cpp
5

```
## 说明

Explanation: one can obtain the following organisms (risks are stated in brackets): BACAC (11), ACAC (10), BAA (5), B (6), AA (4).

