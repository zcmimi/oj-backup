# The Race

## 题意翻译

题意：给定n个加油站，一辆车由A点跑到B点，每个100m有一个加油站，每开100m需要10升油。

在每个车站会检查一下油量，若车子若开不到下一个加油站则加x升油。

开始有x升油

下面给出加油的记录。

问下一次加油在哪一站。若答案唯一输出具体哪站。

油箱容量无限

翻译贡献者：瓜皮少年

## 题目描述

Every year a race takes place on the motorway between cities A and B. This year Vanya decided to take part in the race and drive his own car that has been around and bears its own noble name — The Huff-puffer.

So, Vasya leaves city A on the Huff-puffer, besides, at the very beginning he fills the petrol tank with $ α $ liters of petrol ( $ α>=10 $ is Vanya's favorite number, it is not necessarily integer). Petrol stations are located on the motorway at an interval of $ 100 $ kilometers, i.e. the first station is located $ 100 $ kilometers away from the city A, the second one is $ 200 $ kilometers away from the city A, the third one is $ 300 $ kilometers away from the city A and so on. The Huff-puffer spends $ 10 $ liters of petrol every $ 100 $ kilometers.

Vanya checks the petrol tank every time he passes by a petrol station. If the petrol left in the tank is not enough to get to the next station, Vanya fills the tank with $ α $ liters of petrol. Otherwise, he doesn't stop at the station and drives on.

For example, if $ α=43.21 $ , then the car will be fuelled up for the first time at the station number $ 4 $ , when there'll be $ 3.21 $ petrol liters left. After the fuelling up the car will have $ 46.42 $ liters. Then Vanya stops at the station number $ 8 $ and ends up with $ 6.42+43.21=49.63 $ liters. The next stop is at the station number $ 12 $ , $ 9.63+43.21=52.84 $ . The next stop is at the station number $ 17 $ and so on.

You won't believe this but the Huff-puffer has been leading in the race! Perhaps it is due to unexpected snow. Perhaps it is due to video cameras that have been installed along the motorway which register speed limit breaking. Perhaps it is due to the fact that Vanya threatened to junk the Huff-puffer unless the car wins. Whatever the reason is, the Huff-puffer is leading, and jealous people together with other contestants wrack their brains trying to think of a way to stop that outrage.

One way to do this is to mine the next petrol station where Vanya will stop. Your task is to calculate at which station this will happen and warn Vanya. You don't know the $ α $ number, however, you are given the succession of the numbers of the stations where Vanya has stopped. Find the number of the station where the next stop will be.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n=10 $ , to which such a succession of stops corresponds.

### 输出格式

Print in the first line "unique" (without quotes) if the answer can be determined uniquely. In the second line print the number of the station where the next stop will take place. If the answer is not unique, print in the first line "not unique".

## 输入输出样例

### 输入样例 #1

```cpp
3
1 2 4

```
### 输出样例 #1

```cpp
unique
5

```
### 输入样例 #2

```cpp
2
1 2

```
### 输出样例 #2

```cpp
not unique

```
## 说明

In the second example the answer is not unique. For example, if $ α=10 $ , we'll have such a sequence as $ 1 $ , $ 2 $ , $ 3 $ , and if $ α=14 $ , the sequence will be $ 1 $ , $ 2 $ , $ 4 $ .

