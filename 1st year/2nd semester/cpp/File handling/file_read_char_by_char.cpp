#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("example.txt");
    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }
    return 0;
}