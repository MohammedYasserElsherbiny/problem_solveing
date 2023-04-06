#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;



/*
                priotity queue
            
        #include <queue>
        .size .empty .push .top .pop
        trick: pq.push(-x) , -pq.top
        ## no []

---------------------------------------------
                
                deque

        #include <queue>
        .size .empty .push_back .push_front
        .pop_back .pop_front .back .front 
        ## there []
----------------------------------------------

                set                 

            #include <set>
            .size .empty .inseret 
            .erase .count 

            how to find: st.count(element)!=0
            how to iterate over :
            for(auto val : st){ }
            ## no []

                unordered_set

            #include <unordered_set>
            ## no []

                multiset

            #include <multiset>
            ## no []

                unordered_multiset

            #include <unordered_multiset>
            ## no []
-----------------------------------------------

                map

            .size .empty .erase(key)
            .count
            how to find: mp.count(key) !=0
            for(auto mypair : mp)
            #include <map>

                unordered_map

            #include <unordered_map>

                multimap

            #include <multimap>

                unordered_multimap
                
            #inlcude <unodered_multimap>
----------------------------------------------

solve : https://codeforces.com/problemset/problem/339/A
        https://codeforces.com/problemset/problem/4/C
        
*/

int main ()
{
    FIO

    int t;
    cin>>t;
    map<string ,int> mp;

    while (t--)
    {
        string temp;
        cin>>temp;

        if(mp[temp])
        {
            cout<<temp<<mp[temp]<<'\n';
        }
        else
        {
            cout<<"OK\n";
        }

        
        mp[temp]++;
    }


}
