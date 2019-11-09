# Memory Manager

## 题意翻译

题目描述

第一个国家级操作系统——BerlOS就要发布了。但是，它的一些功能还没有完善，比如内存管理系统。在开发者的计划里，第一版里的内存管理系统是简单并且是线性的。它将会支持以下操作：

alloc n —— 在内存中分配n字节的空间。此命令将返回已分配的内存块的编号x。

erase x —— 释放编号为x的内存块。

defragment —— 碎片整理，将所有内存块全部向内存的起点靠拢并且不改变它们的顺序。

整条内存一共有m个字节，每个字节依次编号为1,2,...,m。

操作 alloc 有一个参数n，表示需要分配n字节大小的内存块。在执行这个操作时，系统将把一块最靠近内存起点的，长度为n的连续空闲字节分配到一个内存块（这块内存块内的所有字节将被标记为“已使用”）。这个操作的返回值为这块内存块的编号。如果没有符合条件的内存块，返回 NULL 。

操作 erase 有一个参数x，表示需要释放的内存块的编号。它将释放这个内存块（这块内存块内的所有字节将被标记为“空闲”）。如果成功释放，不返回值；如果编号为x的内存块不存在，返回 ILLEGAL\_ERASE\_ARGUMENT 。

操作 deflagment 没有任何参数。它只是将所有内存块向前依次（编号小的地方）挪动直到它们紧挨在一起。（不改变它们的顺序）

你将用连续的正整数（1,2,...）作为每一个内存块的编号。比如，第i次分配的内存块编号为i。你的任务是依次输出所有 alloc 指令的返回值，以及所有执行失败的 erase 指令的返回值。

输入输出格式

输入格式

输入文件的第一行包括两个正整数 t 和 m 。 t 表示操作次数， m 表示内存大小（为m字节）。接下来的t行为每一次的命令。命令有以下三种：alloc 命令，后接一个整数 n ； erase 命令，后接一个整数 x ； defragment 命令。

输出格式

输出文件的每一行依次为每次执行的 alloc 函数的返回值或执行失败的 erase 函数返回的 ILLEGAL\_ERASE\_ARGUMENT 。

translated by 星烁晶熠辉

## 题目描述

There is little time left before the release of the first national operating system BerlOS. Some of its components are not finished yet — the memory manager is among them. According to the developers' plan, in the first release the memory manager will be very simple and rectilinear. It will support three operations:

- alloc n — to allocate $ n $ bytes of the memory and return the allocated block's identifier $ x $ ;

- erase x — to erase the block with the identifier $ x $ ;

- defragment — to defragment the free memory, bringing all the blocks as close to the beginning of the memory as possible and preserving their respective order;

The memory model in this case is very simple. It is a sequence of $ m $ bytes, numbered for convenience from the first to the $ m $ -th.

The first operation alloc n takes as the only parameter the size of the memory block that is to be allocated. While processing this operation, a free block of $ n $ successive bytes is being allocated in the memory. If the amount of such blocks is more than one, the block closest to the beginning of the memory (i.e. to the first byte) is prefered. All these bytes are marked as not free, and the memory manager returns a 32-bit integer numerical token that is the identifier of this block. If it is impossible to allocate a free block of this size, the function returns NULL.

The second operation erase x takes as its parameter the identifier of some block. This operation frees the system memory, marking the bytes of this block as free for further use. In the case when this identifier does not point to the previously allocated block, which has not been erased yet, the function returns ILLEGAL\_ERASE\_ARGUMENT.

The last operation defragment does not have any arguments and simply brings the occupied memory sections closer to the beginning of the memory without changing their respective order.

In the current implementation you are to use successive integers, starting with 1, as identifiers. Each successful alloc operation procession should return following number. Unsuccessful alloc operations do not affect numeration.

You are to write the implementation of the memory manager. You should output the returned value for each alloc command. You should also output ILLEGAL\_ERASE\_ARGUMENT for all the failed erase commands.

## 输入输出格式

### 输入格式

The first line of the input data contains two positive integers $ t $ and $ m $ ( $ 1<=t<=100;1<=m<=100 $ ), where $ t $ — the amount of operations given to the memory manager for processing, and $ m $ — the available memory size in bytes. Then there follow $ t $ lines where the operations themselves are given. The first operation is alloc n ( $ 1<=n<=100 $ ), where $ n $ is an integer. The second one is erase x, where $ x $ is an arbitrary 32-bit integer numerical token. The third operation is defragment.

### 输出格式

Output the sequence of lines. Each line should contain either the result of alloc operation procession , or ILLEGAL\_ERASE\_ARGUMENT as a result of failed erase operation procession. Output lines should go in the same order in which the operations are processed. Successful procession of alloc operation should return integers, starting with 1, as the identifiers of the allocated blocks.

## 输入输出样例

### 输入样例 #1

```cpp
6 10
alloc 5
alloc 3
erase 1
alloc 6
defragment
alloc 6

```
### 输出样例 #1

```cpp
1
2
NULL
3

```
