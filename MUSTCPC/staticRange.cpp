#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int pref[6] ={0};
    int suf [6] ={0};
    int freq [10] = {0};
    
    int input[6] = { 1 , 2 , 5 , 9 , 3 , 2};

    pref[0]=input[0];

    for(int i=1;i<6;i++)
    {
        pref[i]=input[i]+pref[i-1];
    }

    suf[6]=input[6];

    for(int i=5;i>=0;i--)
    {
        suf[i]=input[i]+suf[i+1];
    }

    

}