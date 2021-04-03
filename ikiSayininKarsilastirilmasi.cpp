#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int S1, S2;
	cout << "Ilk sayiyi giriniz: ";
	cin >> S1;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> S2;
	if(S1>S2)
	cout << "Ilk girdiginiz sayi daha buyuk: " << S1 << endl;
	else if(S1==S2)
	cout << "Girdiginiz iki sayi birbirine esit!" << endl;
	else if(S1<S2)
	cout << "Ikinci girdiginiz sayi daha buyuk: " << S2 << endl;	
	system("PAUSE");
	return 0;
}
