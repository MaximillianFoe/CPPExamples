#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	int A, B, C;
	int D = 0;
	C = 0;
	srand (time(0));
	A = 10 + rand()%90;
	cout << "Kaybettin! Deneme sayiniz: 10! Cevap: " << A << endl;
	do
	{
		cout << "Tahmininizi giriniz: ";
		cin >> B;
		D++;
		if (B<A && D<=10){
			C++;
			cout << "Tahmininiz bizim sayimizdan kucuk." << endl;
		}
		if (B>A && D<=10){
			C++;
			cout << "Tahmininiz bizim sayimizdan buyuk." << endl;
		}
		if (D==10 && A!=B){
			cout << "Kaybettin! Deneme sayiniz: 10! Cevap: " << A << endl;
			goto Bitir;
		}
	}while (A!=B);
		system("cls");
		cout << "Tebrikler!" << endl;
		cout << "Deneme sayiniz: " << C << endl;
		system("color F0");
	Bitir:
	system("pause");
	return 0;
}
