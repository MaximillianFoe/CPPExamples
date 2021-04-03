#include <iostream>
using namespace std;
class ZMN{
    public:
    void setSAAT(int A){
        SAAT = A;
    }
    int getSAAT(){
        return SAAT;
    }
    void setDKK(int B){
        DKK = B;
    }
    int getDKK(){
        return DKK;
    }
    void ZMNYAZ(){
        cout << getSAAT() << " : " << getDKK() << endl;
    }
    void DKKEKL(int DK){
        int DK1 = getDKK();
        int ST1 = getSAAT();
        if (DK >= 60){
            ST1=ST1+1;
            DK1=DK%60;
            setSAAT(ST1);
            setDKK(DK1);
        }
        if (DK1+DK >= 60){
            ST1=ST1+1;
            DK1=DK1+DK-60;
            setSAAT(ST1);
            setDKK(DK1);
        }
        if (DK < 60 && DK1 < 60){
            DK1=DK1+DK;
            setDKK(DK1);
        }
    }
    private:
    int SAAT;
    int DKK;
};

int main(int argc, const char * argv[]) {
    int ZU, XU, VU;
    char CU;
    ZMN TME;
    TME.setSAAT(12);
    TME.setDKK(34);
    cout << "Saat: ";
    cin >> ZU;
    TME.setSAAT(ZU);
    cout << endl;
    cout << "Dakika: ";
    cin >> XU;
    TME.setDKK(XU);
    cout << endl;
    YES:
    cout << "Eklenecek Dakika: ";
    cin >> VU;
    TME.DKKEKL(VU);
    cout << endl;
    TME.ZMNYAZ();
    cout << "Daha Dakika Eklensin mi (Y/N): ";
    cin >> CU;
    if (CU == 'Y'){
        goto YES;
    }
    if (CU == 'N'){
        return 0;
    }
    
    return 0;
}
