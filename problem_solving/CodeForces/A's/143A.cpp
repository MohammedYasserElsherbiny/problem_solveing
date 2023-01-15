#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int r1,r2,c1,c2,d1,d2;

bool solve (int i,int j,int k,int l)
{
    return(i+j==r1&&i+k==c1&&i+l==d1&&j+k==d2&&j+l==c2&&k+l==r2);
}



int main ()
{
    FIO
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    vector<int>main1,main2,main3,main4;
       
    for(int k=0;k<3;k++)
    {
        set<int> st;
        vector<int> temp;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                if(k==0&&i+j==r1) 
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==1&&i+j==c1)
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==2&&i+j==d1)
                {
                    st.insert(i);
                    st.insert(j);
                }
            }
        }

        auto it=st.begin();

        for(int l=0;l<st.size();l++)
        {
            temp.push_back(*it);
            it++;
        }
        if(k==0)
        main1=temp;
        if(temp.size()<main1.size())
        {
            main1=temp;
        }
    }
    for(int k=0;k<3;k++)
    {
        set<int> st;
        vector<int> temp;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                if(k==0&&i+j==r1) 
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==1&&i+j==c2)
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==2&&i+j==d2)
                {
                    st.insert(i);
                    st.insert(j);
                }
            }
        }

        auto it=st.begin();

        for(int l=0;l<st.size();l++)
        {
            temp.push_back(*it);
            it++;
        }
        if(k==0)
        main2=temp;
        if(temp.size()<main2.size())
        {
            main2=temp;
        }
    }
    for(int k=0;k<3;k++)
    {
        set<int> st;
        vector<int> temp;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                if(k==0&&i+j==r2) 
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==1&&i+j==c1)
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==2&&i+j==d2)
                {
                    st.insert(i);
                    st.insert(j);
                }
            }
        }

        auto it=st.begin();

        for(int l=0;l<st.size();l++)
        {
            temp.push_back(*it);
            it++;
        }
        if(k==0)
        main3=temp;
        if(temp.size()<main3.size())
        {
            main3=temp;
        }
    }
    for(int k=0;k<3;k++)
    {
        set<int> st;
        vector<int> temp;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                if(k==0&&i+j==r2) 
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==1&&i+j==c2)
                {
                    st.insert(i);
                    st.insert(j);
                }
                else if(k==2&&i+j==d1)
                {
                    st.insert(i);
                    st.insert(j);
                }
            }
        }

        auto it=st.begin();

        for(int l=0;l<st.size();l++)
        {
            temp.push_back(*it);
            it++;
        }
        if(k==0)
        main4=temp;
        if(temp.size()<main4.size())
        {
            main4=temp;
        }
    }
    bool f=false;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(i==j)continue;
            for(int k=1;k<10;k++)
            {
                if(i==k||j==k)continue;
                for(int l=1;l<10;l++)
                {
                    if(i==l||j==l||k==l)continue;
                    if(solve(i,j,k,l))
                    {
                        cout<<i<<" "<<j<<'\n'<<k<<' '<<l;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<-1;
}