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
    for(int i=0;i<n;i++)
    {
        str+="I ";
        if(i%2==0)
        {
            str+="hate ";
        }
        else
        {
            str+="love ";
        }
        if(i==n-1)
        {
            str+="it ";
        }
        else
        {
            str+="that ";
        }
    }
    cout<<str;
}