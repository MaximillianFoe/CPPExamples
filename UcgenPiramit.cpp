#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int A, B, C;
	cout << "Ucgen Satir Sayisi: ";
	cin >> A;
	for (int i=1; i<=A; i++){
	for (B=(A-1); B>=i; B--){
	cout << " ";
	}
	for (C=1; C<=(2*i-1); C++){
	cout << "#";
	}
	cout << endl;
	}
	cout << endl;
	system ("pause");
	return 0;
}
