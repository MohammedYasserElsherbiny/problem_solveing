#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e3 + 5;






int main ()
{
    FIO
    
    char ch='a',hc='A';
    map<char,int>mp;
    vector <int> vec(N+1,1);
    vec[0]=0;
    vec[1]=0;
    for(int i=2;i*i<=N;i++)
    {
        if(vec[i])
        {
            for(ll j=i*2;j<=N;j+=i)
            {
                vec[j]=0;
            }
        }
    }
    // for(int i=1;i<=52;i++)
    // {
    //     if(i<=26)
    //     {
    //         mp[ch++]=i;
    //     }
    //     else
    //     mp[hc++]=i;
    // }
    
    string str;
    int t=1;
    while (t--)
    {
        
        cin>>str;
        ll sum=0;
        for(char c:str)
        {
            if(c>'z')sum+=(c-'a')+1;
            else
            sum+=(c-'A')+27;
        }
        if(vec[sum])
        {
            cout<<"It is a prime word.\n";
        }
        else
        cout<<"It is not a prime word.\n";
        
    }

}