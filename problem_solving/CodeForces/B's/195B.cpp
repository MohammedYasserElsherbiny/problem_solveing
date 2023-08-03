#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n,m;

    cin>>n>>m;

    vector<int> ans(m);
    int k;
    if(m%2==0) k=m/2;
    else k=(m+1)/2;
    for(int i=0;i<m;i++)
    {
        if(i%2==1)ans[i]=k+(1+i)/2;
        
        else ans[i]=k-i/2;

        if(i>1 && m % 2 == 1 && i % 2 == 0) 
            swap(ans[i],ans[i-1]);
    }

    int i=0,j=0;

    while(i<n)
    {
        cout<<ans[j%m]<<'\n';
        j++;
        i++;
    }
    
}