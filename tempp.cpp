#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class shape
{
protected:
	float area;
public:
	void Get_area()
	{
		cout << "lll";
	}
};
class shape_2d:public shape
{
protected:
	float par;

public:
	void Get_par()
	{

	}

};
 class square:public shape_2d
 {
 private:
	 float l;
 public:
     void Get_par()
		 {
			 cout << "par of square" << par;
		 }
	 square(float L)
	 {
		 l = L;
		 par = l * 4;
		 area = pow(l, 2);
		 
		 void Get_par();
	 }
	

 };
int main()
{
	square ss(1);
	
}