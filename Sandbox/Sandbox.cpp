// Sandbox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include "pch.h"
#include <iostream>
#include "singleton.h"
#include "doubleton.h"
#include "Templated.h"

#include "BaseRegister.h"
#include "ChildRegSingleton.h"

#include "RegisterCentral.h"

//using std::clock();

using namespace std;

int main()
{
    std::cout << "Hello World!\n"; 
	//new Singleton(); // Won't work
	/*
	ChildRegSingleton* childReg = ChildRegSingleton::getInstance();

	childReg->setVal(20);
	

	ChildRegSingleton* child3Reg = ChildRegSingleton::getInstance();

	child3Reg->setVal(50);

	std::cout << childReg->getVal() << std::endl;
*/
	int lookups = 10000000;
	int sum1 = 0;

	int sum2 = 0;
	RegisterCentral* regC = new RegisterCentral();
	std::clock_t c_start = std::clock();
	sum2 = regC->getSumByRefLookup(lookups);
	std::cout <<  sum2 << std::endl;
	std::cout << 1000 *  float(clock() - c_start) / CLOCKS_PER_SEC << std::endl;;

	c_start = std::clock();
	sum1 = regC->getSumByValLookup(lookups);
	std::cout << sum1 << std::endl;
	std::cout << 1000 * float(clock() - c_start) / CLOCKS_PER_SEC << std::endl;;


	//Singleton<int>* s = Singleton<int>::getInstance(); // Ok
	//Singleton<int>* r = Singleton<int>::getInstance();
	//s->counter = 0;
	//std::cout << r->counter << std::endl;
	//s->counter++;
	//r->counter++;
	///* The addresses will be the same. */
	//std::cout << s << std::endl;
	//std::cout << r << std::endl;
	//std::cout << r->counter << std::endl;


	////new Singleton(); // Won't work
	//Singleton<long>* s1 = Singleton<long>::getInstance(); // Ok
	//Singleton<long>* r1 = Singleton<long>::getInstance();
	//s1->counter = 0;
	//std::cout << r1->counter << std::endl;
	//s1->counter++;
	//r1->counter++;
	///* The addresses will be the same. */
	//std::cout << s1 << std::endl;
	//std::cout << r1 << std::endl;
	//std::cout << r1->counter << std::endl;

	//Doubleton* d1 = Doubleton::getInstance(); // Ok
	//Singleton<long>* r1 = Singleton<long>::getInstance();
	//s1->counter = 0;
	//std::cout << r1->counter << std::endl;
	//s1->counter++;
	//r1->counter++;
	///* The addresses will be the same. */
	//std::cout << s1 << std::endl;
	//std::cout << r1 << std::endl;
	//std::cout << r1->counter << std::endl;

	//Templated<int>* temp = new Templated<int>();
	////temp = new Templated<int>();
	//temp->incrementCounter(4);

	//std::cout << temp->getCounter() << std::endl;
/*
	Templated<long>* temp1;
	temp1 = new Templated<long>();
	temp1->counter = 10;*/
	//std::cout << temp1->counter << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
