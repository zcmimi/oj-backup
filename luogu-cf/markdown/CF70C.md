# Lucky Tickets

## 题目描述

In Walrusland public transport tickets are characterized by two integers: by the number of the series and by the number of the ticket in the series. Let the series number be represented by $ a $ and the ticket number — by $ b $ , then a ticket is described by the ordered pair of numbers $ (a,b) $ .

The walruses believe that a ticket is lucky if $ a*b=rev(a)*rev(b) $ . The function $ rev(x) $ reverses a number written in the decimal system, at that the leading zeroes disappear. For example, $ rev(12343)=34321 $ , $ rev(1200)=21 $ .

The Public Transport Management Committee wants to release $ x $ series, each containing $ y $ tickets, so that at least $ w $ lucky tickets were released and the total number of released tickets ( $ x*y $ ) were minimum. The series are numbered from $ 1 $ to $ x $ inclusive. The tickets in each series are numbered from $ 1 $ to $ y $ inclusive. The Transport Committee cannot release more than $ max_{x} $ series and more than $ max_{y} $ tickets in one series.

## 输入输出格式

### 输入格式

The first line contains three integers $ max_{x} $ , $ max_{y} $ , $ w $ ( $ 1<=max_{x},max_{y}<=10^{5} $ , $ 1<=w<=10^{7} $ ).

### 输出格式

Print on a single line two space-separated numbers, the $ x $ and the $ y $ . If there are several possible variants, print any of them. If such $ x $ and $ y $ do not exist, print a single number $ -1 $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 2 1

```
### 输出样例 #1

```cpp
1 1
```


### 输入样例 #2

```cpp
132 10 35

```
### 输出样例 #2

```cpp
7 5
```


### 输入样例 #3

```cpp
5 18 1000

```
### 输出样例 #3

```cpp
-1

```
### 输入样例 #4

```cpp
48 132 235

```
### 输出样例 #4

```cpp
22 111
```


