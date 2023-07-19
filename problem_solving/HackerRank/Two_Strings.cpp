#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()

{
    FIO

    int n;
    cin>>n;
    while (n--)
    {
        string str1,str2;
        vector<char> vec1,vec2;

        map<char,int> mp1,mp2;

        cin>>str1>>str2;
        for(int i=0;i<str1.size();i++)
        {
            mp1[str1[i]]++;
        }

        for(int i=0;i<str2.size();i++)
        {
            mp2[str2[i]]++;
        }

        int mxSz=max(str1.size(),str2.size());
        
        bool f=0;

        //str

        for(int i=0;i<mxSz;i++)
        {
            if(mxSz==str1.size())
            {
                if(mp2[str1[i]]>0) 
                {
                    f=1;
                    break;
                }
            }
            else
            {
                if(mp1[str2[i]]>0) 
                {
                    f=1;
                    break;
                }

            }
        }

        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    
}