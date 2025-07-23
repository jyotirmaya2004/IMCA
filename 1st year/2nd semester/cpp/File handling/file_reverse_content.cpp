#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("example.txt");
    vector<string> lines;
    string line;
    while (getline(fin, line)) lines.push_back(line);
    fin.close();

    for (int i = lines.size() - 1; i >= 0; i--) {
        cout << lines[i] << endl;
    }
    return 0;
}