#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("sample.txt");
    fout << "Hello, file stream!";
    fout.close();
    ifstream fin("sample.txt");
    string line;
    getline(fin, line);
    cout << "Read: " << line << endl;
    fin.close();
    return 0;
}