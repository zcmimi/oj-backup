# Way Too Long Words

## 题意翻译

题目描述

有时候，像“localization”或“internationalization”这样的词汇如此之长，以至于在一篇文章中多次写下这些词语令人厌烦。

让我们考虑一个词太长，如果它的长度严格超过 10个字符。太长的单词应该用一个特殊的缩写代替。

这个缩写是这样写的：我们写下一个单词的第一个和最后一个字母，并在它们之间写出第一个和最后一个字母之间的字母数。该数字是十进制系统，不包含任何前导零。

因此，“localization”将拼写为“l10n”，而“internationalization”将拼写为”i18n”。

建议您使用缩写来自动更改单词的过程。因为所有太长的单词应该用缩写代替，不太长的单词不应该经历任何改变。

输入输出格式

输入格式：

第一行包含一个整数 n（ 1 <= N <= 100 1 < = n < = 1 0 0）。以下各项 n 行包含一个词。所有的单词由小写拉丁字母组成， 并且拥有从1到100个字符的长度。 _ _

输出格式：

输出n行。第i行应包含来自输入数据的第 i个字替换的结果。

## 题目描述

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than $ 10 $ characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ ( $ 1<=n<=100 $ ). Each of the following $ n $ lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from $ 1 $ to $ 100 $ characters.

### 输出格式

Print $ n $ lines. The $ i $ -th line should contain the result of replacing of the $ i $ -th word from the input data.

## 输入输出样例

### 输入样例 #1

```cpp
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

```
### 输出样例 #1

```cpp
word
l10n
i18n
p43s

```
