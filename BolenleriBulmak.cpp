#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	for (int i=1;i<=sayi;i++){
	if (sayi%i == 0)
	cout << i << endl;
	}
	system("pause");
	return 0;
}
