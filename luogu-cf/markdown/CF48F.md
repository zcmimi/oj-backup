# Snow sellers

## 题意翻译

## 题目描述

Berland的新年庆祝活动持续了$n$天。只有今年冬天是无雪的，所以冬季庆典的组织者不得不购买人造雪。在Berland有很多卖人造雪的公司。第$i$个公司每天生产$w_{i}$立方米的雪。第二天，雪融化了，公司又要生产$w_{i}$立方米的雪。在活动期间公司的产品打折，所以雪的价格每天都在下降。第一天，第$i$个公司生产的所有雪的总价为$c_{i}$ bourles（当地的一种货币）。接下来的每一天价格将会降低$a_{i}$ bourles,即第二天的价格为$c_{i}-a_{i}$ bourles,第三天则为$c_{i}-2a_{i}$ bourles,以此类推。众所周知，对于一家公司来说，它卖的雪的价格永远是正数。现在你需要帮助活动主办方制定购买雪的方案，以便每天恰好购买$W$立方米的雪。这样就没有必要买下所有公司生产的所有雪了。如果你在某一天从第$i$家公司买了$n_{i}$立方米的雪($0 \leq n_{i} \leq w_{i}$，注意$n_{i}$不一定是整数！），总价为$s_{i}$ bourles时，那么每立方米的雪的价格是$n_{i}s_{i}/w_{i}$ bourles。在不同的日子里，人们可以从不同的公司买雪。你需要花尽可能少的钱来完成雪的购买。保证所有公司生产的雪都足够多。

## 输入输出格式

#### 输入格式

输入的第一行包含三个正整数$n,m,W$，表示活动时间为$n$天，有$m$家公司，每天需要购买$W$立方米的雪。

输入的第二行包括$m$个正整数，表示$w_{1},w_{2}...w_{m}$.

输入的第三行包括$m$个正整数，表示$c_{1},c_{2}...c_{m}$.

输入的第四行包括$m$个正整数，表示$a_{1},a_{2}...a_{m}$.

所有数据严格大于0，并且不超过$10^9$。

数据保证对于任意$i$，$c_{i}-(n-1)a_{i}$都不小于$0$。

#### 输出格式

输出仅包含一个数字，即对给定的条件所需要的最小花费。输出不包含$e+$，$e-$和前导0。输出数据与正确答案的误差不能超过$10^{-9}$。

感谢@Simpson561 提供翻译

## 题目描述

The New Year celebrations in Berland last $ n $ days. Only this year the winter is snowless, that’s why the winter celebrations’ organizers should buy artificial snow. There are $ m $ snow selling companies in Berland. Every day the $ i $ -th company produces $ w_{i} $ cubic meters of snow. Next day the snow thaws and the company has to produce $ w_{i} $ cubic meters of snow again. During the celebration new year discounts are on, that’s why the snow cost decreases every day. It is known that on the first day the total cost of all the snow produced by the $ i $ -th company is equal to $ c_{i} $ bourles. Every day this total cost decreases by $ a_{i} $ bourles, i.e. on the second day it is equal to $ c_{i}-a_{i} $ ,and on the third day — to $ c_{i}-2a_{i} $ , and so on. It is known that for one company the cost of the snow produced by it does not get negative or equal to zero. You have to organize the snow purchase so as to buy every day exactly $ W $ snow cubic meters. At that it is not necessary to buy from any company all the snow produced by it. If you buy $ n_{i} $ cubic meters of snow ( $ 0<=n_{i}<=w_{i} $ , the number $ n_{i} $ is not necessarily integer!) from the $ i $ -th company at one of the days when the cost of its snow is equal to $ s_{i} $ , then its price will total to ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF48F/4477b22ff30729edce819273024bbdd241079730.png) bourles. During one day one can buy the snow from several companies. In different days one can buy the snow from different companies. It is required to make the purchases so as to spend as little money as possible. It is guaranteed that the snow produced by the companies will be enough.

## 输入输出格式

### 输入格式

The first line contains integers $ n $ , $ m $ and $ W $ ( $ 1<=n<=100 $ , $ 1<=m<=500000 $ , $ 1<=W<=10^{9} $ ) which represent the number of days, the number of companies and the amount of snow that needs to be purchased on every one of the $ n $ days. The second line contains $ m $ integers $ w_{i} $ . The third line contains $ m $ integers $ c_{i} $ . The fourth line contains $ m $ integers $ a_{i} $ . All the numbers are strictly positive and do not exceed $ 10^{9} $ . For all the $ i $ the inequation $ c_{i}-(n-1)a_{i}&gt;0 $ holds true.

### 输出格式

Print a single number — the answer to the given problem. Print the answer in the format with the decimal point (even if the answer is integer, it must contain the decimal point), without "e" and without leading zeroes. The answer should differ with the right one by no more than $ 10^{-9} $ .

## 输入输出样例

### 输入样例 #1

```cpp
2 3 10
4 4 4
5 5 8
1 2 5

```
### 输出样例 #1

```cpp
22.000000000000000

```
### 输入样例 #2

```cpp
100 2 1000000000
999999998 999999999
1000000000 1000000000
1 1

```
### 输出样例 #2

```cpp
99999995149.999995249999991

```
