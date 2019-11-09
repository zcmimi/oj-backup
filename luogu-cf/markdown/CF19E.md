# Fairy

## 题意翻译

题目描述

很久很久以前，有一个仙女叫做A。有一天一个少年B找到她，并且请求她预测他的未来。仙女看着她的水晶球，说这位少年不久将遇见世界上最美丽的公主，并且将迎娶她为妻。然后仙女在一张纸上画了n个点，并把它们分为几个板块，每个板块以一些点为始，另一些点为终。画完这幅画，仙女要求少年擦掉之上的一个板块。然后她尝试给每个点画上红色或蓝色，让纸上没有板块有和它的结尾颜色一样的点。如果她能做到，这个预言将会成真。B想邂逅世界上最美丽的公主，所以他想要你帮助他。找到所有能帮助他邂逅公主的板块。

输入输出格式：

输入格式：

输入文件的第一行有两个整数：n——点数；m:板块个数。

接下来的m行有板块的描述。每一个描述有两个整数，用空格隔开——v,u——各点的编号（index），由此板块连接。没有板块在描述中会被描述两次。

输出格式：

输出文件的第一行输出数字k——答案中板块的数量。输出文件的第二行输出k个数字，以空格隔开————每个板块的编号，升序排列。每个编号只应被输出一次。板块从1开始编号，以输入的顺序为序。

感谢@qwerta 提供的翻译

## 题目描述

Once upon a time there lived a good fairy A. One day a fine young man B came to her and asked to predict his future. The fairy looked into her magic ball and said that soon the fine young man will meet the most beautiful princess ever and will marry her. Then she drew on a sheet of paper $ n $ points and joined some of them with segments, each of the segments starts in some point and ends in some other point. Having drawn that picture, she asked the young man to erase one of the segments from the sheet. Then she tries to colour each point red or blue so, that there is no segment having points of the same colour as its ends. If she manages to do so, the prediction will come true. B wants to meet the most beautiful princess, that's why he asks you to help him. Find all the segments that will help him to meet the princess.

## 输入输出格式

### 输入格式

The first input line contains two integer numbers: $ n $ — amount of the drawn points and $ m $ — amount of the drawn segments ( $ 1<=n<=10^{4},0<=m<=10^{4} $ ). The following $ m $ lines contain the descriptions of the segments. Each description contains two different space-separated integer numbers $ v $ , $ u $ ( $ 1<=v<=n,1<=u<=n $ ) — indexes of the points, joined by this segment. No segment is met in the description twice.

### 输出格式

In the first line output number $ k $ — amount of the segments in the answer. In the second line output $ k $ space-separated numbers — indexes of these segments in ascending order. Each index should be output only once. Segments are numbered from 1 in the input order.

## 输入输出样例

### 输入样例 #1

```cpp
4 4
1 2
1 3
2 4
3 4

```
### 输出样例 #1

```cpp
4
1 2 3 4 
```


### 输入样例 #2

```cpp
4 5
1 2
2 3
3 4
4 1
1 3

```
### 输出样例 #2

```cpp
1
5 
```


