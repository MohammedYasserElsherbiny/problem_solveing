#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;

int rows[8];

vector <int>cur;
vector <vector<int>>ans;

bool ok(int row,int col)
{
    for(int i=0;i<(int)cur.size();i++)
    {
        if(cur[i]==row)
        return 0;
        if(abs(col-i)==abs(row-cur[i]))
        return 0;
    }
    return 1;
}

void solve (int col)
{
    
    if(col==8)
    {
        ans.push_back(cur);
        return;
    }
    for(int row=0;row<8;row++)
    {
        if(ok(row, col))
        {
            cur.push_back(row);
            solve (col+1);
            cur.pop_back();
        }
    }
}



int main ()
{
    
    int tc=1;
    while (cin>>rows[0])
    {
            for(int i=1;i<8;i++)
            {
                cin>>rows[i];
            }
            for(int i=0;i<8;i++)
            {
                rows[i]--;
            }
        
        solve (0);
        int re=8;
        for(auto vec:ans)
        {
            int diff=0;
            for(int i=0;i<(int)vec.size();i++)
            {
                diff+=(rows[i]!=vec[i]);
            }
            re= min(re,diff);
        }
        cout<<"Case "<<tc++<<": "<<re<<'\n';
    }

}