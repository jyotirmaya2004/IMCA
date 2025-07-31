#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("pointer.txt", ios::out);
    file << "ABCDEFG";
    file.close();

    file.open("pointer.txt", ios::in);
    file.seekg(3);
    char ch;
    file.get(ch);
    cout << "Character at position 3: " << ch << endl;
    file.close();
    return 0;
}