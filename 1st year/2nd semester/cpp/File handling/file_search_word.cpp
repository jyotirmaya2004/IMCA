#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("example.txt");
    string word, target = "file";
    bool found = false;
    while (fin >> word) {
        if (word == target) {
            found = true;
            break;
        }
    }
    if (found) cout << "Word found!" << endl;
    else cout << "Word not found." << endl;
    return 0;
}