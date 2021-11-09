#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
using namespace std;

// 策略模式：定义一系列可以互换的算法 ，在不同的类中封装，使算法的变化独立于使用者

// 抽象类：定义算法的接口
class ReplaceAlgorithm
{
public:
	virtual void Replace() = 0;
};

// 三种具体的算法
class LRU_ReplaceAlgorithm : public ReplaceAlgorithm
{
public:
	void Replace() { cout << "Least Recently Used replace algorithm" << endl; }
};

class FIFO_ReplaceAlgorithm : public ReplaceAlgorithm
{
public:
	void Replace() { cout << "First in First out replace algorithm" << endl; }
};

class Random_ReplaceAlgorithm : public ReplaceAlgorithm
{
public:
	void Replace() { cout << "Random replace algorithm" << endl; }
};

#endif