#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

vector <int> div(int& x)
{
 vector <int> divs;
    for(int i=1;i*i<=x;i++)
    {
        if(divs.size()>=4)
        {
            x++;
            divs=div(x);
            break;
        }
        if(x%i==0)
        {
            divs.push_back(i);
            if(i!=x/i)
            divs.push_back(x/i);
        }
    }
    return divs;
}

int main ()
{
    FIO;
    int t;
    cin>>t;
    while (t--)
    {
        int d;
        cin>>d;
        vector <int> vec;
        int temp=6;
        vec=div(temp);
        bool f=false;
        while(!f)
        {
            int count=0;sort(vec.begin(),vec.end());
            temp++;
            if(vec.size()!=4)
            {
                vec=div(temp);
                continue;
            }
            for(int i=0;i<(int)vec.size()-1;i++)
            {
                if(abs(vec[i+1]-vec[i])<d)
                {
                    vec=div(temp);
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count==3)
            f=true;
        }
        cout <<temp-1<<'\n';
    }
}