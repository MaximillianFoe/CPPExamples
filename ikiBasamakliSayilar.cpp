#include <iostream>
using namespace std;

    int FAK(int SS){
    int i;
    int FAAK = 1;
    for (i=SS;i>0;i--){
        FAAK = FAAK*i;
    }
    return FAAK;
    }

int main(int argc, const char * argv[]) {
    int A;
    int BB, NN;
    while(1)
    {
    cout << "Sayi giriniz: ";
    cin >> A;
        if (A > 99 || A < 10){
            cout << "istenilen aralikta sayi girmediniz." << endl;
        }
        if (A < 99 && A > 10){
            BB = (A%100)/10;
            NN = A%10;
            cout << "A: " << BB << endl;
            cout << "B: " << NN << endl;
            if (A > 50 && NN > 0){
                cout << "A! + B! = " << FAK(BB)+FAK(NN) << endl;
                return 0;
            }
            if (A > 50){
                cout << "A! + B! = " << FAK(BB) << endl;
                return 0;
            }
            if (A <= 50){
                cout << "A^2 + B^2 = " << BB*BB+NN*NN << endl;
                return 0;
            }
        }
        }
}
