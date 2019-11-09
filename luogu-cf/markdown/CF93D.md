# Flags

## 题意翻译

题目描述

问只由Red,Black,White,Yellow组成的长度介于[L,R]的字符串且满足以下四个条件的字符串数量

1.相邻两个字符不同

2.White和Yellow不能相邻，Red和Black不能相邻

3.不能出现连续三个字符是Black Whiete Red，反过来也不行

4.两个字符串互为反序视做同一个

输入格式

输入两个整数 L,R(1≤L≤R≤10^9)

输出格式

输出长度介于 [L,R]之间且满足条件的字符串数量，结果模 10^9+7

Translated by @Steinway 

## 题目描述

When Igor K. was a freshman, his professor strictly urged him, as well as all other freshmen, to solve programming Olympiads. One day a problem called "Flags" from a website called Timmy's Online Judge caught his attention. In the problem one had to find the number of three-colored flags that would satisfy the condition... actually, it doesn't matter. Igor K. quickly found the formula and got the so passionately desired Accepted.

However, the professor wasn't very much impressed. He decided that the problem represented on Timmy's Online Judge was very dull and simple: it only had three possible colors of flag stripes and only two limitations. He suggested a complicated task to Igor K. and the fellow failed to solve it. Of course, we won't tell anybody that the professor couldn't solve it as well.

And how about you? Can you solve the problem?

The flags consist of one or several parallel stripes of similar width. The stripes can be one of the following colors: white, black, red or yellow. You should find the number of different flags with the number of stripes from $ L $ to $ R $ , if:

- a flag cannot have adjacent stripes of one color;

- a flag cannot have adjacent white and yellow stripes;

- a flag cannot have adjacent red and black stripes;

- a flag cannot have the combination of black, white and red stripes following one after another in this or reverse order;

- symmetrical flags (as, for example, a WB and a BW flag, where W and B stand for the white and black colors) are considered the same.

## 输入输出格式

### 输入格式

The only line contains two integers $ L $ and $ R $ ( $ 1<=L<=R<=10^{9} $ ). They are the lower and upper borders of the number of stripes on the flag.

### 输出格式

Print a single number — the number of different flags that would satisfy the condition of the problem and would have from $ L $ to $ R $ stripes, modulo $ 1000000007 $ .

## 输入输出样例

### 输入样例 #1

```cpp
3 4

```
### 输出样例 #1

```cpp
23
```


### 输入样例 #2

```cpp
5 6

```
### 输出样例 #2

```cpp
64
```


## 说明

In the first test the following flags exist (they are listed in the lexicographical order, the letters B, R, W, Y stand for Black, Red, White and Yellow correspondingly):

3 stripes: BWB, BYB, BYR, RWR, RYR, WBW, WBY, WRW, WRY, YBY, YRY (overall 11 flags).

4 stripes: BWBW, BWBY, BYBW, BYBY, BYRW, BYRY, RWRW, RWRY, RYBW, RYBY, RYRW, RYRY (12 flags).

That's why the answer to test 1 is equal to $ 11+12=23 $ .

