# Chat Server&#039;s Outgoing Traffic

## 题意翻译

Polycarp正在开发一个名为“Polychat”的新项目。按照IT的现代倾向，他决定，这个项目也应该包含聊天。为了实现这一目标，Polycarp在笔记本电脑前花费了几个小时，实现了一个可以处理三种命令的聊天服务器：

将一个人加入聊天（“添加”命令）。

从聊天中删除一个人（“删除”命令）。

向所有正在聊天的人发送消息，包括发送消息的人（“发送”命令）。

现在，Polycarp希望了解处理特定命令集时服务器将产生的传出流量。

Polycarp知道聊天服务器不会为“添加”和“删除”命令发送流量。当处理“发送”命令时，服务器向聊天的每个参与者(当前在线的人)发送l个字节，其中l是消息的长度。

由于Polycarp没有时间，他在寻求帮助来解决这个问题。

输入格式

输入文件将包含不超过100个命令，每个命令都在自己的行中。每行不超过100个字符。命令的格式如下：

+为“添加”命令。

-为“删除”命令。

：为'发送'命令。

(名字)和是拉丁字母和数字的非空序列。可以包含字母，数字和空格，但不能以空格开始或结束是一个空行。

保证输入数据是正确的，即不会有“添加”命令，如果人用这样的名字已经在聊天，不会有“删除”命令，如果没有人跟在这样的名字聊天等

所有的名字都是区分大小写的。

输出格式

输出流量

Translated by @liyifeng 

## 题目描述

Polycarp is working on a new project called "Polychat". Following modern tendencies in IT, he decided, that this project should contain chat as well. To achieve this goal, Polycarp has spent several hours in front of his laptop and implemented a chat server that can process three types of commands:

- Include a person to the chat ('Add' command).

- Remove a person from the chat ('Remove' command).

- Send a message from a person to all people, who are currently in the chat, including the one, who sends the message ('Send' command).

Now Polycarp wants to find out the amount of outgoing traffic that the server will produce while processing a particular set of commands.

Polycarp knows that chat server sends no traffic for 'Add' and 'Remove' commands. When 'Send' command is processed, server sends $ l $ bytes to each participant of the chat, where $ l $ is the length of the message.

As Polycarp has no time, he is asking for your help in solving this problem.

## 输入输出格式

### 输入格式

Input file will contain not more than 100 commands, each in its own line. No line will exceed 100 characters. Formats of the commands will be the following:

- + for 'Add' command.

- - for 'Remove' command.

- : for 'Send' command.

 and  is a non-empty sequence of Latin letters and digits.  can contain letters, digits and spaces, but can't start or end with a space.  can be an empty line.

It is guaranteed, that input data are correct, i.e. there will be no 'Add' command if person with such a name is already in the chat, there will be no 'Remove' command if there is no person with such a name in the chat etc.

All names are case-sensitive.

### 输出格式

Print a single number — answer to the problem.

## 输入输出样例

### 输入样例 #1

```cpp
+Mike
Mike:hello
+Kate
+Dmitry
-Dmitry
Kate:hi
-Kate

```
### 输出样例 #1

```cpp
9

```
### 输入样例 #2

```cpp
+Mike
-Mike
+Mike
Mike:Hi   I am here
-Mike
+Kate
-Kate

```
### 输出样例 #2

```cpp
14

```
