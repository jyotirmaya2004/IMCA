
#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    void input() {
        cin >> name;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s[2];
    for (int i = 0; i < 2; i++) s[i].input();
    for (int i = 0; i < 2; i++) s[i].display();
    return 0;
}
