# Smart Boy

## 题目描述

Once Petya and Vasya invented a new game and called it "Smart Boy". They located a certain set of words — the dictionary — for the game. It is admissible for the dictionary to contain similar words.

The rules of the game are as follows: first the first player chooses any letter (a word as long as $ 1 $ ) from any word from the dictionary and writes it down on a piece of paper. The second player adds some other letter to this one's initial or final position, thus making a word as long as $ 2 $ , then it's the first player's turn again, he adds a letter in the beginning or in the end thus making a word as long as $ 3 $ and so on. But the player mustn't break one condition: the newly created word must be a substring of a word from a dictionary. The player who can't add a letter to the current word without breaking the condition loses.

Also if by the end of a turn a certain string $ s $ is written on paper, then the player, whose turn it just has been, gets a number of points according to the formula:

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF38F/0581ff8dd9c5f97bc34f4839b9be626798958173.png)where

- ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF38F/e4be189456c3857fdc2ca591471080a7e0553024.png) is a sequence number of symbol $ c $ in Latin alphabet, numbered starting from $ 1 $ . For example, ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF38F/a709cc8eab21d8d610387ef6b07c36d3277a654a.png), and ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF38F/72027ed786a5fe069852a41dd736894e110bbaab.png).

- ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF38F/a15427ebfe6c6b2fd1a1aca564e59cc85cdf2fd3.png) is the number of words from the dictionary where the line $ s $ occurs as a substring at least once.

Your task is to learn who will win the game and what the final score will be. Every player plays optimally and most of all tries to win, then — to maximize the number of his points, then — to minimize the number of the points of the opponent.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ which is the number of words in the located dictionary $ (1<=n<=30) $ . The $ n $ lines contain the words from the dictionary — one word is written on one line. Those lines are nonempty, consisting of Latin lower-case characters no longer than $ 30 $ characters. Equal words can be in the list of words.

### 输出格式

On the first output line print a line "First" or "Second" which means who will win the game. On the second line output the number of points of the first player and the number of points of the second player after the game ends. Separate the numbers by a single space.

## 输入输出样例

### 输入样例 #1

```cpp
2
aba
abac

```
### 输出样例 #1

```cpp
Second
29 35

```
### 输入样例 #2

```cpp
3
artem
nik
max

```
### 输出样例 #2

```cpp
First
2403 1882

```
