#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("mode.txt", ios::out | ios::app);
    file << "Appended text\n";
    file.close();
    return 0;
}