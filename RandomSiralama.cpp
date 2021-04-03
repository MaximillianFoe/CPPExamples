#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int S[20];
	int T=20;
	srand (time(NULL));
	system("color F0");
		for (int i=1;i<=20;i++){
			S[i] = 100 + rand() %900 ;
			cout << S[i] << " - " << i << endl;
		}
	cout << "- - -" << endl;
		for (int j=0;j<T-1;j++){
			for (int z=0;z<T-j-1;z++){
			if (S[z]>S[z+1]){
				int TMP = S[z];
				S[z] = S[z+1];
				S[z+1] = TMP;
			}
			}
		}
			for (int v=0;v<20;v++){
				cout << S[v] << " - " << v+1 <<  endl;
			}
	system("pause");
	return 0;
}
