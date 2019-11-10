# ONP - Transform the Expression

## 题意翻译

请你将n个中缀表达式转换为后缀表达式。

n<=100,l

Translated by @稀神探女

## 题目描述

 Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, \*, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a\*b\*c).

## 输入输出格式

### 输入格式

```

t [the number of expressions <= 100]

expression [length <= 400]

[other expressions]

```

Text grouped in \[ \] does not appear in the input file.

### 输出格式

```

The expressions in RPN form, one per line.

```

## 输入输出样例

### 输入样例 #1

```cpp
3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))
```


### 输出样例 #1

```cpp
abc*+
ab+zx+*
at+bac++cd+^*
```


