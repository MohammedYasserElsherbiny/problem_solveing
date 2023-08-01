#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main(){
    FIO
   
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        map <char,int> mp;
        int cnt=0;
        stack<char> s;
        cin>>str;
        if(str.size()%2==1)
        {
            cout<<"-1\n";
            continue;
        }
        //    ))(())((
        //                      ))))
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
            if(s.empty())
            {
                s.push(str[i]);
                continue;
            }
            if(str[i]==')'&&s.top() =='(')
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
            //s.pop();
        }

        if(mp[')']!=mp['(']) cout<<"-1\n";
        else
            cout<<s.size()/2<<'\n';
    }
   
}