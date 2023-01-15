#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    int cnt=0;
    for(int i=5;i>=1;i--)
    {
        while (true)
        {
            if(n-i>=0)
            {
                n-=i;
                cnt++;  
            }
            else break;
        }
        
    }
    cout<<cnt;
}