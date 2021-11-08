#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H

#include "singleCore.h"

// �򵥹���ģʽ:
// �ŵ㣺ʵ�������εķָ�ṩ��ר�ŵĹ��������ڴ�������
// ȱ�㣺����ϵͳ����ĸ�������չ���ѣ�Υ������ԭ��, �����µĲ�Ʒ��Ҫ�޸ļ򵥹�����

enum CTYPE{COREA, COREB};

// �򵥹����ࣺ���ڴ����������ʵ���˶����εķָ�
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