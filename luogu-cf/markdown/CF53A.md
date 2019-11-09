# Autocomplete

## 题意翻译

```

给定一个字符串s和n个匹配字符串，试求能够把字符串s补齐的匹配字符串中字典序最小的是哪个。

如果没有，就直接输出s本身即可。

输入:第一行s，第二行n，之后n行为n个匹配字符串。

输出:一个字符串，如题面所求。

1<=n<=100

```

贡献者：稀神探女

## 题目描述

Autocomplete is a program function that enables inputting the text (in editors, command line shells, browsers etc.) completing the text by its inputted part. Vasya is busy working on a new browser called 'BERowser'. He happens to be working on the autocomplete function in the address line at this very moment. A list consisting of $ n $ last visited by the user pages and the inputted part $ s $ are known. Your task is to complete $ s $ to make it an address of one of the pages from the list. You have to find the lexicographically smallest address having a prefix $ s $ .

## 输入输出格式

### 输入格式

The first line contains the $ s $ line which is the inputted part. The second line contains an integer $ n $ ( $ 1<=n<=100 $ ) which is the number of visited pages. Then follow $ n $ lines which are the visited pages, one on each line. All the lines have lengths of from $ 1 $ to $ 100 $ symbols inclusively and consist of lowercase Latin letters only.

### 输出格式

If $ s $ is not the beginning of any of $ n $ addresses of the visited pages, print $ s $ . Otherwise, print the lexicographically minimal address of one of the visited pages starting from $ s $ .

The lexicographical order is the order of words in a dictionary. The lexicographical comparison of lines is realized by the '<' operator in the modern programming languages.

## 输入输出样例

### 输入样例 #1

```cpp
next
2
nextpermutation
nextelement

```
### 输出样例 #1

```cpp
nextelement

```
### 输入样例 #2

```cpp
find
4
find
findfirstof
findit
fand

```
### 输出样例 #2

```cpp
find

```
### 输入样例 #3

```cpp
find
4
fondfind
fondfirstof
fondit
fand

```
### 输出样例 #3

```cpp
find

```
