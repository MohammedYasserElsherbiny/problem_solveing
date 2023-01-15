#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;





int main ()
{
    //FIO

    int n,count=1,temp=1;
    bool f=false;
    cin>>n;
    int start=n/2+1;
    int end=start;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<start;j++)
        {
            cout<<'*';
        }
        for(int j=start;j<=end;j++)
        {
            cout<<"D";
        }
        for(int j=end;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        if(i<n/2+1)
        {
            start--;
            end++;
        }
        else
        {
            start++;
            end--;
        }

    }

}