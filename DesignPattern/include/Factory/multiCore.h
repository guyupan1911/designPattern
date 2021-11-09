#ifndef MULTICORE_H
#define MULTICORE_H

#include <iostream>
using namespace std;

class multiCore
{
public:
	virtual void show() = 0;
};

class multiCoreA : public multiCore
{
public:
	void show() { cout << "multiCoreA" << endl; }
};

class multiCoreB : public multiCore
{
public:
	void show() { cout << "multiCoreB" << endl; }
};

#endif