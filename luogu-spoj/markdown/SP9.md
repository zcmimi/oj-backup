# DIRVS - Direct Visibility

## 题意翻译

```

题目描述

建造全球移动通信系统网络是一项非常昂贵且复杂的任务。此外，在基站收发站（BTS）建成并投入使用之后，我们需要进行许多不同的测量来确定网络的状态，并且提出有效的改进措施。

ACM技术人员有一种专门的用来测量电磁场强度、收发器功率以及信号质量的设备。这种设备被装入到一个巨大的背包里，技术人员必须带着背包从一个基站移动到另一个基站。不幸的是，背包没有足够的空间来存放所有的测量值。它只有一个小的储存空间来储存几秒钟的测量值。测量值必须通过红外线传输到基站。红外传输需要技术人员与基站直接可见。

你的任务是找出两个基站之间的一条路径，使得在路径中的每时每刻都有至少一个基站是可见的。

输入输出格式

输入格式：

输入的第一行只有一个正整数T（约为500），代表测试用例个数。每个测试用例都给出了一个城镇的描述。为了简化问题，城镇用一个P×Q的矩形网格来表示。每一块地都恰好一米宽。对于每一块地都给出一个非负整数Zij，代表这一块地的高度，单位为米。这意味着城镇模型都是由立方体构成的，要么是实心的立方体，要么是空心的，不存在部分实心的立方体。

每个测试用例的第一行都包含两个整数P和Q，中间用一个空格分开，且1<=P，Q<=200。接下来的P行，每行都有Q个整数（中间用一个空格分开）。这些整数就是Zij（1<=i<=P，1<=j<=Q，0<=Zij<=5000）。在描述完城镇的地形后，在每个测试用例的最后一行，有四个数字R1，C1，R2，C2，代表两个基站的位置（1<=R1，R2<=P，1<=C1，C2<=Q）。R代表是位于城镇的第几行，L代表第几列。

技术人员是按照“步”来移动的。（“步（steps）”全程为“标准技术人员的基本步骤转移”）每一步都只能在相邻的两块地间进行。这意味着每步都只能是东南西北这四个方向。对角线方向的移动是不被允许的。A地与B地之间的移动只有在两地高度相差不多的情况下才被允许。因为技术人员一次最多能向上爬1米或向下爬3米。

在每一步结束时，都必须至少有一个基站是可见的。但是，如果存在在某一步进行到中间时没有基站可见也是被允许的，因为数据可以被储存空间处理。基站被认为是可见的，当且仅当基站坐标正上方的那一个立方体与技术人员所在的那个立方体之间直接可见。两个立方体之间的直接可见被定义为这两个立方体中心的连线不与其他任何其他的实心立方体相交。换句话说，就是把基站和技术人员都看作距地面0.5米且位于适当立方体区域中心的点。

注意红外线可以穿过两个紧挨着的立方体的缝隙，即使中间并没有空间。因为光束虽然接触到了两个立方体但是并未与任何一个“相交”。详情请参考最后一个输入样例。

输出格式：

请你找到从位于（R1，C1）的基站到位于（R2，C2）的基站的符合上述条件的最短路径。每一步都必须在两块相邻的地上进行，且这两块地高度不能相差太多，并且在每一步的结束，都必须至少有一个基站是可见的。

对于每个测试用例，输出“The shortest path is M steps long.”M为最短路径所需步数。如果不存在这样的路径，输出“Mission impossible!”。

```

贡献者：射命丸文

## 题目描述

 Building the GSM network is a very expensive and complex task. Moreover, after the _Base Transceiver Stations_ (_BTS_) are built and working, we need to perform many various measurements to determine the state of the network, and propose effective improvements to be made.

The ACM technicians have a special equipment for measuring the strength of electro-magnetic fields, the transceivers' power and quality of the signal. This equipment is packed into a huge knapsack and the technician must move with it from one BTS to another. Unfortunately, the knapsack have not enough memory for storing all of the measured values. It has a small cache only, that can store values for several seconds. Then the values must be transmitted to the BTS by an infrared connection (IRDA). The IRDA needs direct visibility between the technician and the BTS.

Your task is to find the path between two neighbouring BTSes such that at least one of those BTSes is always visible.

## 输入输出格式

### 输入格式

 There is a single positive integer T on the first line of input (equal to about 500). It stands for the number of test cases to follow. Each test case consists of a town description. For simplicity, a town is modelled as a rectangular grid of P x Q square fields. Each field is exactly 1 metre wide. For each field, a non-negative integer Z $ _{i,j} $ is given, representing the height of the terrain in that place, in metres. That means the town model is made of cubes, each of them being either solid or empty. There are no "half solid" cubes.

The first line of each test case contains two integer numbers P and Q, separated by a single space, 1 <= P,Q <= 200. Then there are P lines each containing Q integer numbers separated by a space. These numbers are Z $ _{i,j} $ , where 1 <= i <= P, 1 <= j <= Q and 0 <= Z $ _{i,j} $ <= 5000. After the terrain description, there are four numbers R $ _{1} $ , C $ _{1} $ , R $ _{2} $ , C $ _{2} $ on the last line of each test case. These numbers represent position of two BTSes, 1 <= R $ _{1} $ ,R $ _{2} $ <= P, 1 <= C $ _{1} $ ,C $ _{2} $ <= Q. The first coordinate (R) determines the row of the town, the second coordinate determines the column.

The technician is moving in steps (_steps_ stands for _Standard Technician's Elementary Positional Shift_). Each step is made between two neighbouring square fields. That means the step is always in North, South, West or East direction. It is not possible to move diagonally. The step between two fields A and B (step from A to B) is allowed only if the height of the terrain in the field B is not very different from the height in the field A. The technician can climb at most 1 metre up or descend at most 3 metres down in a single step.

At the end of each step, at least one of the two BTSes must be visible. However, there can be some point "in the middle of the step" where no BTS is visible. This is OK and the data is handled by the cache. The BTS is considered visible, if there is a direct visibility between the unit cube just above the terrain on the BTSes coordinates and the cube just above the terrain on the square field, where the technician is. Direct visibility between two cubes means that the line connecting the centres of the two cubes does not intersect any solid cube. However, the line can touch any number of solid cubes. In other words, consider both the BTS and the technician being points exactly half metre above the surface and in the centre of the appropriate square field.

Note that the IRDA beam can go between two cubes that touch each other by their edge, although there is no space between them. It is because such a beam touches both of these two cubes but does not intersect any of them. See the last test case of the sample input for an example of such a situation.

### 输出格式

 You are to find the shortest possible path from BTS (R $ _{1} $ , C $ _{1} $ ) to BTS (R $ _{2} $ , C $ _{2} $ ), meeting the above criteria. All steps must be done between neighbouring fields, the terrain must not elevate or descend too much, and at the end of each step, at least one BTS must be visible.

For each test case, print one line containing the sentence The shortest path is M steps long., where M is the number of steps that must be made. If there is no such path, output the sentence Mission impossible!.

## 输入输出样例

### 输入样例 #1

```cpp
4
5 5
8 7 6 5 4
2 2 2 2 2
2 2 2 2 2
2 2 2 2 2
2 2 2 2 2
1 1 5 1
5 8
2 2 2 2 2 2 2 2
2 2 2 2 2 2 2 2
2 2 2 2 2 2 2 2
9 9 9 9 9 9 9 2
2 2 2 2 2 2 2 2
1 2 5 1
5 8
2 2 2 2 2 2 2 2
2 2 2 2 2 2 2 2
2 2 2 2 2 2 2 2
9 9 9 9 9 9 9 2
2 2 2 2 2 2 2 2
1 5 5 1
6 12
5 5 5 5 1 5 5 5 5 5 5 5
5 5 5 5 1 5 5 5 5 5 5 5
5 5 5 5 9 5 5 5 5 5 5 5
5 9 1 5 5 5 5 5 5 5 5 5
5 5 9 5 5 5 5 5 5 5 5 5
5 5 9 5 5 5 5 5 5 5 5 5
6 1 3 12
```


### 输出样例 #1

```cpp
The shortest path is 10 steps long.
Mission impossible!
The shortest path is 14 steps long.
The shortest path is 18 steps long.
```


