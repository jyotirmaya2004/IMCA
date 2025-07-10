
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    file << "Writing to a file using C++";
    file.close();
    cout << "File written!" << endl;
    return 0;
}
