# School

## 题意翻译

# 题目描述

CSYZ学校1820班有n个学生， 每个人都只有一个朋友，我们用 G(i) 表示第 i个人的朋友，但是需要注意， 自己朋友的朋友不一定是自己，即 G(G(i)) 不一定等于i；

由于学校总是会出现各种新闻信息， 而同学们十分热衷于了解这些新闻，所以大家都会把自己知道的新闻分享给自己的好朋(ji)友(lao)；

现在会出现以下的行为：

在第 i 天，第 A[i] 个学生Jean了解到热度为 B[i] (B[i]>=1) 的新闻，此时Jean会马上与她的朋友分享这个新闻，而此时新闻热度已减为 B[i] – 1 ，Jean的朋友也会进行同样的转述，所以，Jean的朋友的朋友收到新闻时热度已减为 B[i] – 2 . 这样的行为会一直持续到新闻热度为0，因为这时已经没有人想去分享它了.

也就是说：如果一个人 x 收到了一个热度为 y(y!=0) 的新闻，他就会将其分享给自己的好朋友G(i)，这个新闻热度对于他的的朋友来说就是 y – 1, 如果可能的话，这种行为就会一直持续下去.

但我们需要注意到，一个人可能会在一天内不止一次的收到同一条新闻，但此时新闻热度已不同。因此，等级为B[i] 的新闻会经过B[i] 次的转述。

你的任务是计算出 res[i] 的值——在第i天有多少学生了解到m天中他们的第一个新闻；

B[i] 的值在初始时给出，而 A[i] 的值由下面的公式得出 ：

![]( https://cdn.luogu.org/upload/vjudge_pic/CF45B/87d3ac8c2d9d9c2f898cd922887b2d5b34a41da4.png)

res[0] = 0；

（v[i]为一些给定的整数）；

# 输入输出格式

### 输入格式：

第一行包含两个以空格分隔的整数 n和m,分别表示 学生人数和天数。

第二行包含n个以空格隔开的整数 G(i) , 表示编号为 i 的人的朋友，

第三行包含了m个以空格分隔的整数v[i] .

第四行包含了m个以空格分隔的整数B[i] .

### 输出格式：

输出 m行，每行有一个数字.

第 i行表示res[i] ——m天内，在第i天了解到的第一个新闻的学生的人数，日期从输入文件给出的顺序开始编号， 不用输出res[0].

感谢@Jean 提供的翻译

## 题目描述

There are $ n $ students studying in the 6th grade, in group "B" of a berland secondary school. Every one of them has exactly one friend whom he calls when he has some news. Let us denote the friend of the person number $ i $ by $ g(i) $ . Note that the friendships are not mutual, i.e. $ g(g(i)) $ is not necessarily equal to $ i $ .

On day $ i $ the person numbered as $ a_{i} $ learns the news with the rating of $ b_{i} $ ( $ b_{i}>=1 $ ). He phones the friend immediately and tells it. While he is doing it, the news becomes old and its rating falls a little and becomes equal to $ b_{i}-1 $ . The friend does the same thing — he also calls his friend and also tells the news. The friend of the friend gets the news already rated as $ b_{i}-2 $ . It all continues until the rating of the news reaches zero as nobody wants to tell the news with zero rating.

More formally, everybody acts like this: if a person $ x $ learns the news with a non-zero rating $ y $ , he calls his friend $ g(i) $ and his friend learns the news with the rating of $ y-1 $ and, if it is possible, continues the process.

Let us note that during a day one and the same person may call his friend and tell him one and the same news with different ratings. Thus, the news with the rating of $ b_{i} $ will lead to as much as $ b_{i} $ calls.

Your task is to count the values of $ res_{i} $ — how many students learned their first news on day $ i $ .

The values of $ b_{i} $ are known initially, whereas $ a_{i} $ is determined from the following formula:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF45B/87d3ac8c2d9d9c2f898cd922887b2d5b34a41da4.png) where mod stands for the operation of taking the excess from the cleavage, $ res_{0} $ is considered equal to zero and $ v_{i} $ — some given integers.

## 输入输出格式

### 输入格式

The first line contains two space-separated integers $ n $ and $ m $ ( $ 2<=n,m<=10^{5} $ ) — the number of students and the number of days. The second line contains $ n $ space-separated integers $ g(i) $ ( $ 1<=g(i)<=n,g(i)≠i $ ) — the number of a friend of the $ i $ -th student. The third line contains $ m $ space-separated integers $ v_{i} $ ( $ 1<=v_{i}<=10^{7} $ ). The fourth line contains $ m $ space-separated integers $ b_{i} $ ( $ 1<=b_{i}<=10^{7} $ ).

### 输出格式

Print $ m $ lines containing one number each. The $ i $ -th line should contain $ res_{i} $ — for what number of students the first news they've learned over the $ m $ days in question, was the news number $ i $ . The number of the news is the number of the day on which it can be learned. The days are numbered starting from one in the order in which they are given in the input file. Don't output $ res_{0} $ .

## 输入输出样例

### 输入样例 #1

```cpp
3 4
2 3 1
1 2 3 4
1 2 3 4

```
### 输出样例 #1

```cpp
1
1
1
0

```
### 输入样例 #2

```cpp
8 6
7 6 4 2 3 5 5 7
10 4 3 8 9 1
1 1 1 2 2 2

```
### 输出样例 #2

```cpp
1
1
1
2
1
1

```
