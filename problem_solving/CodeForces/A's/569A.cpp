#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main()
{
    FIO

	int t, s, q;
	cin>>t>>s>>q;
	int sum = 0;
	while(s < t)
	{
		s *= q;
		sum++;
	}
	cout<<sum;
}