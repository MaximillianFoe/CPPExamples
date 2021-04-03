#include <iostream>
using namespace std;
// Cihan Çoban //

class THY{
	private:
		int uNu;
		float uMes;
		float uYak;
	public:
		setuNu(int A){
			uNu = A;
		}
		setuMes(float B){
			uMes = B;
		}
		setuYak(float C){
			uYak = C;
		}
		getuNu(){
		return uNu;
		}
		getuMes(){
		return uMes;
		}
		getuYak(){
		return uYak;	
		}
		kullaniciPaneli(){
			int A;
			float B;
			cout << "ucus numarasi: ";
			cin >> A;
			setuNu(A);
			cout << "mesafe: ";
			cin >> B;
			setuMes(B);
		}
		yakitHesapla(){
		if (getuMes() <=1000){
			setuYak(500);
		}
		if (getuMes() > 1000 && getuMes() <= 2000){
			setuYak(1100);
		}
		if (getuMes() > 2000){
			setuYak(2200);
		}			
		}
		bilgiVer(){
			cout << "ucus numarasi: " << getuNu() << endl;
			cout << "mesafe: " << getuMes() << endl;
			cout << "yakit: " << getuYak() << endl;
		}
};

int main(int argc, char** argv) {
	THY A;
	A.kullaniciPaneli();
	A.yakitHesapla();
	A.bilgiVer();
	return 0;
}
