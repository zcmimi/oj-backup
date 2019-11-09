# Cinema Cashier

## 题意翻译

有一个电影院，大小是k*k的，然后有n波人依次到来

每一波人都想选择尽量靠中间的位置，就是这一波人都必须坐在同一行，并且有一个花费就是abs(x-zx)+abs(y-zy)

然后你需要给他们安排座位，使得花费最小，如果花费一样，就坐左前方。

问你怎么去安排

## 题目描述

All cinema halls in Berland are rectangles with $ K $ rows of $ K $ seats each, and $ K $ is an odd number. Rows and seats are numbered from $ 1 $ to $ K $ . For safety reasons people, who come to the box office to buy tickets, are not allowed to choose seats themselves. Formerly the choice was made by a cashier, but now this is the responsibility of a special seating program. It was found out that the large majority of Berland's inhabitants go to the cinema in order to watch a movie, that's why they want to sit as close to the hall center as possible. Moreover, a company of $ M $ people, who come to watch a movie, want necessarily to occupy $ M $ successive seats in one row. Let's formulate the algorithm, according to which the program chooses seats and sells tickets. As the request for $ M $ seats comes, the program should determine the row number $ x $ and the segment $ [y_{l},y_{r}] $ of the seats numbers in this row, where $ y_{r}-y_{l}+1=M $ . From all such possible variants as a final result the program should choose the one with the minimum function value of total seats remoteness from the center. Say, ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF10B/c9748a84837b67ee9aa2cbea2b55fdd9ec523940.png) — the row and the seat numbers of the most "central" seat. Then the function value of seats remoteness from the hall center is ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF10B/9bc644baca5d1a575e01b85fce16d96f8e180ca4.png). If the amount of minimum function values is more than one, the program should choose the one that is closer to the screen (i.e. the row number $ x $ is lower). If the variants are still multiple, it should choose the one with the minimum $ y_{l} $ . If you did not get yet, your task is to simulate the work of this program.

## 输入输出格式

### 输入格式

The first line contains two integers $ N $ and $ K $ ( $ 1<=N<=1000,1<=K<=99 $ ) — the amount of requests and the hall size respectively. The second line contains $ N $ space-separated integers $ M_{i} $ from the range $ [1,K] $ — requests to the program.

### 输出格式

Output $ N $ lines. In the $ i $ -th line output «-1» (without quotes), if it is impossible to find $ M_{i} $ successive seats in one row, otherwise output three numbers $ x,y_{l},y_{r} $ . Separate the numbers with a space.

## 输入输出样例

### 输入样例 #1

```cpp
2 1
1 1

```
### 输出样例 #1

```cpp
1 1 1
-1

```
### 输入样例 #2

```cpp
4 3
1 2 3 1

```
### 输出样例 #2

```cpp
2 2 2
1 1 2
3 1 3
2 1 1

```
