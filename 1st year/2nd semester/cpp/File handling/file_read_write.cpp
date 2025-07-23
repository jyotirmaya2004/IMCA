#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("example.txt");
    fout << "Hello, file!";
    fout.close();

    ifstream fin("example.txt");
    string line;
    getline(fin, line);
    cout << "Read: " << line << endl;
    fin.close();
    return 0;
}