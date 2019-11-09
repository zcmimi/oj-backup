# Sinking Ship

## 题意翻译

有一艘船撞上了暗礁，正在下沉，现在船上的$n$个人需按一定次序撤离。所有人都有标号$1$~$n$(输入的顺序就是标号)。

撤离的指示如下：

•第一批离开的是老鼠($rat$)；

•第二批离开的是妇女($woman$)和儿童($child$),这两个群体具有相同的优先性；

•第三批离开的是剩下的男人($man$);

•最后离开的是船长($captain$)。

如果根据上述指示有某两个人的优先性相同则**标号小**的先撤离。

对于船上的每个人，我们知道他的身份，以及他的名字。所有的船员都有不同的名字。现在请你确定疏散船员的顺序并打印他们的名字。

## 题目描述

The ship crashed into a reef and is sinking. Now the entire crew must be evacuated. All $ n $ crew members have already lined up in a row (for convenience let's label them all from left to right with positive integers from 1 to $ n $ ) and await further instructions. However, one should evacuate the crew properly, in a strict order. Specifically:

The first crew members to leave the ship are rats. Then women and children (both groups have the same priority) leave the ship. After that all men are evacuated from the ship. The captain leaves the sinking ship last.

If we cannot determine exactly who should leave the ship first for any two members of the crew by the rules from the previous paragraph, then the one who stands to the left in the line leaves the ship first (or in other words, the one whose number in the line is less).

For each crew member we know his status as a crew member, and also his name. All crew members have different names. Determine the order in which to evacuate the crew.

## 输入输出格式

### 输入格式

The first line contains an integer $ n $ , which is the number of people in the crew ( $ 1<=n<=100 $ ). Then follow $ n $ lines. The $ i $ -th of those lines contains two words — the name of the crew member who is $ i $ -th in line, and his status on the ship. The words are separated by exactly one space. There are no other spaces in the line. The names consist of Latin letters, the first letter is uppercase, the rest are lowercase. The length of any name is from 1 to 10 characters. The status can have the following values: rat for a rat, woman for a woman, child for a child, man for a man, captain for the captain. The crew contains exactly one captain.

### 输出格式

Print $ n $ lines. The $ i $ -th of them should contain the name of the crew member who must be the $ i $ -th one to leave the ship.

## 输入输出样例

### 输入样例 #1

```cpp
6
Jack captain
Alice woman
Charlie man
Teddy rat
Bob child
Julia woman

```
### 输出样例 #1

```cpp
Teddy
Alice
Bob
Julia
Charlie
Jack

```
