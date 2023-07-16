#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int count[100000 + 5], arr[100000 + 5];
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	count[0] = arr[0];
	for (int i = 1; i < n; i++)
	{
		count[i] = count[i - 1] + arr[i];
	}
	cout << abs(count[n - 1]);

}
