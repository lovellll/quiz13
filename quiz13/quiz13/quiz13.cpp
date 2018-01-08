// quiz13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

template <class T>
class Pair1
{
	T m_element1;
	T m_element2;
public:
	Pair1(T element1, T element2) :m_element1(element1), m_element2(element2)
	{
	}

	T first() const
	{
		return m_element1;
	}

	T second() const
	{
		return m_element2;
	}
};

template <class T1,class T2>
class Pair
{
	T1 m_element1;
	T2 m_element2;
public:
	Pair(T1 element1, T2 element2) :m_element1(element1), m_element2(element2)
	{
	}

	T1 first() const
	{
		return m_element1;
	}

	T2 second() const
	{
		return m_element2;
	}
};

template <class T2>
class StringValuePair :public Pair<std::string, T2>
{
public:
	StringValuePair(std::string element1, T2 element2) :Pair(element1, element2)
	{
	}
};




int main()
{
	StringValuePair<int> svp("Hello", 5);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';


    return 0;
}

