
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string text;
    ifstream file("output.txt");
    while (getline(file, text)) {
        cout << text << endl;
    }
    file.close();
    return 0;
}
