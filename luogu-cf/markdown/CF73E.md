# Morrowindows

## 题目描述

Vasya plays The Elder Trolls III: Morrowindows. He has a huge list of items in the inventory, however, there is no limits on the size of things. Vasya does not know the total amount of items but he is sure that are not more than $ x $ and not less than $ 2 $ items in his inventory. A new patch for the game appeared to view inventory in $ n $ different modes. Displaying in mode $ i $ is a partition of all inventory items on pages, each of which (except for maybe the last one) shows exactly $ a_{i} $ items. In addition, each mode shows how many pages $ b_{i} $ is in a complete list. Great! Perhaps this information will be enough for Vasya to find the required number. Moreover, it is very interesting, what is the fewest number of modes in which Vasya can see inventory to determine the number of items in it?

Vasya cannot use the information that was received while looking on inventory in some mode for selection of next actions. I. e. Vasya chooses some set of modes first, and then sees all the results and determines the size.

Knowing the number of $ a_{i} $ , $ x $ and assuming that Vasya is very smart, check whether he can uniquely determine the number of items in his inventory, and how many modes he will need to do that if he knows numbers $ a_{i} $ , $ x $ and he is able to know number $ b_{i} $ after viewing items in mode $ i $ .

## 输入输出格式

### 输入格式

The first line contains two integers $ n $ and $ x $ ( $ 0<=n<=10^{5},2<=x<=10^{9} $ ). The second line contains integers $ a_{i} $ ( $ 1<=a_{i}<=10^{9} $ ). Some numbers among all $ a_{i} $ may be equal.

### 输出格式

Output the fewest amount of modes required to uniquely determine amount of items in the inventory. If there is no solution output $ -1 $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 4
2 3

```
### 输出样例 #1

```cpp
2

```
### 输入样例 #2

```cpp
1 4
2

```
### 输出样例 #2

```cpp
-1

```
## 说明

In the second example Vasya is not able to determine items count uniquely because 3 items, as well as 4 items, can be displayed on two pages.

