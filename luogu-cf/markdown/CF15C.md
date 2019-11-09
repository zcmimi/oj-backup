# Industrial Nim

## 题意翻译

第一行给出N表示有N个采石场，接下来N行每一行一个Mi一个Xi,表示第i个采石场有Mi辆车，这个采石场中第1辆车的石头数量是Xi，第2辆车中有Xi+1个石头......第Mi辆车的石头的数量是Xi+Mi-1。

有两个人每次从任意一辆车中取任意数量的石头（不能为0），最后一个取完所有石头的赢。

若先手赢输出"tolik"，后手赢输出"bolik"。

1<=n<=10^5

1<=xi,mi<=10^16;

感谢 @稀神探女 提供的翻译。

## 题目描述

There are $ n $ stone quarries in Petrograd.

Each quarry owns $ m_{i} $ dumpers ( $ 1<=i<=n $ ). It is known that the first dumper of the $ i $ -th quarry has $ x_{i} $ stones in it, the second dumper has $ x_{i}+1 $ stones in it, the third has $ x_{i}+2 $ , and the $ m_{i} $ -th dumper (the last for the $ i $ -th quarry) has $ x_{i}+m_{i}-1 $ stones in it.

Two oligarchs play a well-known game Nim. Players take turns removing stones from dumpers. On each turn, a player can select any dumper and remove any non-zero amount of stones from it. The player who cannot take a stone loses.

Your task is to find out which oligarch will win, provided that both of them play optimally. The oligarchs asked you not to reveal their names. So, let's call the one who takes the first stone «tolik» and the other one «bolik».

## 输入输出格式

### 输入格式

The first line of the input contains one integer number $ n $ ( $ 1<=n<=10^{5} $ ) — the amount of quarries. Then there follow $ n $ lines, each of them contains two space-separated integers $ x_{i} $ and $ m_{i} $ ( $ 1<=x_{i},m_{i}<=10^{16} $ ) — the amount of stones in the first dumper of the $ i $ -th quarry and the number of dumpers at the $ i $ -th quarry.

### 输出格式

Output «tolik» if the oligarch who takes a stone first wins, and «bolik» otherwise.

## 输入输出样例

### 输入样例 #1

```cpp
2
2 1
3 2

```
### 输出样例 #1

```cpp
tolik

```
### 输入样例 #2

```cpp
4
1 1
1 1
1 1
1 1

```
### 输出样例 #2

```cpp
bolik

```
