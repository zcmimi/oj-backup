# Holidays

## 题意翻译

n天假期，安排m个人来浇花，第i个人负责[a[i],b[i]]天，问花是否可以每天都被浇水且不重复。

可以的话输出“OK”，不可以的话输出最早出问题的那天的天号以及那天花被浇了多少次水。

1≤n,m≤100

1≤a[i]≤b[i]≤n

b[i]≤a[i+1]

感谢@夜刀神十香ღ 提供的翻译

## 题目描述

School holidays come in Berland. The holidays are going to continue for $ n $ days. The students of school № $ N $ are having the time of their lives and the IT teacher Marina Sergeyevna, who has spent all the summer busy checking the BSE (Berland State Examination) results, has finally taken a vacation break! Some people are in charge of the daily watering of flowers in shifts according to the schedule. However when Marina Sergeyevna was making the schedule, she was so tired from work and so lost in dreams of the oncoming vacation that she perhaps made several mistakes. In fact, it is possible that according to the schedule, on some days during the holidays the flowers will not be watered or will be watered multiple times. Help Marina Sergeyevna to find a mistake.

## 输入输出格式

### 输入格式

The first input line contains two numbers $ n $ and $ m $ ( $ 1<=n,m<=100 $ ) — the number of days in Berland holidays and the number of people in charge of the watering respectively. The next $ m $ lines contain the description of the duty schedule. Each line contains two integers $ a_{i} $ and $ b_{i} $ ( $ 1<=a_{i}<=b_{i}<=n $ ), meaning that the $ i $ -th person in charge should water the flowers from the $ a_{i} $ -th to the $ b_{i} $ -th day inclusively, once a day. The duty shifts are described sequentially, i.e. $ b_{i}<=a_{i+1} $ for all $ i $ from $ 1 $ to $ n-1 $ inclusively.

### 输出格式

Print "OK" (without quotes), if the schedule does not contain mistakes. Otherwise you have to find the minimal number of a day when the flowers will not be watered or will be watered multiple times, and output two integers — the day number and the number of times the flowers will be watered that day.

## 输入输出样例

### 输入样例 #1

```cpp
10 5
1 2
3 3
4 6
7 7
8 10

```
### 输出样例 #1

```cpp
OK

```
### 输入样例 #2

```cpp
10 5
1 2
2 3
4 5
7 8
9 10

```
### 输出样例 #2

```cpp
2 2

```
### 输入样例 #3

```cpp
10 5
1 2
3 3
5 7
7 7
7 10

```
### 输出样例 #3

```cpp
4 0

```
## 说明

Keep in mind that in the second sample the mistake occurs not only on the second day, but also on the sixth day, when nobody waters the flowers. However, you have to print the second day, i.e. the day with the minimal number.

