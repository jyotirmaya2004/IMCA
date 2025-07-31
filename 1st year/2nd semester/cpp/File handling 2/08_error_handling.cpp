#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("nonexistent.txt");
    if (!fin) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }
    return 0;
}