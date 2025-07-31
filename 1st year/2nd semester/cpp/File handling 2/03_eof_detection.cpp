#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("sample.txt");
    string word;
    while (!fin.eof()) {
        fin >> word;
        cout << word << " ";
    }
    fin.close();
    return 0;
}