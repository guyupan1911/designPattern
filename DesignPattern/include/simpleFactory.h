#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H

#include "singleCore.h"

// 简单工厂模式:
// 优点：实现了责任的分割，提供了专门的工厂类用于创建对象
// 缺点：增加系统中类的个数，拓展困难，违背开闭原则, 增加新的产品需要修改简单工厂类

enum CTYPE{COREA, COREB};

// 简单工厂类：用于创建具体对象，实现了对责任的分割
class simpleFactory
{
public:
	singleCore* creatSingleCore(CTYPE ctype)
	{
		if (ctype == COREA)
			return new singleCoreA();
		else if (ctype == COREB)
			return new singleCoreB();
		else
			return nullptr;
	}
};

#endif