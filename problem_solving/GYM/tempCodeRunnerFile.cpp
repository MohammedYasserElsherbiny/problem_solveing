#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int fact (int n)
{

    if(n==0) return 1;

    return fact(n-1)*n;
}



int main()
{
    
    FIO

    freopen("popcorn.in" , "r" , stdin);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;

        cin>>n>>m;

        cout<<fact(n)/(fact(m)*fact(n-m))<<'\n';
    }
   
   
}