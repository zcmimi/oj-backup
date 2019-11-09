# Need For Brake

## 题目描述

Vasya plays the Need For Brake. He plays because he was presented with a new computer wheel for birthday! Now he is sure that he will win the first place in the championship in his favourite racing computer game!

$ n $ racers take part in the championship, which consists of a number of races. After each race racers are arranged from place first to $ n $ -th (no two racers share the same place) and first $ m $ places are awarded. Racer gains $ b_{i} $ points for $ i $ -th awarded place, which are added to total points, obtained by him for previous races. It is known that current summary score of racer $ i $ is $ a_{i} $ points. In the final standings of championship all the racers will be sorted in descending order of points. Racers with an equal amount of points are sorted by increasing of the name in lexicographical order.

Unfortunately, the championship has come to an end, and there is only one race left. Vasya decided to find out what the highest and lowest place he can take up as a result of the championship.

## 输入输出格式

### 输入格式

The first line contains number $ n $ ( $ 1<=n<=10^{5} $ ) — number of racers. Each of the next $ n $ lines contains $ s_{i} $ and $ a_{i} $ — nick of the racer (nonempty string, which consist of no more than 20 lowercase Latin letters) and the racer's points ( $ 0<=a_{i}<=10^{6} $ ). Racers are given in the arbitrary order.

The next line contains the number $ m $ ( $ 0<=m<=n $ ). Then $ m $ nonnegative integer numbers $ b_{i} $ follow. $ i $ -th number is equal to amount of points for the $ i $ -th awarded place ( $ 0<=b_{i}<=10^{6} $ ).

The last line contains Vasya's racer nick.

### 输出格式

Output two numbers — the highest and the lowest place Vasya can take up as a result of the championship.

## 输入输出样例

### 输入样例 #1

```cpp
3
teama 10
teamb 20
teamc 40
2
10 20
teama

```
### 输出样例 #1

```cpp
2 3
```


### 输入样例 #2

```cpp
2
teama 10
teamb 10
2
10 10
teamb

```
### 输出样例 #2

```cpp
2 2
```


