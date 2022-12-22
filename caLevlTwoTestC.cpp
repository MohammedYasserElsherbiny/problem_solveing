#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 2e5+5;
const ll mod = 1e9+7;








int main ()
{
    FIO

    int T;
	cin >> T;
	while (T--){
        int n;
        cin >> n;
        if (n == 1){
            cout << 9 << '\n';
        }else{
            cout << 9;
            int cur = 8;
            for (int i = 2;i <= n; i++){
                cout << cur%10;
                cur++;
            }
            cout<<'\n';
        }
	}

   
   
    
    
    
}