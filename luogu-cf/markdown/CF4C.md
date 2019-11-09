# Registration system

## 题意翻译

题目背景

一个名为"Berlanddesk"的电子邮件系统即将在Berland上线运营。该电子邮件系统的管理员希望整个系统的建设可以尽早完成，因此他们找到了资深程序员您，希望您能够为他们开发一个用户注册系统的原型产品。

该系统的运行遵循以下原则:

新用户注册时，他将向系统发送一则内容为其用户名的请求，如果该用户名尚未存在于系统数据库内，则将该用户名插入数据库，同时用户得到回应信息"OK"表示其已经成功注册。如果用户请求的用户名已经存在于数据库内，那么系统将产生一个新的用户名并将其加入数据库。新用户名由用户请求的用户名与正整数i构成，i为使"用户名i"尚未存在于数据库内的最小的i。

输入格式

第一行一个整数n(1<=n<=10^5)。接下来n行，每行表示用户向系统发出的一则请求。每行内容均非空且均为由至多32个小写拉丁字母组成的字符串。

输出格式

n行，每行表示系统对一则请求做出的回应。如果该用户名尚未存在于系统数据库内，则输出"OK"。如果用户请求的用户名已经被注册，则输出依照规则生成的新用户名。

## 题目描述

A new e-mail service "Berlandesk" is going to be opened in Berland in the near future. The site administration wants to launch their project as soon as possible, that's why they ask you to help. You're suggested to implement the prototype of site registration system. The system should work on the following principle.

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least $ i $ is found so that name $ i $ does not yet exist in the database.

## 输入输出格式

### 输入格式

The first line contains number $ n $ ( $ 1<=n<=10^{5} $ ). The following $ n $ lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.

### 输出格式

Print $ n $ lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.

## 输入输出样例

### 输入样例 #1

```cpp
4
abacaba
acaba
abacaba
acab

```
### 输出样例 #1

```cpp
OK
OK
abacaba1
OK

```
### 输入样例 #2

```cpp
6
first
first
second
second
third
third

```
### 输出样例 #2

```cpp
OK
first1
OK
second1
OK
third1

```
