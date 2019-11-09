# Phone Number

## 题意翻译

给你一个电话号码，根据这个号码生成一个新的号码。生成的规则就是 新号码的第一个数任意选(0-9), 然后之后的每一个新号码都按照以下规则生成：

```

第i个新号码=（第i-1个新号码+第i个老号码的和）/2

```

这里如果乘除，则新号码i唯一，否则新号码i可以向上或向下取整。

求总共能生成多少种号码

感谢@夜刀神十香ღ 提供的翻译

## 题目描述

Alas, finding one's true love is not easy. Masha has been unsuccessful in that yet. Her friend Dasha told Masha about a way to determine the phone number of one's Prince Charming through arithmancy.

The phone number is divined like that. First one needs to write down one's own phone numbers. For example, let's suppose that Masha's phone number is $ 12345 $ . After that one should write her favorite digit from $ 0 $ to $ 9 $ under the first digit of her number. That will be the first digit of the needed number. For example, Masha's favorite digit is $ 9 $ . The second digit is determined as a half sum of the second digit of Masha's number and the already written down first digit from her beloved one's number. In this case the arithmetic average equals to $ (2+9)/2=5.5 $ . Masha can round the number up or down, depending on her wishes. For example, she chooses the digit $ 5 $ . Having written down the resulting digit under the second digit of her number, Masha moves to finding the third digit in the same way, i.e. finding the half sum the the third digit of her number and the second digit of the new number. The result is $ (5+3)/2=4 $ . In this case the answer is unique. Thus, every $ i $ -th digit is determined as an arithmetic average of the $ i $ -th digit of Masha's number and the $ i-1 $ -th digit of her true love's number. If needed, the digit can be rounded up or down. For example, Masha can get:

$ 12345 $ $ 95444 $ Unfortunately, when Masha tried dialing the number, she got disappointed: as it turned out, the number was unavailable or outside the coverage area. But Masha won't give up. Perhaps, she rounded to a wrong digit or chose the first digit badly. That's why she keeps finding more and more new numbers and calling them. Count the number of numbers Masha calls. Masha calls all the possible numbers that can be found by the described means of arithmancy, except for, perhaps, her own one.

## 输入输出格式

### 输入格式

The first line contains nonempty sequence consisting of digits from $ 0 $ to $ 9 $ — Masha's phone number. The sequence length does not exceed $ 50 $ .

### 输出格式

Output the single number — the number of phone numbers Masha will dial.

## 输入输出样例

### 输入样例 #1

```cpp
12345

```
### 输出样例 #1

```cpp
48

```
### 输入样例 #2

```cpp
09

```
### 输出样例 #2

```cpp
15

```
