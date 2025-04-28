#include<iostream>
using namespace std;
class box
{
	private:
		int width=25;
	public:
		friend void show(box b);
};
void show(box b)
{
	cout<<"The width of box = "<<b.width<<endl;
}
int main()
{
	box b;
	show(b);
	return 0;
}