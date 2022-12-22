#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 600;
const ll mod = 1e9+7;







int main ()
{
    FIO
    
    string str1,str2;
    int t=2;
    while (cin>>str1)
    {
        
        cin>>str2;
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());

    
        vector <int> vec(N,0);
        for(int i=0;i<str1.size();i++)
        {
            for(int j=0;j<str2.size();j++)
            {
                vec[i+j]+=(str1[i]-'0')*(str2[j]-'0');
            }
        }
        for(int i=0;i<N-1;i++)
        {
            vec[i+1]+=vec[i]/10;
            vec[i]%=10;
        }
        int temp=N-1;
        while (temp>0&&vec[temp]==0) temp--;
        for(;temp>=0;temp--) cout<<vec[temp];
        cout<<'\n';
    }

   
    
}