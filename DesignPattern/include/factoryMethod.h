#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H

#include "singleCore.h"
#include <iostream>
using namespace std;

// ��������ģʽ:�����ڲ��޸�ԭ�д��������������µĲ�Ʒ
// ȱ�㣺�����²�Ʒ��Ҫ�������

// ���󹤳����ṩ�˴�����Ʒ�Ľӿڣ�������ͨ�������ʾ���Ĺ�����������Ʒ
class abstractFactory
{
public:
	virtual singleCore* createSingleCore() = 0;
};

// ���幤��
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