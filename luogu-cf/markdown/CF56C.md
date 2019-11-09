# Corporation Mail

## 题意翻译

 _**Alice:Bob，Calif，Daddy.**_

表明Alice有三个下属分别叫Bob，Calif，Dadd

（整个体系中可能出现**多个人有相同的名字**）

每个人只能与下属通信（可以是间接下属）

定义“**不舒服情况**”为一个名叫A的上司与一个名叫A的下属通信（即同名的人有上下级关系）

**输入**

保证总string长度不大于1000（每个人名长度不超过10）

**输出**

不舒服的情况的**数量**

## 题目描述

The Beroil corporation structure is hierarchical, that is it can be represented as a tree. Let's examine the presentation of this structure as follows:

- $ employee $ ::= $ name $ . | $ name $ : $ employee_{1} $ , $ employee_{2} $ , ... , $ employee_{k} $ .

- $ name $ ::= name of an employee

That is, the description of each employee consists of his name, a colon (:), the descriptions of all his subordinates separated by commas, and, finally, a dot. If an employee has no subordinates, then the colon is not present in his description.

For example, line MIKE:MAX.,ARTEM:MIKE..,DMITRY:DMITRY.,DMITRY... is the correct way of recording the structure of a corporation where the director MIKE has subordinates MAX, ARTEM and DMITRY. ARTEM has a subordinate whose name is MIKE, just as the name of his boss and two subordinates of DMITRY are called DMITRY, just like himself.

In the Beroil corporation every employee can only correspond with his subordinates, at that the subordinates are not necessarily direct. Let's call an uncomfortable situation the situation when a person whose name is $ s $ writes a letter to another person whose name is also $ s $ . In the example given above are two such pairs: a pair involving MIKE, and two pairs for DMITRY (a pair for each of his subordinates).

Your task is by the given structure of the corporation to find the number of uncomfortable pairs in it.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF56C/9868b26a06de68925d83118f98afdf9f4510a164.png)

## 输入输出格式

### 输入格式

The first and single line contains the corporation structure which is a string of length from 1 to 1000 characters. It is guaranteed that the description is correct. Every name is a string consisting of capital Latin letters from 1 to 10 symbols in length.

### 输出格式

Print a single number — the number of uncomfortable situations in the company.

## 输入输出样例

### 输入样例 #1

```cpp
MIKE:MAX.,ARTEM:MIKE..,DMITRY:DMITRY.,DMITRY...

```
### 输出样例 #1

```cpp
3

```
### 输入样例 #2

```cpp
A:A..

```
### 输出样例 #2

```cpp
1

```
### 输入样例 #3

```cpp
A:C:C:C:C.....

```
### 输出样例 #3

```cpp
6

```
