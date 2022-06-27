#include<iostream>

using namespace std;

class Base
{
	public:
	int i, j;
	static int k;
	
	Base()
	{
		i = 10;
		j = 20;
	}
	
	void fun()
	{
		cout<<"Inside Base fun"<<"\n";
	}
};

int Base::k = 11;

class Derived : public Base
{
	public:
	int x, y;
	
	Derived()
	{
		x = 50;
		y = 60;
	}
	void gun()
	{
		cout<<"Inside Derived gun"<<"\n";
	}
};

int main()
{
	Base bobj;
	Derived dobj;
	
	cout<<sizeof(bobj)<<"\n";
	cout<<sizeof(dobj)<<"\n";
	
	cout<<bobj.i<<"\n";
	cout<<bobj.j<<"\n";
	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";
	cout<<bobj.k<<"\n";
	cout<<dobj.x<<"\n";
	
	bobj.fun();
	dobj.fun();
	dobj.gun();
	
	return 0; 
}


