# Happy Farm 5

## 题意翻译

快乐农场的创始人决定发明奶牛放牧的机制。游戏中的奶牛动作非常缓慢，甚至可以认为它们是静止的。然而，肉食动物应该被赶走。 为此，一位年轻的球员Vasya决定让牧羊人沿着同一条封闭的小路绕着牛跑。牛严格地呆在有限的地区，因为否则一些奶牛迟早会被吃掉。，Vasya想要最短的路径完成时间。 奶牛和牧羊人用整数坐标表示平面上的点。游戏时间是由回合来模拟。在每一个转弯过程中，牧羊人可以停留在他站立的地方，也可以在几个方向中选择一个:水平方向、垂直方向或对角方向。由于坐标总是整数，那么水平和垂直步长等于11，对角步长等于根号2。牛不动。必须尽量减少牧羊人绕着羊群跑动的次数

求在寻找的路径中移动的最小数量

## 题目描述

The Happy Farm 5 creators decided to invent the mechanism of cow grazing. The cows in the game are very slow and they move very slowly, it can even be considered that they stand still. However, carnivores should always be chased off them.

For that a young player Vasya decided to make the shepherd run round the cows along one and the same closed path. It is very important that the cows stayed strictly inside the area limited by the path, as otherwise some cows will sooner or later be eaten. To be absolutely sure in the cows' safety, Vasya wants the path completion time to be minimum.

The new game is launched for different devices, including mobile phones. That's why the developers decided to quit using the arithmetics with the floating decimal point and use only the arithmetics of integers. The cows and the shepherd in the game are represented as points on the plane with integer coordinates. The playing time is modeled by the turns. During every turn the shepherd can either stay where he stands or step in one of eight directions: horizontally, vertically, or diagonally. As the coordinates should always remain integer, then the length of a horizontal and vertical step is equal to $ 1 $ , and the length of a diagonal step is equal to ![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF50C/2826342a15affce70e459206e8466cd2b66552a3.png). The cows do not move. You have to minimize the number of moves the shepherd needs to run round the whole herd.

## 输入输出格式

### 输入格式

The first line contains an integer $ N $ which represents the number of cows in the herd ( $ 1<=N<=10^{5} $ ). Each of the next $ N $ lines contains two integers $ X_{i} $ and $ Y_{i} $ which represent the coordinates of one cow of ( $ |X_{i}|,|Y_{i}|<=10^{6} $ ). Several cows can stand on one point.

### 输出格式

Print the single number — the minimum number of moves in the sought path.

## 输入输出样例

### 输入样例 #1

```cpp
4
1 1
5 1
5 3
1 3

```
### 输出样例 #1

```cpp
16

```
## 说明

Picture for the example test: The coordinate grid is painted grey, the coordinates axes are painted black, the cows are painted red and the sought route is painted green.

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF50C/8b34e942d3e45fab9f6a1a087e0ce5cc6f58c465.png)

