#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin >> n;
	x = n;
	for (int i = 0; i < x; i++)
	{
		if ((n > 0) && (n < 6))
		{
			if ((n == 1))
			{
				cout << "Sheldon";
				break;
			}
			if ((n == 2))
			{
				cout << "Leonard";
				break;
			}
			if ((n == 3))
			{
				cout << "Penny";
				break;
			}
			if ((n == 4))
			{
				cout << "Rajesh";
				break;
			}
			if ((n == 5))
			{
				cout << "Howard";
				break;
			}
		}
		else
		{
			n -= 5;
		}
	}



}
