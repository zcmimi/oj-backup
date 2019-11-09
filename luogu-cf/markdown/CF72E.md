# Ali goes shopping

## 题目描述

Ali Koochooloo is going to buy new clothes since we're reaching Noruz, the ancient Persian festival and the beginning of new Persian year.

When Ali entered a shop, he saw that the shopkeeper was a programmer and since there is no money in programming he had changed his career. The shopkeeper told Ali that he can buy anything for free if he could answer a simple question in $ 10 $ seconds. But to see the question Ali has to pay 3 tomans.

Ali agreed instantly and the shopkeeper handed him a piece of paper containing the task. The task was indeed very simple. It said:

Let string $ A $ be ababababababab. Which non-empty substring of $ A $ is repeated the most times in it?

Ali answered fast. He said the answer is a. But the shopkeeper said that Ali is wrong and asked him to read the rest of statement:

If several substrings have the maximal repeat time, then the substring with maximal length would be the answer, in case of a tie the alphabetically latest substring will be chosen.

So the answer is ab.

Now Ali wants us to solve this problem for different strings. We don't have a great advantage over Ali, we just have a computer and a weird language.

## 输入输出格式

### 输入格式

The single line consisting of a string $ A $ . It is non-empty, made of lower-case Latin letters and contains at most $ 30 $ characters.

### 输出格式

The single line contains the answer.

## 输入输出样例

### 输入样例 #1

```cpp
abab

```
### 输出样例 #1

```cpp
ab

```
### 输入样例 #2

```cpp
abcd

```
### 输出样例 #2

```cpp
abcd

```
