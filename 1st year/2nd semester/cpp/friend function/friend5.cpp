#include<iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    Employee(int s) {
      salary = s;
    }

    // Declare friend function
    friend int main();
};


int main() {
  Employee myEmp(50000);
  cout<<myEmp.salary;
  return 0;
}