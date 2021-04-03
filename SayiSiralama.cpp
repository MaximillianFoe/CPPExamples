#include <iostream>
using namespace std;

void SLM(int S[], int N){
	for (int j=0;j<N-1;j++){
		for (int z=0;z<N-j-1;z++){
			if (S[z]>S[z+1]){
				int TMP = S[z];
				S[z] = S[z+1];
				S[z+1] = TMP;
			}
		}
	}
}
void GST(int S[], int N){
	for (int v=0;v<N;v++){
		cout << S[v] << " - " << v+1 <<  endl;
	}
}
void KA(int S[], int N){
	for (int j=0;j<N;j++){
			cout << "Sayi giriniz: ";
			cin >> S[j];	
	}
}
int main(int argc, char** argv) {
		int N;
			cout << "Sayi adetini giriniz: ";
			cin >> N;
		int S[N];
			system("color F0");
			KA(S,N);
			GST(S,N);
		cout << "- - -" << endl;
			SLM(S,N);
			GST(S,N);
	system("pause");
	return 0;
}
