#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("example.txt");
    string line;
    int count = 0;
    while (getline(fin, line)) count++;
    cout << "Total lines: " << count << endl;
    return 0;
}