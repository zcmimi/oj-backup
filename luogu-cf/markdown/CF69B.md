# Bets

## 题目描述

In Chelyabinsk lives a much respected businessman Nikita with a strange nickname "Boss". Once Nikita decided to go with his friend Alex to the Summer Biathlon World Cup. Nikita, as a very important person, received a token which allows to place bets on each section no more than on one competitor.

To begin with friends learned the rules: in the race there are $ n $ sections of equal length and $ m $ participants. The participants numbered from $ 1 $ to $ m $ . About each participant the following is known:

- $ l_{i} $ — the number of the starting section,

- $ r_{i} $ — the number of the finishing section ( $ l_{i}<=r_{i} $ ),

- $ t_{i} $ — the time a biathlete needs to complete an section of the path,

- $ c_{i} $ — the profit in roubles. If the $ i $ -th sportsman wins on one of the sections, the profit will be given to the man who had placed a bet on that sportsman.

The $ i $ -th biathlete passes the sections from $ l_{i} $ to $ r_{i} $ inclusive. The competitor runs the whole way in $ (r_{i}-l_{i}+1)·t_{i} $ time units. It takes him exactly $ t_{i} $ time units to pass each section. In case of the athlete's victory on $ k $ sections the man who has betted on him receives $ k·c_{i} $ roubles.

In each section the winner is determined independently as follows: if there is at least one biathlete running this in this section, then among all of them the winner is the one who has ran this section in minimum time (spent minimum time passing this section). In case of equality of times the athlete with the smaller index number wins. If there are no participants in this section, then the winner in this section in not determined. We have to say that in the summer biathlon all the participants are moving at a constant speed.

We should also add that Nikita can bet on each section and on any contestant running in this section.

Help the friends find the maximum possible profit.

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ m $ ( $ 1<=n,m<=100 $ ). Then follow $ m $ lines, each containing 4 integers $ l_{i} $ , $ r_{i} $ , $ t_{i} $ , $ c_{i} $ ( $ 1<=l_{i}<=r_{i}<=n $ , $ 1<=t_{i},c_{i}<=1000 $ ).

### 输出格式

Print a single integer, the maximal profit in roubles that the friends can get. In each of $ n $ sections it is not allowed to place bets on more than one sportsman.

## 输入输出样例

### 输入样例 #1

```cpp
4 4
1 4 20 5
1 3 21 10
3 3 4 30
3 4 4 20

```
### 输出样例 #1

```cpp
60
```


### 输入样例 #2

```cpp
8 4
1 5 24 10
2 4 6 15
4 6 30 50
6 7 4 20

```
### 输出样例 #2

```cpp
105
```


## 说明

In the first test the optimal bet is: in the 1-2 sections on biathlete 1, in section 3 on biathlete 3, in section 4 on biathlete 4. Total: profit of 5 rubles for 1 section, the profit of 5 rubles for 2 section, profit of 30 rubles for a 3 section, profit of 20 rubles for 4 section. Total profit 60 rubles.

In the second test the optimal bet is: on 1 and 5 sections on biathlete 1, in the 2-4 sections on biathlete 2, in the 6-7 sections on athlete 4. There is no winner in the 8 section. Total: profit of 10 rubles for 1 section, the profit of 15 rubles for 2,3,4 section, profit of 10 rubles for a 5 section, profit of 20 rubles for 6, 7 section. Total profit 105 rubles.

