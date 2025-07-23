#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("example.txt", ios::app);
    fout << "\nAppending this line.";
    fout.close();
    return 0;
}