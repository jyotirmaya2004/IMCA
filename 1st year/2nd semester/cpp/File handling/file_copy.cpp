#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("example.txt");
    ofstream fout("copy.txt");
    string line;
    while (getline(fin, line)) fout << line << "\n";
    fin.close();
    fout.close();
    return 0;
}