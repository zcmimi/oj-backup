# INI-file

## 题目描述

The INI file format is a de facto standard for configuration files. INI files are simple text files with a basic structure. They are commonly associated with Microsoft Windows, but are also used on other platforms.

Each line in INI-file stands for key-value mapping or defines new section. A key-value line has a format "key=value",where key — is the name of some property, and value — it's value. It is possible that it will be spaces from the both sides of key and/or value, the spaces should be ignored.

A section line has a format "\[section\]". It means that all key-value lines after it define properties of the specified section. Of cause, the following section line changes the current section. A section line may have spaces around any of brackets.

Also you should ignore comment lines — the first non-space character of comment line is ";".

You task is to write the program which will format given INI-file in a special way:

- first, print key-value lines which do not belong to any section;

- print all the sections in the lexicographical (alphabetical) order of their names;

- inside each of two previous items, order key-value lines lexicographically by "key";

- if there are more than one key-value lines with the same key inside a single section (or outside any sections), leave only one line (which appears later in the input data);

- remove all redundant spaces and lines.

## 输入输出格式

### 输入格式

The first line contains single integer $ n $ ( $ 1<=n<=510 $ ) — the number of lines in given INI-file.

The rest of the input contains a valid INI-file in $ n $ lines. Values of section, key and value contain only Latin letters, digits, "." and/or "-".

Each line has length not exceeding 255 characters and not less than 1 character. The total length of all the lines does’t exceed 10000.

### 输出格式

Print formatted INI-file.

## 输入输出样例

### 输入样例 #1

```cpp
11
a= 1
b=a
a = 2
 ; comment
[z]
1=2
[y]
2=3
[z]
2=1
[w]

```
### 输出样例 #1

```cpp
a=2
b=a
[w]
[y]
2=3
[z]
1=2
2=1

```
