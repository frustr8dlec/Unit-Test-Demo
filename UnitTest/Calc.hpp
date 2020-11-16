#pragma once


template <class T>
class Calc
{
private:

protected:

	T mResult;

public:
	Calc();
	~Calc();

	T result();
	void Add(T numA, T numB);
	void Subtract(T numA, T numB);

};


template<class T>
Calc<T>::Calc()
{
}

template<class T>
Calc<T>::~Calc()
{
}

template<class T>
T Calc<T>::result()
{
	return T(mResult);
}

template<class T>
void Calc<T>::Add(T numA, T numB)
{
	this->mResult = numA + numB;
}

template<class T>
void Calc<T>::Subtract(T numA, T numB)
{
	this->mResult = numA - numB;

}
