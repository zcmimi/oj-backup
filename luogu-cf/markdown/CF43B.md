# Letter

## 题意翻译

Vasya决定利用报纸上的一段文字写一封匿名信。他可以从报纸上剪下一段文字（或字母），把他们粘贴到匿名信上去。已经剪下的文字不可重复使用。当然，匿名信中的空格不需要剪——他只要在空格处作出标记即可。现在，他知道报纸上的文字s1和他即将写下的匿名信的内容s2，请你帮他看看，他能否完成匿名信的书（zhan）写（tie）。

输入：

两行，分别是s1和s2（无空行），长度不超过200，**英文字母区分大小写，信中空格不作处理**

输出：

写的出来就输出"YES"，否则输出"NO"（不含引号）

Translated by ____233____

## 题目描述

Vasya decided to write an anonymous letter cutting the letters out of a newspaper heading. He knows heading $ s_{1} $ and text $ s_{2} $ that he wants to send. Vasya can use every single heading letter no more than once. Vasya doesn't have to cut the spaces out of the heading — he just leaves some blank space to mark them. Help him; find out if he will manage to compose the needed text.

## 输入输出格式

### 输入格式

The first line contains a newspaper heading $ s_{1} $ . The second line contains the letter text $ s_{2} $ . $ s_{1} $ и $ s_{2} $ are non-empty lines consisting of spaces, uppercase and lowercase Latin letters, whose lengths do not exceed 200 symbols. The uppercase and lowercase letters should be differentiated. Vasya does not cut spaces out of the heading.

### 输出格式

If Vasya can write the given anonymous letter, print YES, otherwise print NO

## 输入输出样例

### 输入样例 #1

```cpp
Instead of dogging Your footsteps it disappears but you dont notice anything
where is your dog

```
### 输出样例 #1

```cpp
NO

```
### 输入样例 #2

```cpp
Instead of dogging Your footsteps it disappears but you dont notice anything
Your dog is upstears

```
### 输出样例 #2

```cpp
YES

```
### 输入样例 #3

```cpp
Instead of dogging your footsteps it disappears but you dont notice anything
Your dog is upstears

```
### 输出样例 #3

```cpp
NO

```
### 输入样例 #4

```cpp
abcdefg hijk
k j i h g f e d c b a

```
### 输出样例 #4

```cpp
YES

```
