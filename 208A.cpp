#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO
    string str,newStr;
    cin>>str;

    int i=0;
    while(i<=str.size()-1)
    {

        bool f=false;
        while (!f)
        {
            if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
            {
                
                i+=2;
                if(newStr.size()==0)
                { }
                else
                {
                    if(newStr[newStr.size()-1]!=' ')
                    newStr+=" ";
                }
                i++;
            }
            else
            {
                f=true;
            } 
        }
        

        
        
            newStr+=str[i];
            i++;
        
    }
    for(int i=newStr.size()-1;i>=0;i--)
    {
        if(newStr[i]>='A'&& newStr[i]<='z')
        {
            break;
        }
        else
        {
            newStr[i]='|';
        }
    }

    for(int i=0;i<newStr.size();i++)
    {
        if(newStr[i]=='|')
        {
            break;
        }
        cout<<newStr[i];
    }

}