
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	
	int n, count = 0;
	cin >> n;
	int* vec = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n ; j++)
		{
			int x = vec[i] + vec[j];
			while (x != 1)
			{
				x = x / 2;
				continue;
			}
			count++;
		}
	}
	cout << count;


}

