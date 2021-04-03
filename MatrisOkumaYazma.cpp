#include <iostream>
using namespace std;

void M_AL(int MA[][20], int M, int N){
	cout << "Degerleri giriniz: " << endl;
	for(int i=0;i<M;i++){
    for(int j=0;j<N;j++)
    cin >> MA[i][j];
	}
}

void M_OK(int MA[][20], int M, int N){
	for(int i=0;i<M;i++){
    for(int j=0;j<N;j++)
    cout << MA[i][j] << "\t";
        cout << endl;
    }
}
int main(int argc, char** argv) {
	int M, N, MA[20][20];
	cout << "Satir sayisini giriniz: ";
	cin >> M;
	cout<<"Sutun sayisini giriniz: ";
	cin >> N;
  M_AL(MA, M, N);
  M_OK(MA, M,N);
	return 0;
}


