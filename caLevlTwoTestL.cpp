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
    int n,days=1,sum=0;
    vector <int> vec(7);
    cin>>n;
    for(int i=0;i<7;i++)
    {
        cin>>vec[i];
    }
    sum+=vec[0];
    for(int i=1;i<N;i++)
    {
        if(days==8)
        {
            days=1;
        }
        if(sum>=n)
        {
            cout<<days;
            break;
        }
        sum+=vec[i%7];
        days++;
    }
    
    
    
}