#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	string isim, numara, ai;
	ifstream phone;
	system("color F0");
	phone.open("Phone.txt");
	cout << "Isim giriniz: ";
	cin >> ai;
	while (!phone.eof()){
	phone >> isim;
	phone >> numara;
	if (isim==ai)
	cout << "Numara: " << numara;
	else
	break;
	}
	cout << "Bulunamadi.";
	phone.close();
	return 0;
}
