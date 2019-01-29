#include "pch.h"
#include "ChildRegSingleton.h"

ChildRegSingleton* ChildRegSingleton::instance = 0;

ChildRegSingleton::ChildRegSingleton()
{
}


ChildRegSingleton::~ChildRegSingleton()
{
}

ChildRegSingleton * ChildRegSingleton::getInstance()
{
	if (instance == 0)
	{
		instance = new ChildRegSingleton();
	}

	return instance;
}
