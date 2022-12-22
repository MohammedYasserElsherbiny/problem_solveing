#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



void bubble (vector<pair<char,int>>&vec)
{
    int n=vec.size();
    for(int i=0 ; i<n ; i++ )
    {
        for( int j=0 ; j<n-1 ; j++ )
        {
            if(vec[j].second>vec[j+1].second)
            swap(vec[j],vec[j+1]);
        }
    }
}


int main ()
{

    FIO
    string str;
    int a,b,c;
    a=b=c=1;
    for(int i=0;i<3;i++)
    {
        cin>>str;

        if(str[1]=='>')
        {
            if(str[0]=='A')
            {
                if(str[2]=='B')
                {
                    a+=1;
                }
                else
                {
                    a+=1;
                }
            }
            else if(str[0]=='B')
            {
                if(str[2]=='A')
                {
                    b+=1;
                }
                else
                {
                    b+=1;
                }
            }
            else
            {
                if(str[2]=='A')
                {
                    c+=1;
                }
                else
                {
                    c+=1;
                }
            }
        }
        else
        {
            if(str[0]=='A')
            {
                if(str[2]=='B')
                {
                    b+=1;
                }
                else
                {
                    c+=1;
                }
            }
            else if(str[0]=='B')
            {
                if(str[2]=='A')
                {
                    a+=1;
                }
                else
                {
                    c+=1;
                }
            }
            else
            {
                if(str[2]=='A')
                {
                    a+=1;
                }
                else
                {
                    b+=1;
                }
            }
        }
    }
   vector<pair<char,int>> vec(3);
   vec[0].first='A';vec[0].second=a;
   vec[1].first='B';vec[1].second=b;
   vec[2].first='C';vec[2].second=c;

    if(a==b||a==c||c==b)
    {
        cout<<"Impossible";
        return 0;
    }


    bubble(vec);

    for(int i=0;i<3;i++)
    {
        cout<<vec[i].first;
    }

   

}