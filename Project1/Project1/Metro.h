#pragma once
#include "Header.h"
#include "Rules.h"
using namespace std;

class Metro : public Rules
{
public:
	int card;
	Metro()
	{
		card = 0;
	}
	Metro(int data_card)
	{
		card = data_card;
	}

	void setInfo(int data_card)
	{

		card = data_card;
	}
	void getInfo()
	{

		cout << "Your information: " << endl;
		cout << "Your card money is: " << card << endl;
	}
	Metro & operator++()
	{
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		this->card = card++;
		return *this;
	}
	Metro & operator--()
	{
		this->card = card--;
		return *this;
	}
	bool operator <=(const Metro & other)
	{
		if (this->card <= other.card)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void rule()
	{
		cout << "1. Firstly, you must buy ticket. \n2. You should to help other people if they need in it. \n3. If you see danger for you or other people< you must call to police." << endl;
	}
};
