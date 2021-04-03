#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	int A, B, C;
	int P1 = 1, P2 = 1;
	srand (time(0));
	A = 10 + rand()%90;
	for (int t=1; t<10; t++){
    srand(time(NULL)*t);
    C = 10 + rand()%90;
	}
	cout << "(1) ipucu: " << A << endl;
	cout << "(2) ipucu: " << C << endl;
	do
	{
		cout << "(Kullanici 1) Tahmininizi giriniz: ";
		cin >> B;
		if (B<A){
			P1++;
			cout << "Tahmininiz bizim sayimizdan kucuk." << endl;
		}
		if (B>A){
			P1++;
			cout << "Tahmininiz bizim sayimizdan buyuk." << endl;
		}
	}while (A!=B);
		system("cls");
		cout << "(Kullanici 1) Tebrikler!" << endl;
		cout << "Deneme sayiniz: " << P1 << endl;
	do
	{
		cout << "(Kullanici 2) Tahmininizi giriniz: ";
		cin >> B;
		if (B<C){
			P2++;
			cout << "Tahmininiz bizim sayimizdan kucuk." << endl;
		}
		if (B>C){
			P2++;
			cout << "Tahmininiz bizim sayimizdan buyuk." << endl;
		}
	}while (C!=B);
		system("cls");
		cout << "(Kullanici 2) Tebrikler!" << endl;
		cout << "Deneme sayiniz: " << P2 << endl;
	if (P2>P1){
	system("color F0");
	cout << "Kullanici 1 kazandi!" << "(" << P1 << "/" << P2 << ")" << endl;
	}
	else if (P1>P2){
	system("color F0");
	cout << "Kullanici 2 kazandi!" << "(" << P1 << "/" << P2 << ")" << endl;
	}
	else if (P1==P2){
	system("color F0");
	cout << "Beraberlik!" << endl;
	}
	return 0;
}
