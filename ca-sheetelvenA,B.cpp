#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0),cin.tie(0);
#define ll long long


int main ()
{
    FIO

    int n;
    cin>>n;
    vector <int> freq(n,0);
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        freq[l]++;
    }
    
    for(int i=0;i<100;i++)
    {
        while (freq[i]--)
        {
            cout<<i<<' ';
        }
    }
    
    

}