# Perse-script

## 题目描述

Two good friends were trying to make a new programming language called Perse-script.

The most important part of this language is strings. A string in Perse-script is put between characters "

So for example "Hello" is a string. But Hello is a variable name or a keyword, which are not considered in this problem.

Perse-script is function-based. So there are no operators in this language. For example for summing two numbers you have to write sum(a,b) and not a+b.

There are several functions for working on strings. These include:

- concat(x,y) is a function which gets two strings $ x $ and $ y $ and puts $ y $ at the end of $ x $ and returns the result. For example concat("Hello","World") returns "HelloWorld".

- reverse(x) gets a single string $ x $ and reverses it. For example reverse("Hello") returns "olleH".

- substr(x,a,b) gets a string $ x $ and two integers $ a $ and $ b $ ( $ 1<=a<=b<=n $ , where $ n $ is the length of $ x $ ). And returns the substring of $ x $ between indexes $ a $ and $ b $ , inclusive. For example substr("Hello",2,4) returns "ell".

- substr(x,a,b,c) is another version of substr which works just like the last one but $ c $ is the step of adding. $ c $ is positive. For example substr("HelloWorld",1,10,2) returns "Hlool". This substr means that you put the $ a $ th character , and then every $ c $ th character until you reach $ b $ .

You're going to manipulate the string part of Perse-script. Given a string expression, you should print its result. It is guaranteed that the expression contains only strings shown by characters " and the above functions.

Commands in Perse-script are case-insensitive. So to call substr function you can write SUBsTr(). But you can't print as the result "hElLo" instead of printing "Hello".

See the samples for more information.

## 输入输出格式

### 输入格式

A single line containing the correct expression. It is guaranteed that the total length of this expression does not exceed $ 10^{3} $ and that all the integers used in it are less than or equal to $ 100 $ by absolute value. The given string is non-empty.

All strings in the input which are placed between "s consist of uppercase and lowercase Latin letters only.

### 输出格式

Print in single line the resulting string. It is guaranteed that an answer exists and that the length of the answer does not exceed $ 10^{4} $ . It is guaranteed that the answer is non-empty.

## 输入输出样例

### 输入样例 #1

```cpp
&amp;quot;HelloWorld&amp;quot;

```
### 输出样例 #1

```cpp
&amp;quot;HelloWorld&amp;quot;

```
### 输入样例 #2

```cpp
REVerse(substr(&amp;quot;helloworld&amp;quot;,1,5))

```
### 输出样例 #2

```cpp
&amp;quot;olleh&amp;quot;

```
### 输入样例 #3

```cpp
conCAT(rEveRSE(&amp;quot;olleh&amp;quot;),&amp;quot;world&amp;quot;)

```
### 输出样例 #3

```cpp
&amp;quot;helloworld&amp;quot;

```
### 输入样例 #4

```cpp
reversE(concAT(substr(&amp;quot;hello&amp;quot;,1,2),sUbstr(&amp;quot;world&amp;quot;,1,5,1)))

```
### 输出样例 #4

```cpp
&amp;quot;dlroweh&amp;quot;

```
### 输入样例 #5

```cpp
suBstr(&amp;quot;Noruz&amp;quot;,1,4,2)

```
### 输出样例 #5

```cpp
&amp;quot;Nr&amp;quot;

```
