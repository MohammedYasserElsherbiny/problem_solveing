#include <bits/stdc++.h>
using namespace std;

class f
{
	public:
	void virtual funa ()
	{
		cout<<"A\n";
	}
};
class b : public f
{
	public:
	void  funb ()
	{
		cout<<"B\n";
	}
};
class c : public f
{
	public:
	void func ()
	{
		cout<<"C\n";
	}
};
class d : public b, public c
{
	public:
	int a;
	void fund ()
	{
		cout<<"D\n";
	}
	
	
	~d ()
	{
		cout<<a<<'\n';
	}
};

int main ()
{
	d a;
	d b,d,c;




	
	a.a=1;
	b.a=2;
	c.a=3;
	d.a=4;

	
}