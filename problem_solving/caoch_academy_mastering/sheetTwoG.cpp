#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



int main ()
{
    FIO

    int n;
    cin>>n;
    vector <pair<string , int > > vec(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>vec[i].first;
        if(vec[i].first!="removeMin")
        {
            cin>>vec[i].second;
        }
    }

    vector <int> temp;

    for(int i=0;i<n;i++)
    {
        if(vec[i].first=="insert")
        {
            temp.push_back(vec[i].second);
            cout<<vec[i].first<<' '<<vec[i].second<<'\n';
        }
        else if(vec[i].first=="getMin")
        {
            if(temp[temp.size()-1]==vec[i].second)
            {
                cout<<vec[i].first<<' '<<vec[i].second<<'\n';
            }
            else
            {
                bool f =true;
                auto  j=temp.end();
                j--;
                while (f)
                {
                    cout<<"removeMin\n";

                    temp.erase(j);
                    j--;
                    if(temp.size()==0)
                    {
                        f=0;
                        cout<<"insert "<<vec[i].second<<'\n';
                        cout<<vec[i].first<<' '<<vec[i].second<<'\n';
                    }
                    if(*j==vec[i].second)
                    {
                        f=0;
                        cout<<vec[i].first<<' '<<vec[i].second<<'\n';
                    }
                    


                }
            }
        }
        else
        {
            auto  j=temp.end();
            j--;
            temp.erase(j);
            cout<<vec[i].first<<'\n';
        }
    }

}