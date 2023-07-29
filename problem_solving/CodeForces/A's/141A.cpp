#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    string temp,str1,str2,str3;
    
    cin>>str1;   
    cin>>str2;
    cin>>str3;
    sort(str3.begin(),str3.end());
    temp=str1+str2;
    sort(temp.begin(),temp.end());

    map<char,int> mp1,mp2;
    
    for(int i=0;i<str3.size();i++)
    {
        mp1[str3[i]]++;
    }

    for(int i=0;i<temp.size();i++)
    {
        mp2[temp[i]]++;
    }

    if(mp1==mp2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}