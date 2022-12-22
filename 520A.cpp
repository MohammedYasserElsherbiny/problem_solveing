#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        str[i]=toupper(str[i]);
    }
    
    char mn=*min_element(str.begin(),str.end());
    cout<<mn;
}