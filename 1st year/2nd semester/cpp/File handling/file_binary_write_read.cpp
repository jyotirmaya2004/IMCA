#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num = 42;
    ofstream fout("data.bin", ios::binary);
    fout.write((char*)&num, sizeof(num));
    fout.close();

    int read_num;
    ifstream fin("data.bin", ios::binary);
    fin.read((char*)&read_num, sizeof(read_num));
    cout << "Read number: " << read_num << endl;
    return 0;
}