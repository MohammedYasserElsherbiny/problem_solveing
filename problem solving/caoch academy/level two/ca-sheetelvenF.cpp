#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0),cin.tie(0);
#define ll long long



void bubble (vector <int>& vec)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(vec[j]>vec[j+1])
            swap(vec[j],vec[j+1]);
        }
    }
    swap(vec[0],vec[n-1]);
}

int main ()
{
    FIO

    
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    bubble(vec);
    for(int z:vec)
    {
        cout<<z<<' ';
    }
    
    
    
    







}