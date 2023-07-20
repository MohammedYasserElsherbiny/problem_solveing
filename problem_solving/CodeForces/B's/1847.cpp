#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);

        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }

        if(n==1) {
            cout<<"1\n";
            continue;
        }

        int sum=vec[0],cnt=0;
        
        for(int i=0;i<n;i++)
        {

            sum&=vec[i];

            if(sum==0)
            {
                cnt++;
                if(i+1<n) sum=vec[i+1];
                else sum=0;
            }
            
        }
        if(cnt==0) cnt++;

        cout<<cnt<<'\n';

    }
}