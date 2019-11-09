# Text Messaging

## 题意翻译

给你n（每条短信的最大容量）和一个字符串s，现在有个人要发短信，在这个字符串中没出现'.','!','?'是一句话的末尾，问你最少要发几条短信。（注：每两句话叠加在一起要多一个空格）

## 题目描述

Fangy the little walrus, as all the modern walruses, loves to communicate via text messaging. One day he faced the following problem: When he sends large texts, they are split into parts each containing $ n $ characters (which is the size of one text message). Thus, whole sentences and words get split!

Fangy did not like it, so he faced the task of breaking the text into minimal messages on his own so that no sentence were broken into pieces when it is sent and the number of text messages to be sent would be minimal. If two consecutive sentences are in different messages, the space between them can be ignored (Fangy does not write this space).

The little walrus's text looks in the following manner:

`TEXT ::= SENTENCE | SENTENCE SPACE TEXTSENTENCE ::= WORD SPACE SENTENCE | WORD ENDEND ::= {'.', '?', '!'}WORD ::= LETTER | LETTER WORDLETTER ::= {'a'..'z', 'A'..'Z'}SPACE ::= ' '`SPACE stands for the symbol of a space.

So, how many messages did Fangy send?

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ , which is the size of one message ( $ 2<=n<=255 $ ). The second line contains the text. The length of the text does not exceed $ 10^{4} $ characters. It is guaranteed that the text satisfies the above described format. Specifically, this implies that the text is not empty.

### 输出格式

On the first and only line print the number of text messages Fangy will need. If it is impossible to split the text, print "Impossible" without the quotes.

## 输入输出样例

### 输入样例 #1

```cpp
25
Hello. I am a little walrus.

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
2
How are you?

```
### 输出样例 #2

```cpp
Impossible

```
### 输入样例 #3

```cpp
19
Hello! Do you like fish? Why?

```
### 输出样例 #3

```cpp
3

```
## 说明

Let's take a look at the third sample. The text will be split into three messages: "Hello!", "Do you like fish?" and "Why?".

