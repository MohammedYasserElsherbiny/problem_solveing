#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO


    int n;
    cin>>n;
    vector<int> vec(n),temp(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        temp[i]=vec[i];
    }
    auto l=vec.begin(),r=vec.begin();
    //l++;
    r++;
    int numl=1,numr=1;
    sort(temp.begin(),temp.end());
    bool f=false,f2=false;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]<vec[i+1])
        {
            if(numr>1&&numl!=numr)
            {
                reverse(l,r);
                f=1;
                break;
            }
            else
            {
                l++;
                r++;
                numl++;
                numr++;
            }
        }
        else
        {
            r++;
            numr++;
        }

    }
    if(!f)
    {
        //r++;
        //numr++;
        reverse(l,r);
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]!=temp[i])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes\n"<<numl<<' '<<numr;
    

}