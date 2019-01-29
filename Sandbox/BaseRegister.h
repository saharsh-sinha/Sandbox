#pragma once
template <class T>
class BaseRegister
{
private:
	T _register;

protected:
	BaseRegister();
	~BaseRegister();
public:
	void reset();
	T getVal();
	void setVal(T val);
};
template <class T>
BaseRegister<T>::BaseRegister()
{
}


template <class T>
BaseRegister<T>::~BaseRegister()
{
}


template <class T>
void BaseRegister<T>::reset() 
{
	_register = nullptr;
}

template <class T>
T BaseRegister<T>::getVal() 
{
	return _register;
}

template <class T>
void BaseRegister<T>::setVal(T val) 
{
	_register = val;
}