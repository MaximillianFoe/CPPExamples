#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int S1, S2, SF;
	cout << "Ilk sayiyi giriniz: ";
	cin >> S1;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> S2;
	SF = S1-S2;
	cout << "Sayilarin farki: " << SF << endl;
	system("PAUSE");
	return 0;
}
