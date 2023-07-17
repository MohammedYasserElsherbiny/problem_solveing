#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

    int n;
    
    while(cin>>n)
    {
        if(n==0) return 0;

        deque<int> dq;

        for(int i=1;i<=n;i++)
        {
            dq.push_back(i);
        }

        vector<int> vec;

        for(int i=0;i<n-1;i++)
        {
            int temp;
            temp=dq.front();
            vec.push_back(temp);
            dq.pop_front();
            temp=dq.front();
            dq.pop_front();
            dq.push_back(temp);
        }

        cout<<"Discarded cards: ";

        for(int i=0;i<n-1;i++)
        {
            cout<<vec[i];
            if(i!=n-2)
            {
                cout<<", ";
            }
            else
            {
                cout<<'\n';
            }
        }


        cout<<"Remaining card: "<<dq.front()<<'\n';
    }

}