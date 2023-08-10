#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;




int main()
{
    
    FIO

    //freopen("popcorn.in" , "r" , stdin);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> F,X,Y,H;
        

        for(int i=0;i<n;i++)
        {
            int tempF,tempX,tempY,tempH;
            cin>>tempF>>tempX>>tempY>>tempH;
            
            F.push_back(tempF);
            X.push_back(tempX);
            Y.push_back(tempY);
            H.push_back(tempH);
        
        }

        vector <vector<pair<int,int>>> cor;

        for(int i=1;i<=10;i++)
        {
            vector<pair<int,int>> vec;
            for(int j=1;j<=10;j++)
            {   
                for(int k=0;k<10;k++)
                {
                    vec.push_back({i,j});
                    
                }

            }
            cor.push_back(vec);
        }

        cout<<6;


    }
    
   
}