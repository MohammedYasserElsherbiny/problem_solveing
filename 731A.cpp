#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
    
    string temp="abcdefghijklmnopqrstuvwxyz";
    string str;
    
    int sum=0,point=0;
    cin>>str;
    for(int i=0;i<(int)str.size();i++)
    {
        
        int idx,wlk;
        idx=str[i]-97;
        wlk=abs(idx-point);
        if(wlk<13)
        {
            sum+=wlk;
        }
        else
        {
            sum+= 26-wlk;
        }
        point=idx;

        
        
        
    }

    cout<<sum;
}