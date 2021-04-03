#include <iostream>
using namespace std;
// Cihan Çoban //

int main(int argc, char** argv) {
	int N;
	int T = 0;
	cout << "n degeri: ";
	cin >> N;
	cout << "1 + ";
	for (int i = 1; i<=N; i++){
		cout << "1/" << i << " + ";
		T = T + i;
	}
	cout << endl;
	cout << "cevap: " << T+1  << "/" << T;
	return 0;
}
