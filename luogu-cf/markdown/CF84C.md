# Biathlon

## 题目描述

Perhaps many have heard that the World Biathlon Championship has finished. Although our hero Valera was not present at this spectacular event himself and only watched it on TV, it excited him so much that he decided to enroll in a biathlon section.

Of course, biathlon as any sport, proved very difficult in practice. It takes much time and effort. Workouts, workouts, and workouts, — that's what awaited Valera on his way to great achievements in biathlon.

As for the workouts, you all probably know that every professional biathlete should ski fast and shoot precisely at the shooting range. Only in this case you can hope to be successful, because running and shooting are the two main components of biathlon. Valera has been diligent in his ski trainings, which is why he runs really fast, however, his shooting accuracy is nothing to write home about.

On a biathlon base where Valera is preparing for the competition, there is a huge rifle range with $ n $ targets. Each target have shape of a circle, and the center of each circle is located on the $ Ox $ axis. At the last training session Valera made the total of $ m $ shots. To make monitoring of his own results easier for him, one rather well-known programmer (of course it is you) was commissioned to write a program that would reveal how many and which targets Valera hit. More specifically, for each target the program must print the number of the first successful shot (in the target), or "-1" if this was not hit. The target is considered hit if the shot is inside the circle or on its boundary. Valera is counting on you and perhaps, thanks to you he will one day win international competitions.

## 输入输出格式

### 输入格式

The first line of the input file contains the integer $ n $ ( $ 1<=n<=10^{4} $ ), which is the number of targets. The next $ n $ lines contain descriptions of the targets. Each target is a circle whose center is located on the $ Ox $ axis. Each circle is given by its coordinate of the center $ x $ ( $ -2·10^{4}<=x<=2·10^{4} $ ) and its radius $ r $ ( $ 1<=r<=1000 $ ). It is guaranteed that no two targets coincide, intersect or are nested into each other, but they can touch each other.

The next line contains integer $ m $ ( $ 1<=m<=2·10^{5} $ ), which is the number of shots. Next $ m $ lines contain descriptions of the shots, which are points on the plane, given by their coordinates $ x $ and $ y $ ( $ -2·10^{4}<=x,y<=2·10^{4} $ ).

All the numbers in the input are integers.

Targets and shots are numbered starting from one in the order of the input.

### 输出格式

Print on the first line a single number, the number of targets hit by Valera. Print on the second line for each of the targets the number of its first hit or "-1" (without quotes) if this number does not exist. Separate numbers with spaces.

## 输入输出样例

### 输入样例 #1

```cpp
3
2 1
5 2
10 1
5
0 1
1 3
3 0
4 0
4 0

```
### 输出样例 #1

```cpp
2
3 3 -1 

```
### 输入样例 #2

```cpp
3
3 2
7 1
11 2
4
2 1
6 0
6 4
11 2

```
### 输出样例 #2

```cpp
3
1 2 4 

```
