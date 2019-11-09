# Die Roll

## 题意翻译

小Y，小W和小D进行扔骰子（六面）游戏，谁投出的点数最大算谁胜利，现在已知小Y和小W的得分，请你帮小D求出她获胜的概率

注意：

1.以"分子/分母"输出，特别的，若不可能获胜输出"0/1"，100%获胜输出"1/1"

2.小Y和小W非常绅士，如果小D的得分和他们一样，他们也会算作小D获胜

Translated by @稀神探女

## 题目描述

Yakko, Wakko and Dot, world-famous animaniacs, decided to rest from acting in cartoons, and take a leave to travel a bit. Yakko dreamt to go to Pennsylvania, his Motherland and the Motherland of his ancestors. Wakko thought about Tasmania, its beaches, sun and sea. Dot chose Transylvania as the most mysterious and unpredictable place.

But to their great regret, the leave turned to be very short, so it will be enough to visit one of the three above named places. That's why Yakko, as the cleverest, came up with a truly genius idea: let each of the three roll an ordinary six-sided die, and the one with the highest amount of points will be the winner, and will take the other two to the place of his/her dreams.

Yakko thrown a die and got Y points, Wakko — W points. It was Dot's turn. But she didn't hurry. Dot wanted to know for sure what were her chances to visit Transylvania.

It is known that Yakko and Wakko are true gentlemen, that's why if they have the same amount of points with Dot, they will let Dot win.

## 输入输出格式

### 输入格式

The only line of the input file contains two natural numbers Y and W — the results of Yakko's and Wakko's die rolls.

### 输出格式

Output the required probability in the form of irreducible fraction in format «A/B», where A — the numerator, and B — the denominator. If the required probability equals to zero, output «0/1». If the required probability equals to 1, output «1/1».

## 输入输出样例

### 输入样例 #1

```cpp
4 2

```
### 输出样例 #1

```cpp
1/2

```
## 说明

Dot will go to Transylvania, if she is lucky to roll 4, 5 or 6 points.

