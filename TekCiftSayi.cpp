#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int tek, cift, sayi;
	tek = 0;
	cift = 0;
	for (int i = 0;i<10;i++)
	{
	cout << "Sayi giriniz: ";
	cin >> sayi;
	if (sayi %2 == 0)
	cift++;
	if (sayi %2 == 1)
	tek++;
	}
	cout << cift << " tane cift sayi vardir." << endl;
	cout << tek << " tane tek sayi vardir." << endl;
	system("pause");
	return 0;
}
