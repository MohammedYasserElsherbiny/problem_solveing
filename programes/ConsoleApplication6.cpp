#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int arr[100], count[100] ;
	int n;
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
	cout << count[1];
}