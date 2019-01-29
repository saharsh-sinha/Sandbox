#pragma once
#include "BaseRegister.h"
class ChildRegSingleton :
	public BaseRegister<int>
{
private:
	/* Here will be the instance stored. */
	static ChildRegSingleton* instance;

	/* Private constructor to prevent instancing. */
	ChildRegSingleton();
	~ChildRegSingleton();
public:

	static ChildRegSingleton* getInstance();

};

