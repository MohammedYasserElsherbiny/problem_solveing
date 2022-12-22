#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    string temp,str1,str2,str3;
    
    cin>>str1;
    //sort(str1.size(),str1.end());
    cin>>str2;
    //sort(str2.size(),str2.end());
    cin>>str3;
    sort(str3.begin(),str3.end());

    temp=str1+str2;
    sort(temp.begin(),temp.end());
    if(temp==str3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}