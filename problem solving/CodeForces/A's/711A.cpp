#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    vector<string>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    bool f=false;
    for(int i=0;i<n;i++)
    {
        string temp;
        temp=vec[i];
        for(int j=0;j<3;j++)
        {
            if(temp[0]==temp[1]&&temp[0]=='O')
            {
                temp[0]='+';
                temp[1]='+';
                f=true;
                vec[i]=temp;
                break;
            }
            else if(temp[3]==temp[4]&&temp[3]=='O')
            {
                temp[4]='+';
                temp[3]='+';
                f=true;
                vec[i]=temp;
                break;
            }
        }
        if(f)
        {
            cout<<"YES\n";
            for(int k=0;k<n;k++)
            {
                cout<<vec[k]<<'\n';
            }
            return 0;
        }
    }
    cout<<"NO";

}