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

        The Solution : Frequency .....

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

        Array[r]++      Array[l+1]--   ## pre-processing


        

*/




int main ()
{
    FIO
    
}