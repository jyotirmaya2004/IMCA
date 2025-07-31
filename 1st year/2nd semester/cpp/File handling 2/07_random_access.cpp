#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("random.txt", ios::out | ios::in | ios::trunc);
    file << "1234567890";
    file.seekp(4);
    file << 'X';
    file.seekg(0);
    string data;
    file >> data;
    cout << data << endl;
    file.close();
    return 0;
}