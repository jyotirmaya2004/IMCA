#include<iostream>
using namespace std;
class Student{
public:
	string name;
	int age;
	float gpa;
};
int main()
{
	int n;
	cout<<"Enter number of student : ";
	cin>>n;
	Student s[n];
	for (int i = 0; i < n; i++)
	{
		cout<<"\nEnter student name : ";
		cin>>s[i].name;
		cout<<"Enter student age : ";
		cin>>s[i].age;
		cout<<"Enter student gpa : ";
		cin>>s[i].gpa;
		cout<<endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<"\nStudent name : "<<s[i].name<<endl;
		cout<<"Student age : "<<s[i].age<<endl;
		cout<<"Student gpa : "<<s[i].gpa<<endl;
	}
}