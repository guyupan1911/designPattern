#include "Factory/simpleFactory.h"
#include "Factory/factoryMethod.h"
#include "Factory/abstractFactory.h"

#include "Strategy/Strategy.h"

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

void test_absFactory()
{
	absFactory* pabsFA = new absFactoryA();
	singleCore* pSA = pabsFA->createSingleCore();
	pSA->show();
	multiCore* pMA = pabsFA->createMultiCore();
	pMA->show();

	absFactory* pabsFB = new absFactoryB();
	singleCore* pSB = pabsFB->createSingleCore();
	pSB->show();
	multiCore* pMB = pabsFB->createMultiCore();
	pMB->show();
}

void test_strategy()
{
	ReplaceAlgorithm* pAlgo = new LRU_ReplaceAlgorithm();
	pAlgo->Replace();

	pAlgo = new FIFO_ReplaceAlgorithm();
	pAlgo->Replace();

	pAlgo = new Random_ReplaceAlgorithm();
	pAlgo->Replace();
}

int main()
{
	test_strategy();
	system("pause");
}