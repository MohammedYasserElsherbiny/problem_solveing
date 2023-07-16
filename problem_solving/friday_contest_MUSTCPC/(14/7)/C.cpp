#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO

    int n;
    cin>>n;
    int num=1;

    while(true)
    {
        if(n==0)
        {
            cout<<"YES";
            break;
        }

        if(n<0)
        {
            cout<<"NO";
            break;
        }

        n-=num;
        num++;
    }
    
    
    



}