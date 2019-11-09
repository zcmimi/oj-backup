# Reflection

## 题意翻译

定义一个数的“Reflecion number”，是用9减去它的每一个数位后,再去掉前导0而形成的数，如192的“Reflecion number”是807（9-1=8，9-9=0，9-2=7）。

再定义一个数的“Weight”，它等于这个数自身乘以这个数的“Reflecion number”。

输入l和r（1<=l<=r<=10^9}，输出l到r的数中"Weight"的最大值。

## 题目描述

For each positive integer $ n $ consider the integer $ ψ(n) $ which is obtained from $ n $ by replacing every digit $ a $ in the decimal notation of $ n $ with the digit $ (9-a) $ . We say that $ ψ(n) $ is the reflection of $ n $ . For example, reflection of $ 192 $ equals $ 807 $ . Note that leading zeros (if any) should be omitted. So reflection of $ 9 $ equals $ 0 $ , reflection of $ 91 $ equals $ 8 $ .

Let us call the weight of the number the product of the number and its reflection. Thus, the weight of the number $ 10 $ is equal to $ 10·89=890 $ .

Your task is to find the maximum weight of the numbers in the given range $ [l,r] $ (boundaries are included).

## 输入输出格式

### 输入格式

Input contains two space-separated integers $ l $ and $ r $ ( $ 1<=l<=r<=10^{9} $ ) — bounds of the range.

### 输出格式

Output should contain single integer number: maximum value of the product $ n·ψ(n) $ , where $ l<=n

Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preferred to use cout (also you may use %I64d).

## 输入输出样例

### 输入样例 #1

```cpp
3 7

```
### 输出样例 #1

```cpp
20
```


### 输入样例 #2

```cpp
1 1

```
### 输出样例 #2

```cpp
8
```


### 输入样例 #3

```cpp
8 10

```
### 输出样例 #3

```cpp
890
```


## 说明

In the third sample weight of $ 8 $ equals $ 8·1=8 $ , weight of $ 9 $ equals $ 9·0=0 $ , weight of $ 10 $ equals $ 890 $ .

Thus, maximum value of the product is equal to $ 890 $ .

