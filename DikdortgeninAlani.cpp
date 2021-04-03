#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int K1, K2;
	cout << "Dikdortgenin bir kosesini giriniz: ";
	cin >> K1;
	cout << "Dikdortgenin diger kosesini giriniz: ";
	cin >> K2;
	if (K1 == K2){
	cout << "Sekil dikdortgen degil!" << endl;
	}
	else {
	cout << "Dikdortgeninizin alani: " << K1*K2  << endl;
	}
	system("pause");
	return 0;
}
