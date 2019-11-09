# Checkout Assistant

## 题意翻译

题目描述

Bob 来到一家现购自运商店，将 n 件商品放入了他的手推车，然后到收银台 付款。每件商品由它的价格 pi 和收银员扫描它的时间 ti 秒定义。当收银员正在扫 描某件商品时，Bob 可以从他的手推车中偷走某些其它商品。Bob 需要恰好 1 秒

来偷走一件商品。Bob 需要付给收银员的最少钱数是多少？请记住，收银员扫描 商品的顺序由 Bob 决定。

输入输出格式

输入格式：

输入第一行包含数 n（1≤n≤2000）。接下来 n 行每行每件商品由 一对数 ti，ci（0≤ti≤2000，1≤ci≤10^9）描述。如果 ti 是 0，那么当收银员扫描 商品i时，Bob 不能偷任何东西。

输出格式

输出一个数字——Bob需要支付的最小金额是多少。

## 题目描述

Bob came to a cash & carry store, put $ n $ items into his trolley, and went to the checkout counter to pay. Each item is described by its price $ c_{i} $ and time $ t_{i} $ in seconds that a checkout assistant spends on this item. While the checkout assistant is occupied with some item, Bob can steal some other items from his trolley. To steal one item Bob needs exactly 1 second. What is the minimum amount of money that Bob will have to pay to the checkout assistant? Remember, please, that it is Bob, who determines the order of items for the checkout assistant.

## 输入输出格式

### 输入格式

The first input line contains number $ n $ ( $ 1<=n<=2000 $ ). In each of the following $ n $ lines each item is described by a pair of numbers $ t_{i} $ , $ c_{i} $ ( $ 0<=t_{i}<=2000,1<=c_{i}<=10^{9} $ ). If $ t_{i} $ is 0, Bob won't be able to steal anything, while the checkout assistant is occupied with item $ i $ .

### 输出格式

Output one number — answer to the problem: what is the minimum amount of money that Bob will have to pay.

## 输入输出样例

### 输入样例 #1

```cpp
4
2 10
0 20
1 5
1 3

```
### 输出样例 #1

```cpp
8

```
### 输入样例 #2

```cpp
3
0 1
0 10
0 100

```
### 输出样例 #2

```cpp
111

```
