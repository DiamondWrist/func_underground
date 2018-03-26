#pragma once
#include "Header.h"
using namespace std;
class Counter
{
public:
	int counter;
	Counter()
	{
		counter = 0;
		cout << this << endl;
	}
	Counter(int data_counter)
	{
		counter = data_counter;
		cout << this << endl;
	}
	void setCounter(int data_counter)
	{
		counter = data_counter;
	}
	void getCounter()
	{
		cout << "Your amount of counter is: " << counter << endl;
	}
	Counter & operator++()
	{
		this->counter = counter++;
		return *this;
	}
	Counter & operator--()
	{
		this->counter = counter--;
		return *this;
	}

	bool operator <=(const Counter & other)
	{
		if (this->counter <= other.counter)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};