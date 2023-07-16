#include <iostream>
using namespace std;
int main()
{
	int t, n, min, count;
	int x[1001], arr[1001];
	cin >> t;
	for(int j=0;j<t;j++)
	{
		count = 0;
		cin >> n;
		cin >> min;
		x[0] = min;
		count += x[0];
		for (int i = 1; i < n; i++)
		{
			cin >> x[i];
			if (min > x[i])
				min = x[i];	
			count += x[i];	
		}
		arr[j] = count - min * n;
		cout << arr[i] << endl;
	}
	return 0;
}
