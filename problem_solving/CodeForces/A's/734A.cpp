#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main()
{
    FIO
    int n,suma=0,sumd=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if(ch=='A')
        {
            suma++;
        }
        else
        sumd++;
    }
    if(suma>sumd) cout<<"Anton";
    else if (sumd>suma) cout<<"Danik";
    else cout<<"Friendship";


}