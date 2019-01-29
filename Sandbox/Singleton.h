#pragma once
template <class T>
class Singleton
{
protected:
	/* Here will be the instance stored. */
	static Singleton<T>* instance;

	/* Private constructor to prevent instancing. */
	Singleton();

public:
	/* Static access method. */
	static Singleton<T>* getInstance();
	T counter;
};


template <class T>
Singleton<T>* Singleton<T>::instance = 0;

template <class T>
Singleton<T>* Singleton<T>::getInstance()
{
	if (instance == 0)
	{
		instance = new Singleton<T>();
	}

	return instance;
}

template <class T>
Singleton<T>::Singleton()
{}