#ifndef SINGLECORE_H
#define SINGLECORE_H

#include <iostream>
using namespace std;

// �����Ʒ�࣬������������ʵ�������еĽӿ�
class singleCore
{
public:
	virtual void show() = 0;
};

// �����Ʒ�࣬�򵥹���ģʽ�Ĵ���Ŀ��
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