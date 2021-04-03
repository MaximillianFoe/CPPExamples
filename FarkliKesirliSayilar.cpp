#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int A, B;
	B = (-1);
	float S;
	S = 0;
	cout << "Adet giriniz: ";
	cin >> A;
	if (A == 1){
	cout << "1/1";
	}
	else for (int i=1;i<A;i++){
	cout << "1/1" << "+";
	S=(i+2)*B;
	B=B*(-1);
	cout << "1/" << S << "+";
	i++;
	}
	cout << endl;
	system("pause");
	return 0;
}
