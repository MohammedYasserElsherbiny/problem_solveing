#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;


/*
            *Static Range Queries*
        
        Frequency Array:

        % Frequency Array means to store the number of occurrences 
        (frequency) of each element you have.

        % This will save much time (complexity) by just access 
        the frequency in O(1) instead of iterating over the whole elements each time O(n).
        
        Problems:

        1- The domain is large      2- Negative numbers (can work with a trick)
        3- Float numbers            4- The elements not even numbers

        The Solution : Frequency map 

        ======================================================================================================================

        Prefix Array:

                                    ---------------------->
            can be used with        multiplication , sum , xor , etc

            Array:                  2   1   0   3   5    6

            Prefix Sum Array:       2   3   3   6  11  17

        Suffix Array:

                                    <----------------------
            can be used with        multiplication , sum , xor , etc

            Array:                  2    1    0   3   5   6

            Suffix Sum Array        17   15   14   14  11  6


        Two Tricks:

        1- Range Sum using Prefix Sum:

        prefixSum[r] - prefixSum[l-1]  ## one-indexed


        2- The intersection:

        Array[l]++      Array[r+1]--   ## pre-processing


        

*/

//  4 4 5 1 2
// freq[7]  
// cnt++
// freq.push_back     ------->     freq[5]   ------>   freq[element]++;
// freq [vec[i]]++
// vector  name (7,0)    


/*
    int n=1e9;
    int cnt=0,cnt2,cnt3;
    for(------)
    {
        if -->5  cnt++;
    }

    print cnt  O(mn)   

    print freq[5]  O(1)


     # # # # # 
     - - - -
       - - - -     
*/
int main ()
{
    FIO

    int n;
    cin>>n;
    vector<int> vec(n+1),prefixsum(n+5);

    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }

    prefixsum[0]=vec[0];

    for(int i=1;i<=n;i++)
    {
        prefixsum[i]=vec[i]+prefixsum[i-1];
    }

    int q;
    cin>>q;
    while (q--)
    {
        int i , j;
        cin>>i>>j;

        i++,j++;

        cout<<prefixsum[j]-prefixsum[i-1]<<'\n';

    }
    

    
}