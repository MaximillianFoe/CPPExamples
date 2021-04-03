#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int A, B;
	B = 1;
	float S;
	S = 0;
	cout << "Adet giriniz: ";
	cin >> A;
	if (A == 1){
	cout << "1/1";
	}
	else for (int i=0;i<A;i++){
	S=(i+1)*B;
	B=B*(-1);
	cout << "1/" << S << "+";
	}
	cout << endl;
	system("pause");
	return 0;
}
