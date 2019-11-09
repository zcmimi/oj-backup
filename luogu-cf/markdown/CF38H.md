# The Great Marathon

## 题目描述

On the Berland Dependence Day it was decided to organize a great marathon. Berland consists of $ n $ cities, some of which are linked by two-way roads. Each road has a certain length. The cities are numbered from 1 to $ n $ . It is known that one can get from any city to any other one by the roads.

$ n $ runners take part in the competition, one from each city. But Berland runners are talkative by nature and that's why the juries took measures to avoid large crowds of marathon participants. The jury decided that every runner should start the marathon from their hometown. Before the start every sportsman will get a piece of paper containing the name of the city where the sportsman's finishing line is. The finish is chosen randomly for every sportsman but it can't coincide with the sportsman's starting point. Several sportsmen are allowed to finish in one and the same city. All the sportsmen start simultaneously and everyone runs the shortest route from the starting point to the finishing one. All the sportsmen run at one speed which equals to $ 1 $ .

After the competition a follow-up table of the results will be composed where the sportsmen will be sorted according to the nondecrease of time they spent to cover the distance. The first $ g $ sportsmen in the table will get golden medals, the next $ s $ sportsmen will get silver medals and the rest will get bronze medals. Besides, if two or more sportsmen spend the same amount of time to cover the distance, they are sorted according to the number of the city where a sportsman started to run in the ascending order. That means no two sportsmen share one and the same place.

According to the rules of the competition the number of gold medals $ g $ must satisfy the inequation $ g_{1}<=g<=g_{2} $ , where $ g_{1} $ and $ g_{2} $ are values formed historically. In a similar way, the number of silver medals $ s $ must satisfy the inequation $ s_{1}<=s<=s_{2} $ , where $ s_{1} $ and $ s_{2} $ are also values formed historically.

At present, before the start of the competition, the destination points of every sportsman are unknown. However, the press demands details and that's why you are given the task of counting the number of the ways to distribute the medals. Two ways to distribute the medals are considered different if at least one sportsman could have received during those distributions different kinds of medals.

## 输入输出格式

### 输入格式

The first input line contains given integers $ n $ and $ m $ ( $ 3<=n<=50 $ , $ n-1<=m<=1000 $ ), where $ n $ is the number of Berland towns and $ m $ is the number of roads.

Next in $ m $ lines road descriptions are given as groups of three integers $ v $ , $ u $ , $ c $ , which are the numbers of linked towns and its length ( $ 1<=v,u<=n $ , $ v≠u $ , $ 1<=c<=1000 $ ). Every pair of cities have no more than one road between them.

The last line contains integers $ g_{1} $ , $ g_{2} $ , $ s_{1} $ , $ s_{2} $ ( $ 1<=g_{1}<=g_{2} $ , $ 1<=s_{1}<=s_{2} $ , $ g_{2}+s_{2}&lt;n $ ). The input data numbers, located on one line, are space-separated.

### 输出格式

Print the single number — the number of ways to distribute the medals. It is guaranteed that the number fits in the standard 64-bit signed data type.

## 输入输出样例

### 输入样例 #1

```cpp
3 2
1 2 1
2 3 1
1 1 1 1

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
4 5
1 2 2
2 3 1
3 4 2
4 1 2
1 3 3
1 2 1 1

```
### 输出样例 #2

```cpp
19

```
### 输入样例 #3

```cpp
3 3
1 2 2
2 3 1
3 1 2
1 1 1 1

```
### 输出样例 #3

```cpp
4

```
