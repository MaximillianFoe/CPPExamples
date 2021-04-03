#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	system ("color C7");
	int SY;
	float ORT;
	cout << "Ogrenci sayisi giriniz: ";
	cin >> SY;
	int OSY[SY];
	int NTP;
	for (int i=0; i<SY; i++){
	cout << "Not giriniz: ";
	cin >> OSY[i];
	NTP += OSY[i];
	}
	int TEMIZ;
	loop:
	cout << "Ekrani temizlemek istiyor musunuz? (1/0): ";
	cin >> TEMIZ;
	if (TEMIZ == 1){
	system("cls");
	system ("color A7");
	}
	if (TEMIZ > 1 || TEMIZ < 0){
	goto loop;
	}
	system ("color B7");
	cout << "Ortalama: " << NTP/SY << endl;
	cout << "Sira | Not | N-O" << endl;
	for (int j=0; j<SY; j++){
	cout << j << "    |  " << OSY[j] << " |  " << OSY[j]-(NTP/SY) << endl;
	}
	system("pause");
	return 0;
}
