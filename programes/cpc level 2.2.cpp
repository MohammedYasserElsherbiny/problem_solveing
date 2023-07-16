#include <iostream>
using namespace std;
int main()
{
	int arr[100000 + 5], count[100000 + 5];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			count[i] = 1;
		}
		else if (arr[i] < 0)
		{
			count[i] = 2;
		}
		else
			count[i] = 0;

	}
	for (int i = 0; i < n; i++)
	{
		cout << count[i] << " ";
	}
}

