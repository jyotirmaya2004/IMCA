#include<iostream>
using namespace std;
class myclass{
	public:
		int a;
		void getvalue()
		{
			cout<<"Enter a number : ";
			cin>>a;
		}
		void putvalue()
		{
			cout<<"Your entered value : "<<a<<endl;
		}
		void sub()
		{
			cout<<"Substraction of two object : "<<a<<endl;
		}
		myclass operator-(myclass b)
		{
			myclass c;
			c.a=(a-b.a);
			return c;
		}
};
int main()
{
	myclass aa,bb,cc;
	aa.getvalue();
	bb.getvalue();
	cc=aa-bb;
	aa.putvalue();
	bb.putvalue();
	cc.sub();


}