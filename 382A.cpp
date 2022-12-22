#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    string str1,str2,str3,mainstr;
    cin>>mainstr;
    bool f=false;
    for(int i=0;i<mainstr.size();i++)
    {
        if(mainstr[i]=='|')
        {
            f=true;
            continue;
        }
        if(f)
        {
            str2+=mainstr[i];
        }
        else
        {
            str1+=mainstr[i];
        }
    }
    cin>>str3;
    int sz1=str1.size(),sz2=str2.size(),sz3=str3.size();
    // if(sz1==sz2)
    // {
    //     cout<<"Impossible";
    // }
    
    {
        if((sz1+sz2+sz3)%2==0)
        {
            int finalsz=(sz1+sz2+sz3)/2;
            if(sz1 != finalsz)
            {
                for(int i=0;i<sz3;i++)
                {
                    if(sz1==finalsz)
                    {
                        break;
                    }
                    str1+=str3[i];
                    sz1++;
                    str3[i]='0';
                }
            }
            if(sz2 !=finalsz)
            {
                for(int i=0;i<sz3;i++)
                {
                    if(str3[i]=='0')
                    {
                        continue;
                    }
                    if(sz2==finalsz)
                    {
                        break;
                    }
                    str2+=str3[i];
                    sz2++;
                }
            }
            if(sz1==finalsz&&finalsz==sz2)
            cout<<str1<<'|'<<str2;
            else
            cout<<"Impossible";
        }
        else
        {
            cout<<"Impossible";
        }
    }


}
        // if(str1.size()>str2.size())
        // {
        //     if(str3.size()+str2.size()==str1.size())
        //     {
        //         for(int i=0;i<str3.size();i++)
        //         {
        //             str2+=str3[i];
        //         }
        //         cout<<str1<<'|'<<str2;
        //     }
        //     else
        //     {
        //         cout<<"Impossible";
        //     }
        // }
        // else
        // {
        //     if(str3.size()+str1.size()==str2.size())
        //     {
        //         for(int i=0;i<str3.size();i++)
        //         {
        //             str1+=str3[i];
        //         }
        //         cout<<str1<<'|'<<str2;
        //     }
        //     else
        //     {
        //         cout<<"Impossible";
        //     }
        // }