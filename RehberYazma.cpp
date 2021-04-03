#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	string isim, numara;
	ofstream phone;
	phone.open("Phone.txt");
	cout << "Isim/Numara giriniz, bitmesi icin numara kismina '0' giriniz.." << endl;
	system("color F0");
	while (1){
	cout << "Isim: ";
	getline (cin, isim);
	cout << "Numara: ";
	getline (cin, numara);
	if (numara=="0"){
		break;
	}
	phone << "\n" << isim;
	phone << "\n" << numara;
	}
	phone.close();
	return 0;
}
