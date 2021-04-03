#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(int argc, char** argv){
    string data;
    ifstream f;
    cout << "istenilen bilgiler: " << endl;
    f.open("cihan_bilgi.txt");
    getline (f, data, '\r');
    cout << data;
    f.close();
    return 0;
}