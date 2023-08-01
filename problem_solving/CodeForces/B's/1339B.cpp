#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n),ans(n);

        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());
        //ans[0]=vec[0];

        // for(int i=1;i<n;i++)
        // {
        //     ans[i]=*lower_bound(vec.begin(),vec.end(),vec[i]);
        // }

        int i,k;
		for(k=(n-1)/2,i=0;i<n;i++)
		{
			if(i&1)cout<<vec[k+(i+1)/2]<<' ';
			else cout<<vec[k-i/2]<<' ';
		}
		cout<<'\n';

        
    }
}

// 5 -2 4 8 6 5