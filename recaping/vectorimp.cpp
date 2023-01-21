#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

class Vector 
{
  private:
    int *data;
    int size,cap;
    void expand ()
    {
        int *newdata=new int [cap*2];
        memcpy(newdata,data,size*sizeof(int));
        delete[]data;
        data=newdata;
        cap*=2;
    }


  public:
  Vector ()
  {
    size=0;
    cap=4;
    data = new int [4] ;
  }
  void pushback(int x)
  {
    data[size++]=x;
  }
  void popback()
  {
    size--;
  }
  int & operator [] (int indx)
  {
    return data [indx];
  }

};





int main ()
{
   //FIO;
   Vector vec;
   vec.pushback(8);
   cout<<vec[0]<<'\n';
   vec[0]=9;
   cout<<vec[0];

}