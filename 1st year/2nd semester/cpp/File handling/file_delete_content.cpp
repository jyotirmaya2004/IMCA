#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("example.txt", ios::trunc);
    fout.close();
    cout << "File content deleted." << endl;
    return 0;
}