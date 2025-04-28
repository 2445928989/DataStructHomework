// 提供随机数引擎的定义
#ifndef __RANDOM_H__
#define __RANDOM_H__

#include "tools.h"

class Random {
public:
	static std::mt19937 rand;
	static unsigned int rnd();
};



#endif