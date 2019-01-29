#pragma once

template <class R>
class Templated
{
private:
	R _counter;
public:
	Templated<R>();
	//Templated(R init);
	~Templated();
	void incrementCounter(R num);
	R getCounter();
};


template <class R>
Templated<R>::Templated()
{
	_counter = 0;
}

//template<class R>
//Templated<R>::Templated<R>(R init)
//{
//	_counter = init;
//}

template <class R>
Templated<R>::~Templated()
{
	_counter = 0;
}

template<class R>
void Templated<R>::incrementCounter(R num)
{
	_counter += num;
}

template<class R>
R Templated<R>::getCounter()
{
	return _counter;
}

//#include "Templated._cpp"

