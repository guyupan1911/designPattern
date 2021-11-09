#ifndef SINGLECORE_H
#define SINGLECORE_H

#include <iostream>
using namespace std;

// 抽象产品类，负责描述所有实例所共有的接口
class singleCore
{
public:
	virtual void show() = 0;
};

// 具体产品类，简单工厂模式的创建目标
class singleCoreA : public singleCore
{
public:
	void show() { cout << "singleCoreA" << endl; }
};
class singleCoreB : public singleCore
{
public:
	void show() { cout << "singleCoreB" << endl; }
};



#endif