#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
    
    int p,r;
    cin>>p>>r;
    for(int i=1;i<10000000;i++)
    {
        if(p*i%10==0||p*i%10==r)
        {
            cout<<i;
            break;
        } 
    }


}