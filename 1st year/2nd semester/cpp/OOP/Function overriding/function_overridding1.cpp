#include<iostream>
using namespace std;
class A
{
	public:
	virtual void fun()
	{
		cout<<"Hello";
	}
};
class B:public A{
	public:
	void fun()override{
		cout<<"World";
	}
};

int main()
{
	B obj;
	obj.fun();
	return 0;
}