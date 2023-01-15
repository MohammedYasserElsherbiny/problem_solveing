#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    int n;
    cin>>n;
    string str="ROYGBIV",real;
    
    map<int,char>mp;
    for(int i=7;i<n;i++)
    {
        if(str.size()==n)
            {
                break;
            }
        string temp;
        int l=str.size();
        int pos=l-1;
        for(int j=0;j<4;j++)
        {
            temp+=str[pos-3+j];
        }
        for(int k=0;k<4;k++)
        {
            str+=temp[k];
            if(str.size()==n)
            {
                break;
            }
        }
        
    
    }
    cout<<str;
}



//ROYGBIVG
//ROYGRBIV
//ROYGBIVR
