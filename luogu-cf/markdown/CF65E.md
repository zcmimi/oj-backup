# Harry Potter and Moving Staircases

## 题目描述

Harry Potter lost his Invisibility Cloak, running from the school caretaker Filch. Finding an invisible object is not an easy task. Fortunately, Harry has friends who are willing to help. Hermione Granger had read "The Invisibility Cloaks, and Everything about Them", as well as six volumes of "The Encyclopedia of Quick Search of Shortest Paths in Graphs, Network Flows, the Maximal Increasing Subsequences and Other Magical Objects". She has already developed a search algorithm for the invisibility cloak in complex dynamic systems (Hogwarts is one of them).

Hogwarts consists of $ n $ floors, numbered by integers from $ 1 $ to $ n $ . Some pairs of floors are connected by staircases. The staircases may change its position, moving exactly one end. Formally the situation is like this: if a staircase connects the floors $ a $ and $ b $ , then in one move it may modify its position so as to connect the floors $ a $ and $ c $ or $ b $ and $ c $ , where $ c $ is any floor different from $ a $ and $ b $ . Under no circumstances the staircase can connect a floor with itself. At the same time there can be multiple stairs between a pair of floors.

Initially, Harry is on the floor with the number $ 1 $ . He does not remember on what floor he has lost the cloak and wants to look for it on each of the floors. Therefore, his goal is to visit each of $ n $ floors at least once. Harry can visit the floors in any order and finish the searching at any floor.

Nowadays the staircases move quite rarely. However, Ron and Hermione are willing to put a spell on any of them to help Harry find the cloak. To cause less suspicion, the three friends plan to move the staircases one by one, and no more than once for each staircase. In between shifting the staircases Harry will be able to move about the floors, reachable at the moment from the staircases, and look for his Invisibility Cloak. It is assumed that during all this time the staircases will not move spontaneously.

Help the three friends to compose a searching plan. If there are several variants to solve the problem, any valid option (not necessarily the optimal one) will be accepted.

## 输入输出格式

### 输入格式

The first line contains integers $ n $ and $ m $ ( $ 1<=n<=100000 $ , $ 0<=m<=200000 $ ), which are the number of floors and staircases in Hogwarts, respectively. The following $ m $ lines contain pairs of floors connected by staircases at the initial moment of time.

### 输出格式

In the first line print "YES" (without the quotes) if Harry is able to search all the floors, and "NO" otherwise. If the answer is positive, then print on the second line the number of staircases that Ron and Hermione will have to shift. Further output should look like this:

Harry's moves

a staircase's move

Harry's moves

a staircase's move

...

a staircase's move

Harry's moves

Each "Harry's move" should be represented as a list of floors in the order in which they have been visited. The total amount of elements of these lists must not exceed $ 10^{6} $ . When you print each list, first print the number of elements in it, and then in the same line print the actual space-separated elements. The first number in the first list should be the number $ 1 $ (the floor, from which Harry begins to search). Any list except the first one might contain the zero number of elements. Note that Harry can visit some floors again, but must visit all $ n $ floors at least once. Two consecutively visited floors must be directly connected by a staircase (at the time Harry goes from one of them to the other one). No two floors that are visited consequtively can be equal.

In the description of a "staircase's move" indicate the number of staircase (the staircases are numbered from $ 1 $ to $ m $ in the order in which they are given in the input data) and its new location (two numbers of the connected floors in any order).

Any staircase can be moved at most once. If there are several solutions, output any.

## 输入输出样例

### 输入样例 #1

```cpp
6 4
1 2
1 3
2 3
4 5

```
### 输出样例 #1

```cpp
YES
2
3 1 2 3
2 3 5
3 5 4 5
4 5 6
3 6 5 3

```
### 输入样例 #2

```cpp
4 1
1 2

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
5 5
1 2
1 3
3 4
3 5
4 5

```
### 输出样例 #3

```cpp
YES
0
6 1 2 1 3 4 5

```
