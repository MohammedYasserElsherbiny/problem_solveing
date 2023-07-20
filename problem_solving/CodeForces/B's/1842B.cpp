#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int t;
    cin>>t;

    while (t--)
    {
        int n,x;
        cin>>n>>x;


        vector<int> vec1(n),vec2(n),vec3(n);
        stack <int> st1,st2,st3;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec1[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            st1.push(vec1[i]);
        }

        for(int i=0;i<n;i++)
        {
            cin>>vec2[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            st2.push(vec2[i]);
        }

        for(int i=0;i<n;i++)
        {
            cin>>vec3[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            st3.push(vec3[i]);
        }
        
        if(x==0)
        {
            cout<<"YES\n";
            continue;
        }

        bool f=0;
        int sum=0;
        for(int i=0;i<3*n;i++)
        {

            if(sum==x)
            {
                f=1;
                break;
            }


            if(i==0)
            {
                if(st1.top()<=x)
                {
                    sum=st1.top();
                    st1.pop();
                    continue;
                }
                else if(st2.top()<=x)
                {
                    sum=st2.top();
                    st2.pop();
                    continue;
                }
                else if(st3.top()<=x)
                {
                    sum=st3.top();
                    st3.pop();
                    continue;
                }
                else
                {
                    break;
                }
            }


            if(!st1.empty())
            if(sum|st1.top()<=x)
            {
                sum|=st1.top();
                st1.pop();
            }
            if(!st2.empty())
            if(sum|st2.top()<=x)
            {
                sum|=st2.top();
                st2.pop();
            }
            if(!st3.empty())
            if(sum|st3.top()<=x)
            {
                sum|=st3.top();
                st3.pop();
            }




        }


        if(f) cout<<"YES\n";
        else cout<<"NO\n";


    }
    
}