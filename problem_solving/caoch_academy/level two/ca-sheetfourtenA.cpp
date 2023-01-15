#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

int main ()
{
    FIO;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        
        vector <int> noThrees;
        noThrees.push_back(3);
        for(int i=0;i<3000;i++)
        {
            int temp=i+1;
            if(temp%10==3||temp%3==0)
            {
                continue;
            }
            noThrees.push_back(temp);
        }
        cout<<noThrees[n]<<'\n';
    }
}