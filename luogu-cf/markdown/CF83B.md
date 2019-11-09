# Doctor

## 题目描述

There are $ n $ animals in the queue to Dr. Dolittle. When an animal comes into the office, the doctor examines him, gives prescriptions, appoints tests and may appoint extra examination. Doc knows all the forest animals perfectly well and therefore knows exactly that the animal number $ i $ in the queue will have to visit his office exactly $ a_{i} $ times. We will assume that an examination takes much more time than making tests and other extra procedures, and therefore we will assume that once an animal leaves the room, it immediately gets to the end of the queue to the doctor. Of course, if the animal has visited the doctor as many times as necessary, then it doesn't have to stand at the end of the queue and it immediately goes home.

Doctor plans to go home after receiving $ k $ animals, and therefore what the queue will look like at that moment is important for him. Since the doctor works long hours and she can't get distracted like that after all, she asked you to figure it out.

## 输入输出格式

### 输入格式

The first line of input data contains two space-separated integers $ n $ and $ k $ ( $ 1<=n<=10^{5} $ , $ 0<=k<=10^{14} $ ). In the second line are given space-separated integers $ a_{1},a_{2},...,a_{n} $ ( $ 1<=a_{i}<=10^{9} $ ).

Please do not use the %lld specificator to read or write 64-bit numbers in C++. It is recommended to use cin, cout streams (you can also use the %I64d specificator).

### 输出格式

If the doctor will overall carry out less than $ k $ examinations, print a single number "-1" (without quotes). Otherwise, print the sequence of numbers — number of animals in the order in which they stand in the queue.

Note that this sequence may be empty. This case is present in pretests. You can just print nothing or print one "End of line"-character. Both will be accepted.

## 输入输出样例

### 输入样例 #1

```cpp
3 3
1 2 1

```
### 输出样例 #1

```cpp
2 
```


### 输入样例 #2

```cpp
4 10
3 3 2 1

```
### 输出样例 #2

```cpp
-1

```
### 输入样例 #3

```cpp
7 10
1 3 3 1 2 3 1

```
### 输出样例 #3

```cpp
6 2 3 
```


## 说明

In the first sample test:

- Before examination: $ {1,2,3} $

- After the first examination: $ {2,3} $

- After the second examination: $ {3,2} $

- After the third examination: $ {2} $

In the second sample test:

- Before examination: $ {1,2,3,4,5,6,7} $

- After the first examination: $ {2,3,4,5,6,7} $

- After the second examination: $ {3,4,5,6,7,2} $

- After the third examination: $ {4,5,6,7,2,3} $

- After the fourth examination: $ {5,6,7,2,3} $

- After the fifth examination: $ {6,7,2,3,5} $

- After the sixth examination: $ {7,2,3,5,6} $

- After the seventh examination: $ {2,3,5,6} $

- After the eighth examination: $ {3,5,6,2} $

- After the ninth examination: $ {5,6,2,3} $

- After the tenth examination: $ {6,2,3} $

