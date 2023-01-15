#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main ()
{
    FIO
    int n;
    cin>>n;
    string str,newStr;
    cin>>str;
    newStr+=str[0];
    for(int i=1;i<n;i++)
    {
        if(n%2==0)
        if(i%2==0)
        {
            string temp;
            char c=str[i];
            temp+=c;
            temp+=newStr;
            newStr=temp;
        }
        else
        {
            newStr+=str[i];

        }
        else
        if(i%2==0)
        {
            newStr+=str[i];
        }
        else
        {
            string temp;
            char c=str[i];
            temp+=c;
            temp+=newStr;
            newStr=temp;

        }
    }
    cout<<newStr;
}



//ROYGBIVG
//ROYGRBIV
//ROYGBIVR
