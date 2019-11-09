# Bulls and Cows

## 题意翻译

# 题目描述

农夫约翰想要将N（1 <= N <= 100,000）奶牛和公牛排在一排，以便在年度展会上展示。

FJ观察到公牛最近非常好斗; 如果两条公牛队在一条线上太靠近，他们会争辩并开始战斗，破坏了演示。资源丰富，FJ计算出任何两只公牛必须在它们之间至少有K（0 <= K <N）奶牛才能避免战斗。 FJ希望你通过计算可以避免任何战斗的N头公牛和奶牛的可能序列来帮助他。FJ认为所有公牛都是一样的，所有的母牛都是一样的; 因此，如果两个序列在​​某个位置具有不同种类的牛，则它们只是不同的。 # 输入描述： 第1行：两个以空格分隔的整数：N和K. # 输出描述： 第1行：一个整数，表示FJ可以创建这样一系列牛的方式。由于此数字可能非常大，因此输出模数为5,000,011的模数。

## 题目描述

The "Bulls and Cows" game needs two people to play. The thinker thinks of a number and the guesser tries to guess it.

The thinker thinks of a four-digit number in the decimal system. All the digits in the number are different and the number may have a leading zero. It can't have more than one leading zero, because all it's digits should be different. The guesser tries to guess the number. He makes a series of guesses, trying experimental numbers and receives answers from the first person in the format " $ x $ bulls $ y $ cows". $ x $ represents the number of digits in the experimental number that occupy the same positions as in the sought number. $ y $ represents the number of digits of the experimental number that present in the sought number, but occupy different positions. Naturally, the experimental numbers, as well as the sought number, are represented by four-digit numbers where all digits are different and a leading zero can be present.

For example, let's suppose that the thinker thought of the number 0123. Then the guessers' experimental number 1263 will receive a reply "1 bull 2 cows" (3 occupies the same positions in both numbers and 1 and 2 are present in both numbers but they occupy different positions). Also, the answer to number 8103 will be "2 bulls 1 cow" (analogically, 1 and 3 occupy the same positions and 0 occupies a different one).

When the guesser is answered "4 bulls 0 cows", the game is over.

Now the guesser has already made several guesses and wants to know whether his next guess can possibly be the last one.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ ( $ 1<=n<=10 $ ) which represents the number of already made guesses. Then follow $ n $ lines in the form of " $ a_{i} $ $ b_{i} $ $ c_{i} $ ", where $ a_{i} $ is the $ i $ -th experimental number, $ b_{i} $ is the number of bulls, $ c_{i} $ is the number of cows ( $ 1<=i<=n $ , $ 0<=b_{i},c_{i},b_{i}+c_{i}<=4 $ ). The experimental numbers are correct, i.e., each of them contains exactly four digits, in each of them all the four digits are different, and there can be a leading zero. All the experimental numbers are different. As the guesser hasn't guessed the number yet, the answer "4 bulls 0 cows" is not present.

### 输出格式

If the input data is enough to determine the sought number, print the number with four digits on a single line. If it has less than four digits, add leading zero. If the data is not enough, print "Need more data" without the quotes. If the thinker happens to have made a mistake in his replies, print "Incorrect data" without the quotes.

## 输入输出样例

### 输入样例 #1

```cpp
2
1263 1 2
8103 2 1

```
### 输出样例 #1

```cpp
Need more data
```


### 输入样例 #2

```cpp
2
1234 2 2
1256 0 2

```
### 输出样例 #2

```cpp
2134
```


### 输入样例 #3

```cpp
2
0123 1 1
4567 1 2

```
### 输出样例 #3

```cpp
Incorrect data
```


