# Friends

## 题意翻译

## 题目描述

有一天，一个叫做伊戈尔-凯的人放弃编程，转攻数学题。一个深秋的夜晚，他坐在桌旁读书，想着数学问题。

书上有着一段话吸引了他的注意：“在任六人中有三个人互相认识或互相不认识。”

伊戈尔完全无法理解为什么至少有六个人。“那对不起，我觉得五个人也一样，”他脑子里开始胡思乱想“让我试试...马克思，利亚，瓦娃--他们互相认识，额..再加一个迪玛和欧莱格，对瓦娃来说他们三个互不认识！哈哈哈哈哈，这个定理就是一个渣渣。”

伊戈尔带着他的5个朋友，让他们记下来，他们中谁互为朋友。现在他想看看这五个人是否真的认识三对或三对不认识的人。

## 输入输出格式

### 输入格式：

第一行包括了一个整数m(0<=m<=10)这是伊戈尔的五个朋友之间的互相认识的关系的个数。

接下来m行每行有两个数aibi（1<=ai,bi<=5;ai!=bi）,表示ai与bi是互相认识。每个关系是准确的也是对称的，即若x认识y，y也认识x。

### 输出格式：

如果这五个人中既没有三个不认识的也没有三个互相认识的，输出：“FAIL”。其他情况输出“WIN“

## 题目描述

One day Igor K. stopped programming and took up math. One late autumn evening he was sitting at a table reading a book and thinking about something.

The following statement caught his attention: "Among any six people there are either three pairwise acquainted people or three pairwise unacquainted people"

Igor just couldn't get why the required minimum is 6 people. "Well, that's the same for five people, too!" — he kept on repeating in his mind. — "Let's take, say, Max, Ilya, Vova — here, they all know each other! And now let's add Dima and Oleg to Vova — none of them is acquainted with each other! Now, that math is just rubbish!"

Igor K. took 5 friends of his and wrote down who of them is friends with whom. Now he wants to check whether it is true for the five people that among them there are either three pairwise acquainted or three pairwise not acquainted people.

## 输入输出格式

### 输入格式

The first line contains an integer $ m $ $ (0<=m<=10) $ , which is the number of relations of acquaintances among the five friends of Igor's.

Each of the following $ m $ lines contains two integers $ a_{i} $ and $ b_{i} $ $ (1<=a_{i},b_{i}<=5;a_{i}≠b_{i}) $ , where ( $ a_{i},b_{i} $ ) is a pair of acquainted people. It is guaranteed that each pair of the acquaintances is described exactly once. The acquaintance relation is symmetrical, i.e. if $ x $ is acquainted with $ y $ , then $ y $ is also acquainted with $ x $ .

### 输出格式

Print "FAIL", if among those five people there are no either three pairwise acquainted or three pairwise unacquainted people. Otherwise print "WIN".

## 输入输出样例

### 输入样例 #1

```cpp
4
1 3
2 3
1 4
5 3

```
### 输出样例 #1

```cpp
WIN

```
### 输入样例 #2

```cpp
5
1 2
2 3
3 4
4 5
5 1

```
### 输出样例 #2

```cpp
FAIL

```
