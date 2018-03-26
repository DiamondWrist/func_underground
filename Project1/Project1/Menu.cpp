#include "Header.h"
#include "Money.h"
#include "Metro.h"
#include "Counter.h"
#include "Rules.h"
using namespace std;






int main()
{
	Metro a;
	Metro zaz(0);
	Counter b;
	Money c;
	Money lol(160);
	Money kek(0);
	Counter aza(0);
	bool result = c <= kek;
	int n = 1;
	


	while (n != 0)
	{

		cout << "Your MENU: " << endl;
		cout << "1. View your information." << endl;
		cout << "2. Buy a counter." << endl;
		cout << "3. Fill your travel card." << endl;
		cout << "4. Go travel by counter." << endl;
		cout << "5. Go travel by your travel card." << endl;
		cout << "6. Go to work." << endl;
		cout << "7. Exit from underground." << endl;
		cout << "8. Read the rules!" << endl;
		cin >> n;

		switch (n)
		{
		case 1:
		{
			a.getInfo();
			b.getCounter();
			c.getMoney();
			cout << endl;
			break;
		}
		case 2:
		{
			if (c <= kek)
			{
				cout << "You have not enough money to buy counter, go to work and earn money!" << endl;
				cout << endl;
			}
			else
			{
				++b;
				--c;
				cout << "You have bought 1 counter!" << endl;
				cout << endl;
			}
			break;
		}
		case 3:
		{
			if (c <= kek)
			{
				cout << "You have not enough money to fulfill you travel card, go to work and earn money!" << endl;
				cout << endl;
			}
			else
			{
				++a;
				--c;
				--c;
				--c;
				--c;
				--c;
				--c;
				--c;
				--c;
				cout << "You have filled your travel crad to 10 travels!" << endl;
				cout << endl;
			}
			break;
		}
		case 4:
		{
			if (b <= aza)
			{
				cout << "You dont have any counter, buy some!" << endl;
				cout << endl;
			}
			else
			{
				--b;
				cout << "You have been traveled by counter!" << endl;
				cout << endl;
			}
			break;
		}
		case 5:
		{
			if (a <= zaz)
			{
				cout << "Your travel card is empty, fulfill it!" << endl;
				cout << endl;
			}
			else
			{
				--a;
				cout << "You have been traveled by travel card!" << endl;
				cout << endl;
			}
			break;
		}
		case 6:
		{
			++c;
			cout << "You have been earn a few money!" << endl;
			cout << endl;
			break;
		}
		case 7:
		{
			cout << "Come back later!" << endl;
			cout << endl;
			system("pause");
			return 0;
		}
		case 8:
		{
			a.rule();
			break;
		}
		default:
			cout << "Enter correctly!" << endl;
			cout << endl;
			break;
		}

	}

	system("pause");
	return 0;
}