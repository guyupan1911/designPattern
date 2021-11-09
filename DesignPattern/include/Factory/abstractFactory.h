#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "singleCore.h"
#include "multiCore.h"

class absFactory
{
public:
	virtual singleCore* createSingleCore() = 0;
	virtual multiCore* createMultiCore() = 0;
};

class absFactoryA : public absFactory
{
public:
	singleCoreA* createSingleCore() { return new singleCoreA(); }
	multiCoreA* createMultiCore() { return new multiCoreA(); }
};

class absFactoryB : public absFactory
{
public:
	singleCoreB* createSingleCore() { return new singleCoreB(); }
	multiCoreB* createMultiCore() { return new multiCoreB(); }
};


#endif