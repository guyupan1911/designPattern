#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
using namespace std;

// ����ģʽ������һϵ�п��Ի������㷨 ���ڲ�ͬ�����з�װ��ʹ�㷨�ı仯������ʹ����

// �����ࣺ�����㷨�Ľӿ�
class ReplaceAlgorithm
{
public:
	virtual void Replace() = 0;
};

// ���־�����㷨
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