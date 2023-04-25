#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    string row1, row2, row3;

    row1="qwertyuiopasdfghjkl;zxcvbnm,./";
    

    map <char,char> mpr,mpl;

    for(int i=0;i<60;i++)
    {
        if(i<30)
        {
            mpr[row1[i+1]]=row1[i];
        }
        else
        {
            mpl[row1[i-1-30]]=row1[i-30];
        }
    }

    char choice;
    string str;
    cin>>choice>>str;
    for(int i=0;i<str.size();i++)
    {
        if(choice=='R')
        {
            cout<<mpr[str[i]];
        }
        else
        {
            cout<<mpl[str[i]];
        }
    }
}