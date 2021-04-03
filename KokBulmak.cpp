#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double A, B, C, D;
	cout << "A^2+BX+C" << endl;
	cout << "========" << endl;
	cout << "A'yi giriniz: ";
	cin >> A;
	cout << "B'yi giriniz: ";
	cin >> B;
	cout << "C'yi giriniz: ";
	cin >> C;
	D = ((pow(B,2))-(4*A*C));
	cout << "delta: " << D << endl;
	if (D<0){
	cout << "kok bulunmuyor." << endl;
	}
	else if (D==0){
	cout << "cakisik kok: " << (-B+sqrt(D))/(2*A) << endl;
	}
	else if (D>0){
	cout << "ilk kok: " << (-B+sqrt(D))/(2*A) << endl;
	cout << "ikinci kok: " << (-B-sqrt(D))/(2*A) << endl;
	}
	system("pause");
	return 0;
}
