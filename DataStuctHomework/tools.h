// 提供一些需要的头文件，定义一些全局变量
#ifndef __TOOLS_H__

#define __TOOLS_H__

#define WINVER 0x0A00
#define _WIN32_WINNT 0x0A00

#include <graphics.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>
#include <random>
#include <ctime>
#include <utility>
#include <conio.h>
#include <ShellScalingApi.h>
#pragma comment(lib, "Shcore.lib")

// 图的最大宽度，请确保为点对间最小距离的倍数
const int max_width = 10000;
// 图的最大高度，请确保为点对间最小距离的倍数
const int max_height = 10000;
// 窗口的宽度
const int window_width = 1600;
// 窗口的高度
const int window_height = 1200;
// 点与点之间最小的曼哈顿距离
const int min_distance = 10;


#endif