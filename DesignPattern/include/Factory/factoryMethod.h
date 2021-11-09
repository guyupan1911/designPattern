#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H

#include "singleCore.h"
#include <iostream>
using namespace std;

// 工厂方法模式:可以在不修改原有代码的情况下引入新的产品
// 缺点：增加新产品需要更多的类

// 抽象工厂：提供了创建产品的接口，调用者通过它访问具体的工厂来创建产品
class abstractFactory
{
public:
	virtual singleCore* createSingleCore() = 0;
};

// 具体工厂
class FactoryA : public abstractFactory
{
public:
	singleCoreA* createSingleCore() { return new singleCoreA(); };
};
class FactoryB : public abstractFactory
{
public:
	singleCoreB* createSingleCore() { return new singleCoreB(); };
};

#endif