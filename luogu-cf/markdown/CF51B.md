# bHTML Tables Analisys

## 题意翻译

题目描述

在这个问题中，使用了一个非常简单的HTML表格标记版本(bHTML)。 请把这个陈述作为题目的一部分，并仔细阅读。

如果一个字符串符合语法，它就是一个bHTML表

语法: TABLE ::= ROWSROWS ::= ROW | ROW ROWSROW ::= CELLSCELLS ::= CELL | CELL CELLSCELL ::=  | TABLE 解释: 在语法中，只是为了说明的目的，在给定的数据中不会有空格。 bHTML表格非常类似于一个简单的普通HTML表格，其中只符合下列标签：“table”，“tr”，“td”，所有标签都配对，表格至少包含一行和至少一个单元格。在每一行中。为了更深入了解题意，请你看看样本测试，将其作为表格的例子。

可以看出，表格可以嵌套。 给你一个表（可能包含多组数据）。 你需要编写一个分析所有表格的程序，并找出每个表格中的单元格数量。 这些表格不需要是矩形的。

输入输出格式

输入格式：

为了方便起见，输入数据可以以任意方式分成非空行。 输入数据不超过10行。 将所有输入行组合（连接）成一个，以获得指定表的文本表示。 字符串s对应于给定的语法（语法的根元素是TABLE），其长度不超过5000.只有小写字母用于写入标记。给定的字符串中没有空格。

输出格式：

以非递减的顺序输出所有表格的大小。

Translated by @Franco 

## 题目描述

In this problem is used an extremely simplified version of HTML table markup. Please use the statement as a formal document and read it carefully.

A string is a bHTML table, if it satisfies the grammar:

`TABLE ::= ROWSROWS ::= ROW | ROW ROWSROW ::= CELLSCELLS ::= CELL | CELL CELLSCELL ::=  | TABLE`Blanks in the grammar are only for purposes of illustration, in the given data there will be no spaces. The bHTML table is very similar to a simple regular HTML table in which meet only the following tags : "table", "tr", "td", all the tags are paired and the table contains at least one row and at least one cell in each row. Have a look at the sample tests as examples of tables.

As can be seen, the tables may be nested. You are given a table (which may contain other(s)). You need to write a program that analyzes all the tables and finds the number of cells in each of them. The tables are not required to be rectangular.

## 输入输出格式

### 输入格式

For convenience, input data can be separated into non-empty lines in an arbitrary manner. The input data consist of no more than 10 lines. Combine (concatenate) all the input lines into one, to get a text representation $ s $ of the specified table. String $ s $ corresponds to the given grammar (the root element of grammar is TABLE), its length does not exceed 5000. Only lower case letters are used to write tags. There are no spaces in the given string $ s $ .

### 输出格式

Print the sizes of all the tables in the non-decreasing order.

## 输入输出样例

### 输入样例 #1

```cpp
&lt;table&gt;&lt;tr&gt;&lt;td&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;

```
### 输出样例 #1

```cpp
1 
```


### 输入样例 #2

```cpp
&lt;table&gt;
&lt;tr&gt;
&lt;td&gt;
&lt;table&gt;&lt;tr&gt;&lt;td&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;&lt;/
td
&gt;&lt;/tr&gt;&lt;tr
&gt;&lt;td&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;
&lt;/td&gt;
&lt;/tr&gt;
&lt;/table&gt;

```
### 输出样例 #2

```cpp
1 4 
```


### 输入样例 #3

```cpp
&lt;table&gt;&lt;tr&gt;&lt;td&gt;
&lt;table&gt;&lt;tr&gt;&lt;td&gt;
&lt;table&gt;&lt;tr&gt;&lt;td&gt;
&lt;table&gt;&lt;tr&gt;&lt;td&gt;&lt;/td&gt;&lt;td&gt;&lt;/td&gt;
&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;
&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;
&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;
&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;

```
### 输出样例 #3

```cpp
1 1 1 3 
```


