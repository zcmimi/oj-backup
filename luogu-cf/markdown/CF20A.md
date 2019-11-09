# BerOS file system

## 题意翻译

题目描述

给出一个电脑路径，连续的多个/可以被简化为一个/，且路径末的/可以省略，请输出简化后的最短的可能的路径。

输入输出格式

输入格式

第一行：仅包含小写字母和/的字符串，保证路径至少含有一个/，不超过100个字符

输出格式

第一行：一个字符串，表示简化后的路径

## 题目描述

The new operating system BerOS has a nice feature. It is possible to use any number of characters '/' as a delimiter in path instead of one traditional '/'. For example, strings //usr///local//nginx/sbin// and /usr/local/nginx///sbin are equivalent. The character '/' (or some sequence of such characters) at the end of the path is required only in case of the path to the root directory, which can be represented as single character '/'.

A path called normalized if it contains the smallest possible number of characters '/'.

Your task is to transform a given path to the normalized form.

## 输入输出格式

### 输入格式

The first line of the input contains only lowercase Latin letters and character '/' — the path to some directory. All paths start with at least one character '/'. The length of the given line is no more than 100 characters, it is not empty.

### 输出格式

The path in normalized form.

## 输入输出样例

### 输入样例 #1

```cpp
//usr///local//nginx/sbin

```
### 输出样例 #1

```cpp
/usr/local/nginx/sbin

```
