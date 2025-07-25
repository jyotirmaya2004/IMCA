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
			cout<<"Your value : "<<a<<endl;
		}
		void operator++()
		{
			a=a+1;
		}
};
int main()
{
	myclass aa,bb;
	aa.getvalue();
	aa.putvalue();
	++aa;
	cout<<"After increment : "<<endl;
	aa.putvalue();
	cout<<endl;
	bb.getvalue();
	++bb;
	cout<<"After increment : "<<endl;
	bb.putvalue();

}