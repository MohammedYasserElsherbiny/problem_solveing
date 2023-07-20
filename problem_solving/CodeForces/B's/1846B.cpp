#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


int main ()
{
    FIO

   int t;
   cin>>t;
   while(t--)
   {
        char strs[3][3];
        

        vector<int> cnt1(8),cnt2(8),cnt3(8);

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>strs[i][j];
            }
        }

        for(int i=0;i<3;i++)
        {
           
            if(strs[i][i]=='X') cnt1[0]++;
            else if(strs[i][i]=='O') cnt2[0]++;
            else if(strs[i][i]=='+') cnt3[0]++;
            
        }

        for(int i=0;i<3;i++)
        {
            
            if(strs[i][2-i]=='X') cnt1[1]++;
            else if(strs[i][2-i]=='O') cnt2[1]++;
            else if(strs[i][2-i]=='+') cnt3[1]++;
            
        }

        for(int i=0;i<3;i++)
        {
            if(strs[i][0]=='X') cnt1[2]++;
            else if(strs[i][0]=='O') cnt2[2]++;
            else if(strs[i][0]=='+') cnt3[2]++;
        }
        
        for(int i=0;i<3;i++)
        {
            if(strs[i][1]=='X') cnt1[3]++;
            else if(strs[i][1]=='O') cnt2[3]++;
            else if(strs[i][1]=='+') cnt3[3]++;
        }


        for(int i=0;i<3;i++)
        {
            if(strs[i][2]=='X') cnt1[4]++;
            else if(strs[i][2]=='O') cnt2[4]++;
            else if(strs[i][2]=='+') cnt3[4]++;
        }

        for(int i=0;i<3;i++)
        {
            if(strs[0][i]=='X') cnt1[5]++;
            else if(strs[0][i]=='O') cnt2[5]++;
            else if(strs[0][i]=='+') cnt3[5]++;
        }

        for(int i=0;i<3;i++)
        {
            if(strs[1][i]=='X') cnt1[6]++;
            else if(strs[1][i]=='O') cnt2[6]++;
            else if(strs[1][i]=='+') cnt3[6]++;
        }

        for(int i=0;i<3;i++)
        {
            if(strs[2][i]=='X') cnt1[7]++;
            else if(strs[2][i]=='O') cnt2[7]++;
            else if(strs[2][i]=='+') cnt3[7]++;
        }

        bool f=false;

        for(int i=0;i<8;i++)
        {
            if(cnt1[i]==3)
            {
                cout<<"X\n";
                f=1;
                break;
            }
            else if(cnt2[i]==3)
            {
                cout<<"O\n";
                f=1;
                break;
            }
            else if(cnt3[i]==3)
            {
                cout<<"+\n";
                f=1;
                break;
            }
        }
        if(!f) cout<<"DRAW\n";
    }
   
}