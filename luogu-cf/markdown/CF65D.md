# Harry Potter and the Sorting Hat

## 题意翻译

## 题目描述

如你们所知，霍格沃茨有四个学院：格兰芬多，赫奇帕奇，拉文克劳和斯莱特林。新生的分院由分院帽来完成。学生们按照字母表的顺序一个个被叫到众人面前，每一个都需要戴上分院帽，在思虑过后，分院帽会正式宣布学生们应当进入的学院。

分院帽将根据学生们的个性进行分院：勇敢无畏并因此而高尚者属于格兰芬多；正直忠诚、坚忍诚实者进入赫奇帕奇；睿智博学、聪明敏锐者投身拉文克劳；头脑精明但狡诈阴险之人也许会进斯莱特林。无论如何，一年级的新生赫敏·格兰杰非常关心即将到来的分院。她研究了所有有关于分院帽的著作，并得到了一个简单得多的结论。如果学生们有亲戚此前在霍格沃茨学习过，分院帽会把他们分入与亲戚相同的学院。而在其他情况下，比如有些学生的亲戚曾就读于不同的学院，或亲戚都是赫敏父母一样的麻瓜，分院帽将把学生分给那一刻拥有新生最少的学院。

赫敏已经询问过名单上在她前面的学生的亲戚情况。现在她和她的新朋友哈利波特以及罗恩韦斯莱希望知道分院帽将把赫敏分入哪个学院。

## 输入输出格式

### 输入格式：

第一行输入一个整数n（1<=n<=10000)，表示排在赫敏前面学生的数量。第二行包括n个字符。如果第i个学生的亲戚均于同一个学院学习，那么该字符为该学院的首字母大写。否则该字符为问号“?”。

### 输出格式：

输出赫敏可能被分进的所有学院，若多于一个则一行输出一个。

注：应输出学院英文名称。例：Gryffindor、Ravenclaw、Slytherin、Hufflepuff。

## 题目描述

As you know, Hogwarts has four houses: Gryffindor, Hufflepuff, Ravenclaw and Slytherin. The sorting of the first-years into houses is done by the Sorting Hat. The pupils are called one by one in the alphabetical order, each of them should put a hat on his head and, after some thought, the hat solemnly announces the name of the house the student should enter.

At that the Hat is believed to base its considerations on the student's personal qualities: it sends the brave and noble ones to Gryffindor, the smart and shrewd ones — to Ravenclaw, the persistent and honest ones — to Hufflepuff and the clever and cunning ones — to Slytherin. However, a first year student Hermione Granger got very concerned about the forthcoming sorting. She studied all the literature on the Sorting Hat and came to the conclusion that it is much simpler than that. If the relatives of the student have already studied at Hogwarts, the hat puts the student to the same house, where his family used to study. In controversial situations, when the relatives studied in different houses or when they were all Muggles like Hermione's parents, then the Hat sorts the student to the house, to which the least number of first years has been sent at that moment. If there are several such houses, the choice is given to the student himself. Then the student can choose any of the houses, to which the least number of first years has been sent so far.

Hermione has already asked the students that are on the list before her about their relatives. Now she and her new friends Harry Potter and Ron Weasley want to find out into what house the Hat will put Hermione.

## 输入输出格式

### 输入格式

The first input line contains an integer $ n $ ( $ 1<=n<=10000 $ ). It is the number of students who are in the list before Hermione. The next line contains $ n $ symbols. If all the relatives of a student used to study in the same house, then the $ i $ -th character in the string coincides with the first letter of the name of this house. Otherwise, the $ i $ -th symbol is equal to "?".

### 输出格式

Print all the possible houses where Hermione can be sent. The names of the houses should be printed in the alphabetical order, one per line.

## 输入输出样例

### 输入样例 #1

```cpp
11
G????SS???H

```
### 输出样例 #1

```cpp
Gryffindor
Ravenclaw

```
### 输入样例 #2

```cpp
2
H?

```
### 输出样例 #2

```cpp
Gryffindor
Ravenclaw
Slytherin

```
## 说明

Consider the second example. There are only two students before Hermione. The first student is sent to Hufflepuff. The second disciple is given the choice between the houses where the least number of students has been sent, i.e. Gryffindor, Slytherin and Ravenclaw. If he chooses Gryffindor, Hermione is forced to choose between Ravenclaw and Slytherin, if he chooses Ravenclaw, Hermione will choose between Gryffindor and Slytherin, if he chooses Slytherin, Hermione will choose between Gryffindor and Ravenclaw. In the end, the following situation is possible (it depends on the choice of the second student and Hermione). Hermione will end up 1) in Gryffindor, 2) in Ravenclaw, 3) in Slytherin. Note that, despite the fact that in neither case Hermione will be given a choice between all the three options, they are all possible and they should all be printed in the answer. Hermione will not, under any circumstances, end up in Hufflepuff.

