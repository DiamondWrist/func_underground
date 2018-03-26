#pragma once
#include "Header.h"
#include "Metro.h"

using namespace std;

class Money
{
public:
	int money;
	int mmm;
	Money()
	{
		money = 160;
		cout << this << endl;
	}
	Money(int data_money)
	{
		money = data_money;
		cout << this << endl;
	}
	void setMoney(int data_money)
	{
		money = data_money;
	}
	void getMoney()
	{
		cout << "Your amount of money is: " << money << endl;
	}

	Money & operator++ ()
	{
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;
		this->money = money++;

		return *this;
	}
	Money & operator--()
	{
		this->money = money--;
		this->money = money--;
		this->money = money--;
		this->money = money--;
		this->money = money--;
		return *this;
	}
	bool operator <=(const Money & other)
	{
		if (this->money <= other.money)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};