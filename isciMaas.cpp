#include <iostream>

using namespace std;


class Isci{
	
	private:
		int id;
		string isim;
		string soyIsim;
		string departman;
		double saat;
		double saatlikUcret;
		
		
	public:
		
		Isci(int id, string isim,string soyIsim, string departman, double saat, double saatlikUcret ){
			
			setId(id);
			setIsim(isim);
			setsoyIsim(soyIsim);
			setDepartman(departman);
			setSaat(saat);
			setSaatlikUcret(saatlikUcret);
				
		}
	
		void setId(int a){
			
			id=a;
		}
		
		int getId(){
			
			return id;
		}
		
		void setIsim(string ad){
			
			isim=ad;
			
		}
		string getIsim(){
			
			return isim;
		}
		void setsoyIsim(string soyAd){
		
			soyIsim=soyAd;
		}
		
		string getSoyIsim(){
		
		return soyIsim;
		
		}
		
		void setDepartman(string bolum){
			
			departman=bolum;
		}
		
		string getDepartman(){
			
			return departman;
			
		}
		
		void setSaat(double s){
			
			saat=s;
			
		}
		
		double getSaat(){
			
			return saat;
		}
		
		void setSaatlikUcret(double su){
			
			saatlikUcret=su;
		}
		
		double getSaatlikUcret(){
			
			return saatlikUcret;
		}
		
		
		double maasHesapla(){
			
			double maas;
	   if(getSaat()<=30) //saat 30 a eþit ve az ise
	   {
		maas=getSaatlikUcret()*getSaat()*2; //maaþ hesap 
	   }
	   else  
	   {
		 maas=30 *getSaatlikUcret() + (saat-30) * 2.5; //maaþ hesap
	   }
	   return maas;
				
			
		}
		void bilgiGoster(){
			
			cout<<"   "<<getId()<<"\t"<<getIsim()<<"\t"<<getSoyIsim()<<"\t\t"<<getDepartman()<<"\t"<<getSaat()<<"\t"<<getSaatlikUcret()<<"\t\t"<<maasHesapla()<<"\n";
			
		}
		
		
};


	int main(int argc, char** argv) {
	
	
	Isci isci1(1,"Ali","Yilmaz","Bilgisayar",34,1.5);
	Isci isci2(2,"Ece","Kilic","Elektronik",28,1.75);
	Isci isci3(3,"Veli","Oner","Bilgisayar",40,1.35);
	Isci isci4(4,"Hasan","Kaba","Endustri",25,1.4);
	Isci isci5(5,"Onur","Kivrak","Elektronik",37,1.65);
	
	isci1.maasHesapla();
	isci2.maasHesapla();
	isci3.maasHesapla();
	isci4.maasHesapla();
	isci5.maasHesapla();
	
	
	cout<<"\n\t\t\t\t--Calisan Bilgileri--\n\n";
	cout<<"   Id\t"<<"Isim - Soy Isim\t"<<"\tDepartman\t"<<"Saat\t"<<"Saatlik Ucret\t"<<"Maas\n";
	cout<<"---------------------------------------------------------------------------------\n";
	
	 isci1.bilgiGoster();
	 isci2.bilgiGoster();
	 isci3.bilgiGoster();
	 isci4.bilgiGoster();
	 isci5.bilgiGoster();
	
	
	
	return 0;
	}
