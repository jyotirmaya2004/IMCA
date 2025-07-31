#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int id;
    float score;
};

int main() {
    Data d1 = {1, 95.5}, d2;
    ofstream fout("data.bin", ios::binary);
    fout.write((char*)&d1, sizeof(d1));
    fout.close();

    ifstream fin("data.bin", ios::binary);
    fin.read((char*)&d2, sizeof(d2));
    cout << "ID: " << d2.id << ", Score: " << d2.score << endl;
    fin.close();
    return 0;
}