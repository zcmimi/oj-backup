# Translation

## 题意翻译

题意

Berland和Birland两地均有各自的语言，Berlandish和Birlandish.V是一个翻译员，负责将Berlandish翻译成Birlandish.将Berlandish翻译成Birlandish其实非常简单，只需把这个单词倒过来.比如单词code翻译过来就是edoc.但是粗心的V还是会犯一些错误。现在请你帮她判断一下他翻译的是否正确。

输入格式

两行，分别是一个Berlandish单词和V翻译的Birlandish单词。单词中所有字母均为小写拉丁字母（其实就是英文字母）;单词长度均不超过100字符，单词中不包含任何多余空格。

输出

一行，如果V的翻译是正确的，输出YES。否则输出NO

Translated by @FCBM71

## 题目描述

The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word $ s $ from Berlandish into Birlandish as $ t $ . Help him: find out if he translated the word correctly.

## 输入输出格式

### 输入格式

The first line contains word $ s $ , the second line contains word $ t $ . The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

### 输出格式

If the word $ t $ is a word $ s $ , written reversely, print YES, otherwise print NO.

## 输入输出样例

### 输入样例 #1

```cpp
code
edoc

```
### 输出样例 #1

```cpp
YES

```
### 输入样例 #2

```cpp
abb
aba

```
### 输出样例 #2

```cpp
NO

```
### 输入样例 #3

```cpp
code
code

```
### 输出样例 #3

```cpp
NO

```
