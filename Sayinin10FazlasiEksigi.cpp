#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int S;
	cout << "Bulmak istediginiz sayiyi giriniz: ";
	cin >> S;
	cout << "Sayinizin 10 fazlasi: " << S+10 << endl;
	cout << "Sayinizin 10 eksigi: " << S-10 << endl;
	system("PAUSE");
	return 0;
}
