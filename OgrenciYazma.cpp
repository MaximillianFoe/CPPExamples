#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(int argc, char** argv){
    string data;
    ofstream f;
    f.open("cihan_bilgi.txt");
    for (int i=1;i<=10;i++){
        cout << i << "sayili ogrencinin adini ve soyadini giriniz: ";
        getline (cin,data);
        f << data << '\r';
        cout << i << "sayili ogrencinin notunu giriniz: ";
        getline (cin, data);
        f << data << '\r' << endl;
    }
    f.close();
    return 0;
}