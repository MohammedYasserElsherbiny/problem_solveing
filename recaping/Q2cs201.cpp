#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

// class Time
// {
//     private:
//     int a;
//     const int b;
//     public:
//     Time (): b(),a(6)
//     {
//         //a=10; can
//         //b=10; cant
//     }
//     void c(int r) const
//     {
//         //cin>>a; cant
//         //a=5; cant
//         //cin>>a; cant
//         //cin>>b; cant
//         //b=5; cant
//         //r=10; can
//         //cin>>r; can
//         cout<<r<<a<<b;
//     }
// };

// class v
// {
//     public:
//     v()
//     {
//         cout<<"this is a v\n";
//     }
//     ~v()
//     {
//         cout<<"this was v\n";
//     }
// };
// class f
// {
//     public:
//     f()
//     {
//         cout<<"this is a f\n";
//     }
//     ~f()
//     {
//         cout<<"this was a f\n";
//     }
// };
// class c:public v,public f
// {};

// class coun
// {
//     private:
//     int t;
//     public:
//     coun (int l)
//     {
//         //cin>>l;
//         t=l;
//     }
//     coun operator ++ ()
//     {
//         return coun(++t);
//     }
//     void print ()
//     {
//         cout<<t;
//     }
// };

// class complexx
// {
//     private:
//     int real,imag;
//     public:
//     complexx (int r=0,int i=0)
//     {
//         real=r;
//         imag=i;
//     }
//     complexx operator+(complexx &obj)
//     {
//         complexx res;
//         res.real=real+obj.real;
//         res.imag=imag+obj.imag;
//         return res;
//     }
//     void print ()
//     {
//         cout<<real<<" + i"<<imag<<endl;
//     }
// };

class A
{
    protected:
    int x=8;
};
// class C
// {
//     public:
//     C ()
//     {
//         cout<<"C\n";
//     }
//     void show()
//     {
//         cout<<"C\n";
//     }
//     ~C ()
//     {
//         cout<<"~C\n";
//     }
// };
class B: public A
{
     public:
    // void show ()
    // {
    //     cout<<x;
    // }

};

class D: public B
{
    public:
    void print ()
    {
        x=10;
        cout<<x;
    }
};

int main ()
{
    FIO

    // Time  b;
    // b.c(1);

    //c k;

    D r;
    //r.show();
    //cout<<r.x;
    r.print();
    //r.show();

    // coun c(5);
    // ++c;
    // c.print();
    // complexx c1(1,2),c2(3,4);
    // complexx c3(0,0);
    // c3=c1+c2;
    // c3.print();
    // A var1;
    // B var2;
    // A *p1=new B;
    // //B*p2=new A;
    // // var1.show();
    //  var2.show();
    //p1->show();
    //p2->show();

    // int x=9;
    // {
    //     x=0;
    // }
    // cout<<x;
    
    

}