#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;




class employee 
{
    private:
    int id,salary;
    string name;
    public:
    employee ()
    {
        id=salary=0;
        cout<<"hi \n";;;
    };
    void set(int a,int b,string str)
    {
        id=a;
        salary=b;
        name=str;
    };
    void get()
    {
        cout<<id<<' '<<salary<<' '<<name<<'\n';
    }
    ~employee()
    {
        cout<<"goodbye"<<endl;
    }
};




int main ()
{
    // FIO
    employee e1;
    employee *e2=new employee();
    e1.set(200013195,10000,"mohamed");
    delete e2;
    e1.get();
    cout<<"End"<<endl;
    cout<<"End 2"<<endl;

}