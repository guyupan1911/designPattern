#include "simpleFactory.h"
#include "factoryMethod.h"

void test_simpleFactory()
{
	simpleFactory factory;
	singleCore* pA = factory.creatSingleCore(COREA);
	pA->show();
	singleCore* pB = factory.creatSingleCore(COREB);
	pB->show();
}

void test_factoryMethod()
{
	abstractFactory* pFactory = new FactoryA();
	singleCore* pA = pFactory->createSingleCore();
	pA->show();

	pFactory = new FactoryB();
	singleCore* pB = pFactory->createSingleCore();
	pB->show();
}

int main()
{
	test_simpleFactory();

	system("pause");
}