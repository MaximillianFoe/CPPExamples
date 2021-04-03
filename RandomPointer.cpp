// Cihan Çoban 15031410011
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
    int *a;
    a = new int;
    srand(*a);
	for (int i=1; i<=10; i++){
		*a = 1 + rand() % 10;
		cout << i << ")" << "\t" << *a << "\t" << a << endl;
	}
	delete a;
	return 0;
}
