#pragma once
#include "Singleton.h"
class Doubleton :
	public Singleton<int>
{
public:
	Doubleton();
	~Doubleton();
};

