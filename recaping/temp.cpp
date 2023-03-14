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
	
	int temp=1;
	char ch='1';

	if(temp==ch ) cout<<"fff";
	
}