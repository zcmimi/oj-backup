# Animals

## 题意翻译

** 有某类动物，要在农场中待n(1 ≤ n ≤ 100)天，第i天，这类动物要吃的粮食为ci，现在初始粮草是X(1≤X≤10000)，问你最多可以容纳几只动物?**

### 注意：动物可以中途来，但是不能中途走

------by qihongzhou2

## 题目描述

Once upon a time DravDe, an outstanding person famous for his professional achievements (as you must remember, he works in a warehouse storing Ogudar-Olok, a magical but non-alcoholic drink) came home after a hard day. That day he had to drink 9875 boxes of the drink and, having come home, he went to bed at once.

DravDe dreamt about managing a successful farm. He dreamt that every day one animal came to him and asked him to let it settle there. However, DravDe, being unimaginably kind, could send the animal away and it went, rejected. There were exactly $ n $ days in DravDe’s dream and the animal that came on the $ i $ -th day, ate exactly $ c_{i} $ tons of food daily starting from day $ i $ . But if one day the animal could not get the food it needed, it got really sad. At the very beginning of the dream there were exactly $ X $ tons of food on the farm.

DravDe woke up terrified...

When he retold the dream to you, he couldn’t remember how many animals were on the farm by the end of the $ n $ -th day any more, but he did remember that nobody got sad (as it was a happy farm) and that there was the maximum possible amount of the animals. That’s the number he wants you to find out.

It should be noticed that the animals arrived in the morning and DravDe only started to feed them in the afternoon, so that if an animal willing to join them is rejected, it can’t eat any farm food. But if the animal does join the farm, it eats daily from that day to the $ n $ -th.

## 输入输出格式

### 输入格式

The first input line contains integers $ n $ and $ X $ ( $ 1<=n<=100,1<=X<=10^{4} $ ) — amount of days in DravDe’s dream and the total amount of food (in tons) that was there initially. The second line contains integers $ c_{i} $ ( $ 1<=c_{i}<=300 $ ). Numbers in the second line are divided by a space.

### 输出格式

Output the only number — the maximum possible amount of animals on the farm by the end of the $ n $ -th day given that the food was enough for everybody.

## 输入输出样例

### 输入样例 #1

```cpp
3 4
1 1 1

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
3 6
1 1 1

```
### 输出样例 #2

```cpp
3

```
## 说明

Note to the first example: DravDe leaves the second and the third animal on the farm. The second animal will eat one ton of food on the second day and one ton on the third day. The third animal will eat one ton of food on the third day.

