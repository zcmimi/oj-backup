# Tram

## 题目描述

In a Berland city S\*\*\* there is a tram engine house and only one tram. Three people work in the house — the tram driver, the conductor and the head of the engine house. The tram used to leave the engine house every morning and drove along his loop route. The tram needed exactly $ c $ minutes to complete the route. The head of the engine house controlled the tram’s movement, going outside every $ c $ minutes when the tram drove by the engine house, and the head left the driver without a bonus if he was even one second late.

It used to be so. Afterwards the Berland Federal Budget gave money to make more tramlines in S\*\*\*, and, as it sometimes happens, the means were used as it was planned. The tramlines were rebuilt and as a result they turned into a huge network. The previous loop route may have been destroyed. S\*\*\* has $ n $ crossroads and now $ m $ tramlines that links the pairs of crossroads. The traffic in Berland is one way so the tram can move along each tramline only in one direction. There may be several tramlines between two crossroads, which go same way or opposite ways. Every tramline links two different crossroads and for each crossroad there is at least one outgoing tramline.

So, the tramlines were built but for some reason nobody gave a thought to increasing the number of trams in S\*\*\*! The tram continued to ride alone but now the driver had an excellent opportunity to get rid of the unending control of the engine house head. For now due to the tramline network he could choose the route freely! Now at every crossroad the driver can arbitrarily choose the way he can go. The tram may even go to the parts of S\*\*\* from where it cannot return due to one way traffic. The driver is not afraid of the challenge: at night, when the city is asleep, he can return to the engine house safely, driving along the tramlines in the opposite direction.

The city people were rejoicing for some of the had been waiting for the tram to appear on their streets for several years. However, the driver’s behavior enraged the engine house head. Now he tries to carry out an insidious plan of installing cameras to look after the rebellious tram.

The plan goes as follows. The head of the engine house wants to install cameras at some crossroads, to choose a period of time $ t $ and every $ t $ minutes turn away from the favourite TV show to check where the tram is. Also the head of the engine house wants at all moments of time, divisible by $ t $ , and only at such moments the tram to appear on a crossroad under a camera. There must be a camera on the crossroad by the engine house to prevent possible terrorist attacks on the engine house head. Among all the possible plans the engine house head chooses the plan with the largest possible value of $ t $ (as he hates being distracted from his favourite TV show but he has to). If such a plan is not unique, pick the plan that requires the minimal possible number of cameras. Find such a plan.

## 输入输出格式

### 输入格式

The first line contains integers $ n $ and $ m $ ( $ 2<=n,m<=10^{5} $ ) — the number of crossroads and tramlines in S\*\*\* respectively. The next $ m $ lines contain the descriptions of the tramlines in " $ u $ $ v $ " format, where $ u $ is the initial tramline crossroad and $ v $ is its final crossroad. The crossroads are numbered with integers from $ 1 $ to $ n $ , and the engine house is at the crossroad number $ 1 $ .

### 输出格式

In the first line output the value of $ t $ . In the next line output the value of $ k $ — the required number of the cameras. In the next line output space-separated numbers of the crossroads, where the cameras should be installed. Output the numbers in increasing order.

## 输入输出样例

### 输入样例 #1

```cpp
4 5
1 2
2 3
3 4
4 1
1 4

```
### 输出样例 #1

```cpp
2
2
1 3

```
