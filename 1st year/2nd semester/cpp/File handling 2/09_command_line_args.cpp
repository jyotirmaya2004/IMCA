#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: ./program filename" << endl;
        return 1;
    }

    ifstream fin(argv[1]);
    if (!fin) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();
    return 0;
}