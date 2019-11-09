# Helper

## 题意翻译

## 题目描述

令人难以置信，OhWord大学已经开始了考试期。更令人难以置信的是，Valera已经完成了所有考试。由于现在他很闲，他想为他的队友解决问题来赚钱。他列出了他可以帮助的科目列表 _list_ 。 Valera与他的 _n_ 位队友们进行了交谈后，得到了以下有关信息：他们每个人的考试科目，考试时间以及每个人准备为Valera的帮助支付的金额。

有了这些数据，Valera决定制定一个时间表，他根据这个时间表，为队友解决问题。毫无疑问，Valera无法不停地解决问题，因此他为自己找到了最佳的订单，并计划在整个考试期间坚持下去。 Valera为睡觉，早餐，午餐和晚餐分配了时间，剩下的时间他都可以工作。

显然，只有当这个科目在列表清单 _list_ 上时，Valera才能帮助他的队友学习。碰巧的是，每位学生各自问题的科目相同，Valera可以在 _t_ i的时间内解决 一个科目_list_ i的问题 。

此外，如果Valera开始解决某位队友的问题，他能睡眠或吃饭，但不能解决其他队友的问题。解决了这个问题后，Valera可以通过互联网立即将其发送给队友（**无时间差，等于Valera工作的最后一分钟**）。如果这个学生的考试还没有开始，他可以用它来成功通过考试，并向Valera支付承诺的金额。由于Valera没有多少时间，他要求你写一个程序，找到解决问题的顺序，为Valera带来最大的利润。

## 输入输出格式

### 输入格式

第一行包含整数 _m，n，k_（m>=1,n<=100,1<=k<=30）列表 _list_ 上的科目数量，Valera队友的数量以及考试期限（以天为单位）

接下来 _m_ 行，是 _list_ 上的科目名list i(最多32个字符的非空字符串，都是小写字母) 输入保证两两互异

第 _m+2_ 行有 _m_ 个整数 _t_ i(1<=ti<=1000), 是Valera解决 _list_ 上第i个科目的一个问题的时间。

以下四行，是睡觉，早餐，午餐和晚餐的时间(互不重叠，在同一天内)，格式是H1:M1-H2:M2（00<=H1,H2<=23,00<=M1,M2<=59）

接下来 _n_ 行，是对学生的描述，依次是：他的学科 _s_ (最多32个字符的非空字符串，都是小写字母),考试日期 _d_ (1<=d<=30)（**用作他的索引**）,考试开始时间 _time_ (HH:MM，24小时制，输入保证合乎规定),总钱数 _c_ (0<=c<=10^6,整数)。

### 输出格式：

在第一行输出Valera可以获得的最大收益。

第二行输出Valera要解决的问题数量p。

在下面的p行中，按以下格式按时间顺序输出解决问题的顺序： 该学生的索引，Valera开始解决问题的天数; Valera开始解决问题的时间（他工作的第一分钟）; Valera结束问题的天数; Valera结束问题的时间（他的工作的最后一分钟）。更好地理解输出格式，请研究样例。

## 题目描述

It's unbelievable, but an exam period has started at the OhWord University. It's even more unbelievable, that Valera got all the tests before the exam period for excellent work during the term. As now he's free, he wants to earn money by solving problems for his groupmates. He's made a $ list $ of subjects that he can help with. Having spoken with $ n $ of his groupmates, Valera found out the following information about them: what subject each of them passes, time of the exam and sum of money that each person is ready to pay for Valera's help.

Having this data, Valera's decided to draw up a timetable, according to which he will solve problems for his groupmates. For sure, Valera can't solve problems round the clock, that's why he's found for himself an optimum order of day and plans to stick to it during the whole exam period. Valera assigned time segments for sleep, breakfast, lunch and dinner. The rest of the time he can work.

Obviously, Valera can help a student with some subject, only if this subject is on the $ list $ . It happened, that all the students, to whom Valera spoke, have different, but one-type problems, that's why Valera can solve any problem of subject $ list_{i} $ in $ t_{i} $ minutes.

Moreover, if Valera starts working at some problem, he can break off only for sleep or meals, but he can't start a new problem, not having finished the current one. Having solved the problem, Valera can send it instantly to the corresponding student via the Internet.

If this student's exam hasn't started yet, he can make a crib, use it to pass the exam successfully, and pay Valera the promised sum. Since Valera has little time, he asks you to write a program that finds the order of solving problems, which can bring Valera maximum profit.

## 输入输出格式

### 输入格式

The first line contains integers $ m,n,k $ ( $ 1<=m,n<=100 $ , $ 1<=k<=30 $ ) — amount of subjects on the $ list $ , amount of Valera's potential employers and the duration of the exam period in days.

The following $ m $ lines contain the names of subjects $ list_{i} $ ( $ list_{i} $ is a non-empty string of at most 32 characters, consisting of lower case Latin letters). It's guaranteed that no two subjects are the same.

The $ (m+2) $ -th line contains $ m $ integers $ t_{i} $ ( $ 1<=t_{i}<=1000 $ ) — time in minutes that Valera spends to solve problems of the $ i $ -th subject. Then follow four lines, containing time segments for sleep, breakfast, lunch and dinner correspondingly.

Each line is in format H1:M1-H2:M2, where $ 00<= $ H1, H2 $ <=23 $ , $ 00<= $ M1, M2 $ <=59 $ . Time H1:M1 stands for the first minute of some Valera's action, and time H2:M2 stands for the last minute of this action. No two time segments cross. It's guaranteed that Valera goes to bed before midnight, gets up earlier than he has breakfast, finishes his breakfast before lunch, finishes his lunch before dinner, and finishes his dinner before midnight. All these actions last less than a day, but not less than one minute. Time of the beginning and time of the ending of each action are within one and the same day. But it's possible that Valera has no time for solving problems.

Then follow $ n $ lines, each containing the description of students. For each student the following is known: his exam subject $ s_{i} $ ( $ s_{i} $ is a non-empty string of at most 32 characters, consisting of lower case Latin letters), index of the exam day $ d_{i} $ ( $ 1<=d_{i}<=k $ ), the exam time $ time_{i} $ , and sum of money $ c_{i} $ ( $ 0<=c_{i}<=10^{6} $ , $ c_{i} $ — integer) that he's ready to pay for Valera's help. Exam time $ time_{i} $ is in the format HH:MM, where $ 00<= $ HH $ <=23 $ , $ 00<= $ MM $ <=59 $ . Valera will get money, if he finishes to solve the problem strictly before the corresponding student's exam begins.

### 输出格式

In the first line output the maximum profit that Valera can get. The second line should contain number $ p $ — amount of problems that Valera is to solve. In the following $ p $ lines output the order of solving problems in chronological order in the following format: index of a student, to whom Valera is to help; index of the time, when Valera should start the problem; time, when Valera should start the problem (the first minute of his work); index of the day, when Valera should finish the problem; time, when Valera should finish the problem (the last minute of his work). To understand the output format better, study the sample tests.

## 输入输出样例

### 输入样例 #1

```cpp
3 3 4
calculus
algebra
history
58 23 15
00:00-08:15
08:20-08:35
09:30-10:25
19:00-19:45
calculus 1 09:36 100
english 4 21:15 5000
history 1 19:50 50

```
### 输出样例 #1

```cpp
150
2
1 1 08:16 1 09:29
3 1 10:26 1 10:40

```
### 输入样例 #2

```cpp
2 2 1
matan
codeforces
1 2
00:00-08:00
09:00-09:00
12:00-12:00
18:00-18:00
codeforces 1 08:04 2
matan 1 08:02 1

```
### 输出样例 #2

```cpp
3
2
2 1 08:01 1 08:01
1 1 08:02 1 08:03

```
### 输入样例 #3

```cpp
2 2 1
matan
codeforces
2 2
00:00-08:00
09:00-09:00
12:00-12:00
18:00-18:00
codeforces 1 08:04 2
matan 1 08:03 1

```
### 输出样例 #3

```cpp
2
1
1 1 08:01 1 08:02

```
