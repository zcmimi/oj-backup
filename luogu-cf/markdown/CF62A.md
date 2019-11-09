# A Student&#039;s Dream

## 题意翻译

题目大意：

有两个人要握手，女孩左手有al个手指，右手有ar个手指；男孩左手有bl个手指，右手有br个手指。握手规则为：在女孩的两根手指中间必须有男孩的一根手指，并且男孩的三根手指之间必须有女孩的一根手指。

现在要判断如果可以握手输出YES，不能输出NO。

输入格式：第一行al,ar;第二行 b1,br。

输出：YES或NO（按照上述规则）

## 题目描述

Statistics claims that students sleep no more than three hours a day. But even in the world of their dreams, while they are snoring peacefully, the sense of impending doom is still upon them.

A poor student is dreaming that he is sitting the mathematical analysis exam. And he is examined by the most formidable professor of all times, a three times Soviet Union Hero, a Noble Prize laureate in student expulsion, venerable Petr Palych.

The poor student couldn't answer a single question. Thus, instead of a large spacious office he is going to apply for a job to thorium mines. But wait a minute! Petr Palych decided to give the student the last chance! Yes, that is possible only in dreams.

So the professor began: "Once a Venusian girl and a Marsian boy met on the Earth and decided to take a walk holding hands. But the problem is the girl has $ a_{l} $ fingers on her left hand and $ a_{r} $ fingers on the right one. The boy correspondingly has $ b_{l} $ and $ b_{r} $ fingers. They can only feel comfortable when holding hands, when no pair of the girl's fingers will touch each other. That is, they are comfortable when between any two girl's fingers there is a boy's finger. And in addition, no three fingers of the boy should touch each other. Determine if they can hold hands so that the both were comfortable."

The boy any the girl don't care who goes to the left and who goes to the right. The difference is only that if the boy goes to the left of the girl, he will take her left hand with his right one, and if he goes to the right of the girl, then it is vice versa.

## 输入输出格式

### 输入格式

The first line contains two positive integers not exceeding $ 100 $ . They are the number of fingers on the Venusian girl's left and right hand correspondingly. The second line contains two integers not exceeding $ 100 $ . They are the number of fingers on the Marsian boy's left and right hands correspondingly.

### 输出格式

Print YES or NO, that is, the answer to Petr Palych's question.

## 输入输出样例

### 输入样例 #1

```cpp
5 1
10 5

```
### 输出样例 #1

```cpp
YES
```


### 输入样例 #2

```cpp
4 5
3 3

```
### 输出样例 #2

```cpp
YES
```


### 输入样例 #3

```cpp
1 2
11 6

```
### 输出样例 #3

```cpp
NO
```


## 说明

The boy and the girl don't really care who goes to the left.

