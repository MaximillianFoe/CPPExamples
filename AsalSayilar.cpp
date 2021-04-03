#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi;
	int bolen=0;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	for (int i=1; i<=sayi; i++){
	if (sayi%i==0)
	bolen++;
	}
	if (bolen>2){
	cout << "Asal sayi degildir." << endl;
	}
	if (bolen==2){
	cout << "Asal sayidir." << endl;
	}
	system("pause");
	return 0;
}
