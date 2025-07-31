#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("test.txt");
    fout << "Testing open and close.";
    fout.close();

    ifstream fin;
    fin.open("test.txt");
    string text;
    getline(fin, text);
    cout << text << endl;
    fin.close();
    return 0;
}