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
        int n;
        cin>>n;
        vector<string>vec(n);

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            int nextTemp=temp+1,prevTemp=temp-1;
            string tempChar=to_string(temp),nextTempChar=to_string(nextTemp),prevTemoChar=to_string(prevTemp);
            if(i==0)
            {
                vec[i]=tempChar;
                continue;;
            }

            int prevSz=vec[i-1].size();
            if(temp==1)
            {
                vec[i]=tempChar;
                vec[i]=vec[i-1]+vec[i];
            }
            else
            {
                char ch;
                bool f=0;
                int c=0;
                string str;
                for(int k=prevSz-1;k>=0;k--)
                {
                    if(f) break;

                    // for(int j=0;j<prevSz;j++)
                    // {
                        ch=prevTemoChar[0];
                        if(vec[i-1][prevSz-1-c]==ch)
                        {
                            if (f) break;

                            for(int j=0;j<prevSz-c-1;j++)
                            {
                                
                                vec[i]+=vec[i-1][j];
                            }

                            //vec[i]=vec[i-1];
                            ch=tempChar[0];
                            vec[i]+=ch;
                            f=1;
                        }
                    //}
                    c++;
                }
            }

            // else if()
            // else if(nextTempChar==vec[i-1][prevSz-1]&&temp!=1)
            // {
            //     bool f=true;
            //     int it=i;
            //     while(f)
            //     {
            //         if(vec[it][prevSz-1])
            //     }
            // }
        }

        
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<vec[i].size();j++)
                {
                    cout<<vec[i][j];
                    if(j!=vec[i].size()-1) cout<<'.';
                }
                cout<<'\n';
            }
    }
    

}