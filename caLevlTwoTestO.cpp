#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;







int main ()
{
    FIO
    
    int y,m;
    cin>>y>>m;
    int n=max(y,m);
    if(n==1)
    {
        cout<<"1/1";
    }
    else if (n==2)
    {
        cout<<"5/6";
    }
    else if (n==3)
    {
        cout<<"2/3";
    }
    else if (n==4)
    {
        cout<<"1/2";
    }
    else if (n==5)
    {
        cout<<"1/3";
    }
    else if (n==6)
    {
        cout<<"1/6";
    }
    
    
    
}