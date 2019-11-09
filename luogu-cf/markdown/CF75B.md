# Facetook Priority Wall

## 题目描述

Facetook is a well known social network website, and it will launch a new feature called Facetook Priority Wall. This feature will sort all posts from your friends according to the priority factor (it will be described).

This priority factor will be affected by three types of actions:

- 1. " $ X $ posted on $ Y $ 's wall" (15 points),

- 2. " $ X $ commented on $ Y $ 's post" (10 points),

- 3. " $ X $ likes $ Y $ 's post" (5 points).

$ X $ and $ Y $ will be two distinct names. And each action will increase the priority factor between $ X $ and $ Y $ (and vice versa) by the above value of points (the priority factor between $ X $ and $ Y $ is the same as the priority factor between $ Y $ and $ X $ ).

You will be given $ n $ actions with the above format (without the action number and the number of points), and you have to print all the distinct names in these actions sorted according to the priority factor with you.

## 输入输出格式

### 输入格式

The first line contains your name. The second line contains an integer $ n $ , which is the number of actions ( $ 1<=n<=100 $ ). Then $ n $ lines follow, it is guaranteed that each one contains exactly 1 action in the format given above. There is exactly one space between each two words in a line, and there are no extra spaces. All the letters are lowercase. All names in the input will consist of at least 1 letter and at most 10 small Latin letters.

### 输出格式

Print $ m $ lines, where $ m $ is the number of distinct names in the input (excluding yourself). Each line should contain just 1 name. The names should be sorted according to the priority factor with you in the descending order (the highest priority factor should come first). If two or more names have the same priority factor, print them in the alphabetical (lexicographical) order.

Note, that you should output all the names that are present in the input data (excluding yourself), even if that person has a zero priority factor.

The lexicographical comparison is performed by the standard "<" operator in modern programming languages. The line $ a $ is lexicographically smaller than the line $ b $ , if either $ a $ is the prefix of $ b $ , or if exists such an $ i $ ( $ 1<=i<=min(|a|,|b|) $ ), that $ a_{i}&lt;b_{i} $ , and for any $ j $ ( $ 1<=j&lt;i $ ) $ a_{j}=b_{j} $ , where $ |a| $ and $ |b| $ stand for the lengths of strings $ a $ and $ b $ correspondently.

## 输入输出样例

### 输入样例 #1

```cpp
ahmed
3
ahmed posted on fatma&#039;s wall
fatma commented on ahmed&#039;s post
mona likes ahmed&#039;s post

```
### 输出样例 #1

```cpp
fatma
mona

```
### 输入样例 #2

```cpp
aba
1
likes likes posted&#039;s post

```
### 输出样例 #2

```cpp
likes
posted

```
