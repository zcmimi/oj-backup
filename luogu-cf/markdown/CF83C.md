# Track

## 题目描述

You already know that Valery's favorite sport is biathlon. Due to your help, he learned to shoot without missing, and his skills are unmatched at the shooting range. But now a smaller task is to be performed, he should learn to complete the path fastest.

The track's map is represented by a rectangle $ n×m $ in size divided into squares. Each square is marked with a lowercase Latin letter (which means the type of the plot), with the exception of the starting square (it is marked with a capital Latin letters $ S $ ) and the terminating square (it is marked with a capital Latin letter $ T $ ). The time of movement from one square to another is equal to $ 1 $ minute. The time of movement within the cell can be neglected. We can move from the cell only to side-adjacent ones, but it is forbidden to go beyond the map edges. Also the following restriction is imposed on the path: it is not allowed to visit more than $ k $ different types of squares (squares of one type can be visited an infinite number of times). Squares marked with $ S $ and $ T $ have no type, so they are not counted. But $ S $ must be visited exactly once — at the very beginning, and $ T $ must be visited exactly once — at the very end.

Your task is to find the path from the square $ S $ to the square $ T $ that takes minimum time. Among all shortest paths you should choose the lexicographically minimal one. When comparing paths you should lexicographically represent them as a sequence of characters, that is, of plot types.

## 输入输出格式

### 输入格式

The first input line contains three integers $ n $ , $ m $ and $ k $ ( $ 1<=n,m=2,1<=k<=4 $ ). Then $ n $ lines contain the map. Each line has the length of exactly $ m $ characters and consists of lowercase Latin letters and characters $ S $ and $ T $ . It is guaranteed that the map contains exactly one character $ S $ and exactly one character $ T $ .

Pretest 12 is one of the maximal tests for this problem.

### 输出格式

If there is a path that satisfies the condition, print it as a sequence of letters — the plot types. Otherwise, print "-1" (without quotes). You shouldn't print the character $ S $ in the beginning and $ T $ in the end.

Note that this sequence may be empty. This case is present in pretests. You can just print nothing or print one "End of line"-character. Both will be accepted.

## 输入输出样例

### 输入样例 #1

```cpp
5 3 2
Sba
ccc
aac
ccc
abT

```
### 输出样例 #1

```cpp
bcccc

```
### 输入样例 #2

```cpp
3 4 1
Sxyy
yxxx
yyyT

```
### 输出样例 #2

```cpp
xxxx

```
### 输入样例 #3

```cpp
1 3 3
TyS

```
### 输出样例 #3

```cpp
y

```
### 输入样例 #4

```cpp
1 4 1
SxyT

```
### 输出样例 #4

```cpp
-1

```
