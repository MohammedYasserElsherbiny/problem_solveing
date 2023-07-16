#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n % 6 == 0) || (n == 1))
	{
		cout << "Sheldon";
	}
	if ((n % 5 == 0) || (n == 5))
	{
		cout << "Leonard";
	}
	if ((n % 4 == 0) || (n == 4))
	{
		cout << "Penny";
	}
	if ((n % 3 == 0) || (n == 3))
	{
		cout << "Rajesh";
	}
	if ((n % 2 == 0) || (n == 2))
	{
		cout << "Howard";
	}




}

