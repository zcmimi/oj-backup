# Let&#039;s Go Rolling!

## 题目描述

On a number axis directed from the left rightwards, $ n $ marbles with coordinates $ x_{1},x_{2},...,x_{n} $ are situated. Let's assume that the sizes of the marbles are infinitely small, that is in this task each of them is assumed to be a material point. You can stick pins in some of them and the cost of sticking in the marble number $ i $ is equal to $ c_{i} $ , number $ c_{i} $ may be negative. After you choose and stick the pins you need, the marbles will start to roll left according to the rule: if a marble has a pin stuck in it, then the marble doesn't move, otherwise the marble rolls all the way up to the next marble which has a pin stuck in it and stops moving there. If there is no pinned marble on the left to the given unpinned one, it is concluded that the marble rolls to the left to infinity and you will pay an infinitely large fine for it. If no marble rolled infinitely to the left, then the fine will consist of two summands:

- the sum of the costs of stuck pins;

- the sum of the lengths of the paths of each of the marbles, that is the sum of absolute values of differences between their initial and final positions.

Your task is to choose and pin some marbles in the way that will make the fine for you to pay as little as possible.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ ( $ 1<=n<=3000 $ ) which is the number of marbles. The next $ n $ lines contain the descriptions of the marbles in pairs of integers $ x_{i} $ , $ c_{i} $ ( $ -10^{9}<=x_{i},c_{i}<=10^{9} $ ). The numbers are space-separated. Each description is given on a separate line. No two marbles have identical initial positions.

### 输出格式

Output the single number — the least fine you will have to pay.

## 输入输出样例

### 输入样例 #1

```cpp
3
2 3
3 4
1 2

```
### 输出样例 #1

```cpp
5

```
### 输入样例 #2

```cpp
4
1 7
3 1
5 10
6 1

```
### 输出样例 #2

```cpp
11

```
