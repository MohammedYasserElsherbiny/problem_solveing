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
        int n,x=0;
        cin>>n;

        //multimap<int,int> mp;

        map <int , multiset<int, greater<int>>> mp;
        set <int> st;

        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            st.insert(a);
            mp[a].insert(b);        
        }

        //map<string,int>::iterator it 
        //multiset<int, greater<int>> :: iterator it

        map <int , multiset<int, greater<int>> :: iterator > it;

        for(auto& p : mp)
        {
            it[p.first] = p.second.begin();
        }
       auto aIt=st.begin();

       ll sum=0,mn=*aIt;
       map <int,int> freq;
       while (aIt!=st.end())
       {
            // set feha kol el a's w blf 3leha
            
            

            if(!mp.empty())
            {

                for(int i=0;i<mp[*aIt].size();i++)
                {
                    sum+=*it[*aIt];
                    it[*aIt]++;
                    x++;
                    if(mn<=x||it[*aIt]==mp[*aIt].end()) 
                    break;
                }

                freq[*aIt]=x;
                //sum+=*it[*aIt];
            }

            bool erased=0;

            
            if(mn<=x)
            {

                mp.erase(mn);
                x-=freq[mn];
                erased=1;
            }
            auto f= mp.find(*aIt);
            auto temp=aIt;
            temp++;
            
            if( f == mp.end()||it[*aIt]==mp[*aIt].end())
            {
                //if( )
                aIt++;
                //if(freq[*aIt]>0) 
                //aIt--;
                    
            }
            if(erased) 
                mn=*aIt;
       }

    cout <<sum<<'\n';

    }
}