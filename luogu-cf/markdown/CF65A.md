# Harry Potter and Three Spells

## 题意翻译

题目描述

很久以前（可能甚至在第一本书中），尼古拉斯·勒梅，一位伟大的炼金术士和魔法石的创造者，教哈利·波特三个有用的咒语。第一种方法允许将一克沙子转换成b克铅，第二种方法允许将c克铅转换成d克金，第三种方法允许将e克金转换成f克沙子。当哈利告诉他的朋友这些咒语时，罗恩很惊讶。毕竟，如果他们能把沙子变成铅，铅变成金，然后再把部分金变成沙子，那么就有可能从少量的沙子开始得到大量的金！即是无限量的黄金！相比之下，格兰杰对这个想法持怀疑态度。她认为，根据物质守恒定律，获得无限量的物质，即使使用魔法，也是不可能的。相反，物质在转化过程中甚至会减少，转化为能量。虽然赫敏的理论似乎令人信服，罗恩却不相信她。就罗恩而言，赫敏制定了她的物质守恒定律，以阻止哈利和罗恩浪费时间在这些胡言乱语上，而是让他们去做家庭作业。这就是为什么罗恩已经收集了一定数量的沙子进行实验。朋友之间的争吵似乎是不可避免的。

帮助哈利确定他的朋友中哪一个是对的，避免争吵。要做到这一点，你必须弄清楚是否有可能从有限数量的沙子中获得比任何预先分配黄金数量更多的黄金数量。

输入输出格式

输入格式：

第一行包含6个整数 a,b,c,d,e,f ( 0<=a,b,c,d,e,f<=1000).

输出格式：

如果可以获得无限的金，输出“Ron”，即Ron是正确的。否则，输出“Hermione”。

说明

样例1 让我们从500克沙子开始。第一次施法5次，把沙子变成1000克铅。然后应用第二个法术4次，得到600克黄金。让我们把400克的黄金转化成沙子。我们得到500克沙子和200克黄金。如果我们把同样的操作再次应用到500克沙子上，我们每次都能获得额外的200克黄金。因此，你可以得到200、400、600等克的黄金，也就是说，从有限量的沙子（500克）开始，你可以得到无限黄金。

样例4 不可能得到沙子，或铅，或金

样例5 只有使用第二个法术才能获得无限大的黄金量，这允许你从凭空得到1克的黄金。注意，如果这样的第二个咒语可用，那么第一个和第三个咒语根本不影响答案。

样例7 我们也可以从零的沙子开始。借助第三咒语，你可以从任何东西中得到沙子。我们用这种方法得到10000克沙子。让我们用第一次100次获得100克铅。然后从他们身上制造1克黄金。我们成功地收到了1克黄金，从零量的沙子开始！显然，通过这种方式，你可以得到无穷多的黄金。

## 题目描述

A long time ago (probably even in the first book), Nicholas Flamel, a great alchemist and the creator of the Philosopher's Stone, taught Harry Potter three useful spells. The first one allows you to convert $ a $ grams of sand into $ b $ grams of lead, the second one allows you to convert $ c $ grams of lead into $ d $ grams of gold and third one allows you to convert $ e $ grams of gold into $ f $ grams of sand. When Harry told his friends about these spells, Ron Weasley was amazed. After all, if they succeed in turning sand into lead, lead into gold, and then turning part of the gold into sand again and so on, then it will be possible to start with a small amount of sand and get huge amounts of gold! Even an infinite amount of gold! Hermione Granger, by contrast, was skeptical about that idea. She argues that according to the law of conservation of matter getting an infinite amount of matter, even using magic, is impossible. On the contrary, the amount of matter may even decrease during transformation, being converted to magical energy. Though Hermione's theory seems convincing, Ron won't believe her. As far as Ron is concerned, Hermione made up her law of conservation of matter to stop Harry and Ron wasting their time with this nonsense, and to make them go and do homework instead. That's why Ron has already collected a certain amount of sand for the experiments. A quarrel between the friends seems unavoidable...

Help Harry to determine which one of his friends is right, and avoid the quarrel after all. To do this you have to figure out whether it is possible to get the amount of gold greater than any preassigned number from some finite amount of sand.

## 输入输出格式

### 输入格式

The first line contains $ 6 $ integers $ a $ , $ b $ , $ c $ , $ d $ , $ e $ , $ f $ ( $ 0<=a,b,c,d,e,f<=1000 $ ).

### 输出格式

Print "Ron", if it is possible to get an infinitely large amount of gold having a certain finite amount of sand (and not having any gold and lead at all), i.e., Ron is right. Otherwise, print "Hermione".

## 输入输出样例

### 输入样例 #1

```cpp
100 200 250 150 200 250

```
### 输出样例 #1

```cpp
Ron

```
### 输入样例 #2

```cpp
100 50 50 200 200 100

```
### 输出样例 #2

```cpp
Hermione

```
### 输入样例 #3

```cpp
100 10 200 20 300 30

```
### 输出样例 #3

```cpp
Hermione

```
### 输入样例 #4

```cpp
0 0 0 0 0 0

```
### 输出样例 #4

```cpp
Hermione

```
### 输入样例 #5

```cpp
1 1 0 1 1 1

```
### 输出样例 #5

```cpp
Ron

```
### 输入样例 #6

```cpp
1 0 1 2 1 2

```
### 输出样例 #6

```cpp
Hermione

```
### 输入样例 #7

```cpp
100 1 100 1 0 1

```
### 输出样例 #7

```cpp
Ron

```
## 说明

Consider the first sample. Let's start with the $ 500 $ grams of sand. Apply the first spell $ 5 $ times and turn the sand into $ 1000 $ grams of lead. Then apply the second spell $ 4 $ times to get $ 600 $ grams of gold. Let’s take $ 400 $ grams from the resulting amount of gold turn them back into sand. We get $ 500 $ grams of sand and $ 200 $ grams of gold. If we apply the same operations to $ 500 $ grams of sand again, we can get extra $ 200 $ grams of gold every time. Thus, you can get $ 200 $ , $ 400 $ , $ 600 $ etc. grams of gold, i.e., starting with a finite amount of sand ( $ 500 $ grams), you can get the amount of gold which is greater than any preassigned number.

In the forth sample it is impossible to get sand, or lead, or gold, applying the spells.

In the fifth sample an infinitely large amount of gold can be obtained by using only the second spell, which allows you to receive $ 1 $ gram of gold out of nothing. Note that if such a second spell is available, then the first and the third one do not affect the answer at all.

The seventh sample is more interesting. We can also start with a zero amount of sand there. With the aid of the third spell you can get sand out of nothing. We get $ 10000 $ grams of sand in this manner. Let's get $ 100 $ grams of lead using the first spell $ 100 $ times. Then make $ 1 $ gram of gold from them. We managed to receive $ 1 $ gram of gold, starting with a zero amount of sand! Clearly, in this manner you can get an infinitely large amount of gold.

