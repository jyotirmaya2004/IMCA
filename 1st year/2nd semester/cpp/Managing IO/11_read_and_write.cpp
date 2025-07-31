#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    char name[30];
    int roll;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
    }

    void show() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1;

    // Write to file
    ofstream fout("student.dat", ios::binary);
    s1.input();
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    // Read from file
    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    s2.show();
    return 0;
}
