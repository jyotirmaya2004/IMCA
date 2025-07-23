#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("example.txt");
    string word;
    int count = 0;
    while (fin >> word) count++;
    cout << "Total words: " << count << endl;
    return 0;
}