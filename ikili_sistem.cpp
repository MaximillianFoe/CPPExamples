#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i=0, taban[100], x;
    cout<<"onluk tabandaki sayiyi giriniz: ";
    cin >> x;
    while(x>=1){
    i++;
    taban[i]=x%2;
    x = x / 2;                         
    }
    cout << "ikili tabandaki hali: ";
    while(i > 0){
    cout << taban[i];
    i--;
    }
    cout << endl;
    system("pause");
    return 0;
}
