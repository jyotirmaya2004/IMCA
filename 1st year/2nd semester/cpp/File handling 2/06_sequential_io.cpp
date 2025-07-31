#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("seq.txt");
    fout << "Line 1\nLine 2\n";
    fout.close();

    ifstream fin("seq.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}