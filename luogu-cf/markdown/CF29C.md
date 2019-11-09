# Mail Stamps

## 题意翻译

一天Bob收到了一封信，他知道如果一封信由城市A寄往城市B，那么邮局的工作人员会在信封上贴一张或者的邮票。但不幸的是，一封信基本不可能直接从发件人所在城市直接邮寄到收件人所在城市，所以这封信会经过一些中间城市进行邮寄。邮局的工作人员并不会将一封信寄往这封信之前到过的城市，并且保证所有邮票都是正确的。

现在这封信上有N张邮票，Bob知道这封信的可能经过路径只有两条（即正着和反着）现在他希望你帮他找出一条可能的路线

## 题目描述

One day Bob got a letter in an envelope. Bob knows that when Berland's post officers send a letter directly from city «A» to city «B», they stamp it with «A B», or «B A». Unfortunately, often it is impossible to send a letter directly from the city of the sender to the city of the receiver, that's why the letter is sent via some intermediate cities. Post officers never send a letter in such a way that the route of this letter contains some city more than once. Bob is sure that the post officers stamp the letters accurately.

There are $ n $ stamps on the envelope of Bob's letter. He understands that the possible routes of this letter are only two. But the stamps are numerous, and Bob can't determine himself none of these routes. That's why he asks you to help him. Find one of the possible routes of the letter.

## 输入输出格式

### 输入格式

The first line contains integer $ n $ ( $ 1<=n<=10^{5} $ ) — amount of mail stamps on the envelope. Then there follow $ n $ lines with two integers each — description of the stamps. Each stamp is described with indexes of the cities between which a letter is sent. The indexes of cities are integers from $ 1 $ to $ 10^{9} $ . Indexes of all the cities are different. Every time the letter is sent from one city to another, exactly one stamp is put on the envelope. It is guaranteed that the given stamps correspond to some valid route from some city to some other city.

### 输出格式

Output $ n+1 $ numbers — indexes of cities in one of the two possible routes of the letter.

## 输入输出样例

### 输入样例 #1

```cpp
2
1 100
100 2

```
### 输出样例 #1

```cpp
2 100 1 
```


### 输入样例 #2

```cpp
3
3 1
100 2
3 2

```
### 输出样例 #2

```cpp
100 2 3 1 
```


